  LDA #$03
  JMP there
  BRK
  BRK
  BRK
there:
  STA $0200
  LDX #$00
  LDY #$00
firstloop:
  TXA
  STA $0200,Y
  PHA
  INX
  INY
  CPY #$10
  BNE firstloop ;loop until Y is $10
secondloop:
  PLA
  STA $0200,Y
  INY
  CPY #$20      ;loop until Y is $20
  BNE secondloop
LDY #$01
LDA #$03
STA $01
LDA #$07
STA $02
LDX #$0a
STX $0704
LDA ($01),Y
LDX #$01
LDA #$05
STA $01
LDA #$06
STA $02
LDY #$0a
STY $0605
LDA ($00,X)
LDA #$01
STA $f0
LDA #$cc
STA $f1
JMP ($00f0) ;dereferences to $cc01
  LDX #$08
decrement:
  DEX
  STX $0200
  CPX #$03
  BNE decrement
  STX $0201