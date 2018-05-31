;bubble sort za listu 8bitnih elemenata
SRT:    
    LDY #$00      ;postavi zastavicu zamjene na 0
    STY $32
    LDA ($30),Y   ;dohvati broj elemenata...
    TAX           ;...i spremi ga u x registar
    INY           ;pokazi na prvi element u listi
    DEX           ;smanji broj elemenata
NEL:
    LDA ($30),Y   ;dohvati element
    INY           ;inkrementiraj Y (pozicija sl elementa)
    CMP ($30),Y   ;provjeri ako je trenutni veci od sl elementa
    BCC KR
    BEQ KR
                  ;ako je, zamjeni elemente tako da:
    PHA           ;spremi manji bit na stog
    LDA ($30),Y   ;dohvati visi bit
    DEY           ;spremi ga na nizu adresu
    STA ($30),Y
    PLA           ;povuci manji bit sa stoga
    INY           ;stavi ga na visu adresu
    STA ($30),Y
    LDA #$FF      ;postavi zastavicu zamjene
    STA $32
KR:   
    DEX           ;provjeri ako smo na kraju liste
    BNE NEL       ;   ako ne dohvati sl. element
    BIT $32       ;   ako da provjeri dali je zastavica zamjene upaljena.
    BMI SRT       ;     ako nije prodi listu jos jednom
    RTS           ;     ako je, lista je sortirana

;---------------------------------------------------------
; Bubble sort je jednostavan ali nepraktican i spor algoritam.
; Radi na principu zamjenje elemenata prema vrhu liste dokle 
; god lista ne dode u sortirano stanje. Nagori slucaj je О(n^2)
;---------------------------------------------------------     
;objasnjenje komandi (izvadeno iz assembler reference
;https://www.dwheeler.com/6502/oneelkruns/asm1step.html )
; LDY - napuni y registar,  LDA - stavi u akumulator
; STY - spremi y registar, STA - spremi akumulator
; TAX - stavi iz akumulatora u x reg.
; INY - Y++, DEX - X--, DEY - Y--
; CMP - usporedi memoriju i akumulator
; BCC - granaj na carry = 0, BEQ - granaj na jednako nula (Z = 1)
; BNE - granaj na ne jednako nula (Z = 0), BMI - granaj na minus (N = 1)
; BIT - testiraj BITove
; PHA - push akumulator na stog, PLA - pull akumulator sa stoga
; RTS - vrati se iz subrutine
;---------------------------------------------------------
