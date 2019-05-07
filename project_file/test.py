from PIL import Image;
import matplotlib.pyplot as plt;

img = Image.open("pic7.jpg","r");
#img.show();
#print img.format, img.size, img.mode

width = img.size[0];
height = img.size[1];
#print width
#print height

size_right = width * 3 / 4
#print size_right
size_down = height * 3 / 4


max_i = 0
max_j = 0
min_i = 0
min_j = 0

zone = []
for i in range(0,17):
    zone.append(0)
#print zone[16]


arr = []
#for i in range(0,width):
   # for j in range(0,height):
 #       arr.append((img.getpixel((j,i))))
       #print (i,j)
       #print img.getpixel((j,i))
        
#print len(arr)

Img = img.convert('L')
cnt = 0;
#guobiting 110
#liuhaoran 100    
#xinyuanjieyi 120  j<930 j>200
#pic10  j>230
for i in range(0,height):
    for j in range(0,width):
        #arr.append((Img.getpixel((j,i))))
        if(j>=0 and j<width):
            if(i>=0 and i<size_down):
                if(Img.getpixel((j,i))<100):
                    arr.append((j,i))
                    if(cnt==0):
                        max_i = min_i = i
                        max_j = min_j = j
                        cnt+=1
                    if(i>max_i):
                        max_i = i
                    if(i<min_i):
                        min_i = i
                    if(j>max_j):
                        max_j = j
                    if(j<min_j):
                        min_j = j                       
            #arr.append(Img.getpixel((j,i)))
                    #print arr[cnt]
            #print (j,i)
                    #cnt+=1
print max_i
print min_i
print max_j
print min_j

dlt_j = (max_j - min_j)/4
dlt_i = (max_i - min_i)/4

#print arr[0]
#print arr[0][0]

for i in range(len(arr)):
    if(arr[i][0]>=min_j and arr[i][0] < min_j+dlt_j and arr[i][1]>=min_i and arr[i][1] < min_i+dlt_i):
        zone[1]+=1
    if(arr[i][0]>=min_j+dlt_j and arr[i][0] < min_j+2*dlt_j and arr[i][1]>=min_i and arr[i][1] < min_i+dlt_i):
        zone[2]+=1
    if(arr[i][0]>=min_j+2*dlt_j and arr[i][0] < min_j+3*dlt_j and arr[i][1]>=min_i and arr[i][1] < min_i+dlt_i):
        zone[3]+=1
    if(arr[i][0]>=min_j+3*dlt_j and arr[i][0] < min_j+4*dlt_j and arr[i][1]>=min_i and arr[i][1] < min_i+dlt_i):
        zone[4]+=1

    if(arr[i][0]>=min_j and arr[i][0] < min_j+dlt_j and arr[i][1]>=min_i+dlt_i and arr[i][1] < min_i+2*dlt_i):
        zone[5]+=1
    if(arr[i][0]>=min_j+dlt_j and arr[i][0] < min_j+2*dlt_j and arr[i][1]>=min_i+dlt_i and arr[i][1] < min_i+2*dlt_i):
        zone[6]+=1
    if(arr[i][0]>=min_j+2*dlt_j and arr[i][0] < min_j+3*dlt_j and arr[i][1]>=min_i+dlt_i and arr[i][1] < min_i+2*dlt_i):
        zone[7]+=1
    if(arr[i][0]>=min_j+3*dlt_j and arr[i][0] < min_j+4*dlt_j and arr[i][1]>=min_i+dlt_i and arr[i][1] < min_i+2*dlt_i):
        zone[8]+=1

    if(arr[i][0]>=min_j and arr[i][0] < min_j+dlt_j and arr[i][1]>=min_i+2*dlt_i and arr[i][1] < min_i+3*dlt_i):
        zone[9]+=1
    if(arr[i][0]>=min_j+dlt_j and arr[i][0] < min_j+2*dlt_j and arr[i][1]>=min_i+2*dlt_i and arr[i][1] < min_i+3*dlt_i):
        zone[10]+=1
    if(arr[i][0]>=min_j+2*dlt_j and arr[i][0] < min_j+3*dlt_j and arr[i][1]>=min_i+2*dlt_i and arr[i][1] < min_i+3*dlt_i):
        zone[11]+=1
    if(arr[i][0]>=min_j+3*dlt_j and arr[i][0] < min_j+4*dlt_j and arr[i][1]>=min_i+2*dlt_i and arr[i][1] < min_i+3*dlt_i):
        zone[12]+=1

    if(arr[i][0]>=min_j and arr[i][0] < min_j+dlt_j and arr[i][1]>=min_i+3*dlt_i and arr[i][1] < min_i+4*dlt_i):
        zone[13]+=1
    if(arr[i][0]>=min_j+dlt_j and arr[i][0] < min_j+2*dlt_j and arr[i][1]>=min_i+3*dlt_i and arr[i][1] < min_i+4*dlt_i):
        zone[14]+=1
    if(arr[i][0]>=min_j+2*dlt_j and arr[i][0] < min_j+3*dlt_j and arr[i][1]>=min_i+3*dlt_i and arr[i][1] < min_i+4*dlt_i):
        zone[15]+=1
    if(arr[i][0]>=min_j+3*dlt_j and arr[i][0] < min_j+4*dlt_j and arr[i][1]>=min_i+3*dlt_i and arr[i][1] < min_i+4*dlt_i):
        zone[16]+=1



point_sum = 0;
for i in range(1,17):
    point_sum += zone[i];
#for i in range(1,17):
    #zone[i] = 1000000 / point_sum * zone[i]
    #print i,zone[i]
print len(arr)
im = Image.new("RGB",(width,height),(255,255,255))
for i in range(len(arr)):
    im.putpixel(arr[i],(0,0,0))
im.save("test3.jpg")


Img.save("test1.jpg")
threshold = 130
table = []
for i in range(256):
         if i < threshold:
             table.append(1)
         else:
             table.append(0)

#print table
photo = Img.point(table,'1')
photo.save("test2.jpg")         

doc = open("output.txt",'w')
for i in range(1,17):
    doc.write(str(zone[i]))
    doc.write('\n')
doc.close()

#print arr[1021121]
#print height;
#print width;
#print img.getpixel((1277,798))
