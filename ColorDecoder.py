from PIL import Image

im= Image.open("colors.png")
pix = im.load()
colorFile = open("colorsT.txt",'w')
counter = 0
for y in range(1,129,16):
    for x in range(0,255,16):
        colorFile.write("\ncase " + str(counter)+":"+"\n\t"+"pixels[i] = "+str(pix[x,y][0])+";   //r"+"\n\t"+"pixels[i+1] = "+str(pix[x,y][1])+";   //g"+"\n\t"+"pixels[i+2] = "+str(pix[x,y][2])+";   //b"+"\n\t"+"pixels[i+3] = "+str(pix[x,y][3])+";   //a"+"\n\tbreak;")
        counter+=1
    colorFile.write("\n ")
    

colorFile.close()
