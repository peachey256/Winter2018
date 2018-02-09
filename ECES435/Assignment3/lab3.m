clear;
close all; 
clc; 

%% Part 1


pep=imread('Assingment 3 Files/peppers.tif');
bab=imread('Assingment 3 Files/baboon.tif');
figure
subplot(3,3,1)
imshow(pep)
for i=1:8
    subplot(3,3,10-i)
    imshow(getBP(pep,i))
end

figure
subplot(3,3,1)
imshow(bab)
for i=1:8
    subplot(3,3,10-i)
    imshow(getBP(bab,i))
end

wmk1=imread('Assingment 3 Files/LSBwmk1.tiff');%2
wmk2=imread('Assingment 3 Files/LSBwmk2.tiff');%1
wmk3=imread('Assingment 3 Files/LSBwmk3.tiff');%1

figure
subplot(2,3,1); imshow(wmk1); title('Original')
subplot(2,3,4); imshow(getBP(wmk1,2)); title('Bit Plane 2')
subplot(2,3,2); imshow(wmk2); title('Original')
subplot(2,3,5); imshow(getBP(wmk2,1)); title('Bit Plane 1')
subplot(2,3,3); imshow(wmk3); title('Original')
subplot(2,3,6); imshow(getBP(wmk3,1)); title('Bit Plane 1')

barb=imread('Assingment 3 Files/Barbara.bmp');
figure
for j=1:8
    imshow(BPstitch(pep,barb,j))
    pause
end

type('getBP.m'); 
type('BPstitch.m');

%% Part 2 

key=rng; 

wmk=getBP(barb,8)>128; 
img=pep; 
% [marked] = YMwatermark( img,wmk,key ); 
% imshow(marked)

