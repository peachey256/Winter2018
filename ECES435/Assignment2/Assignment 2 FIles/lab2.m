% Assignment 2 
% Jan 26, 2017 
% Brian Hosler & Sarah Peachey 
clear
close all
clc

%% part 1 
pep=imread('peppers.tif'); 
bab=imread('baboon.tif');

imwrite(pep, 'pep90.jpg','Quality',90)
imwrite(pep, 'pep70.jpg','Quality',70)
imwrite(pep, 'pep50.jpg','Quality',50)
imwrite(pep, 'pep30.jpg','Quality',30)
imwrite(pep, 'pep10.jpg','Quality',10)

imwrite(bab, 'bab90.jpg','Quality',90)
imwrite(bab, 'bab70.jpg','Quality',70)
imwrite(bab, 'bab50.jpg','Quality',50)
imwrite(bab, 'bab30.jpg','Quality',30)
imwrite(bab, 'bab10.jpg','Quality',10)

pep_psnr=zeros(1,6); 
pep_size=zeros(1,6); 

temp=imfinfo('peppers.tif'); 
pep_size(1)=temp.FileSize; 
pep_psnr(1)= psnr(pep, pep);

temp=imfinfo('pep90.jpg'); 
pep_size(2)=temp.FileSize; 
pep_psnr(2)= psnr(imread('pep90.jpg'), pep);

temp=imfinfo('pep70.jpg'); 
pep_size(3)=temp.FileSize; 
pep_psnr(3)= psnr(imread('pep70.jpg'), pep);

temp=imfinfo('pep50.jpg'); 
pep_size(4)=temp.FileSize; 
pep_psnr(4)= psnr(imread('pep50.jpg'), pep);

temp=imfinfo('pep30.jpg'); 
pep_size(5)=temp.FileSize; 
pep_psnr(5)= psnr(imread('pep30.jpg'), pep);


temp=imfinfo('pep10.jpg'); 
pep_size(6)=temp.FileSize; 
pep_psnr(6)= psnr(imread('pep10.jpg'), pep);

figure 
subplot(2,1,1)
plot(100*[1 .9 .7 .5 .3 .1],pep_size,'--o')
hold on 
title('peppers - file size vs quality')
subplot(2,1,2)
plot(100*[1 .9 .7 .5 .3 .1],pep_psnr,'--o')
hold on 
title('peppers - psnr vs quality')

bab_psnr=zeros(1,6); 
bab_size=zeros(1,6); 

temp=imfinfo('baboon.tif'); 
bab_size(1)=temp.FileSize; 
bab_psnr(1)= psnr(bab, bab);

temp=imfinfo('bab90.jpg'); 
bab_size(2)=temp.FileSize; 
bab_psnr(2)= psnr(imread('bab90.jpg'), bab);

temp=imfinfo('bab70.jpg'); 
bab_size(3)=temp.FileSize; 
bab_psnr(3)= psnr(imread('bab70.jpg'), bab);

temp=imfinfo('bab50.jpg'); 
bab_size(4)=temp.FileSize; 
bab_psnr(4)= psnr(imread('bab50.jpg'), bab);

temp=imfinfo('bab30.jpg'); 
bab_size(5)=temp.FileSize; 
bab_psnr(5)= psnr(imread('bab30.jpg'), bab);

temp=imfinfo('bab10.jpg'); 
bab_size(6)=temp.FileSize; 
bab_psnr(6)= psnr(imread('bab10.jpg'), bab);

figure 
subplot(2,1,1)
plot(100*[1 .9 .7 .5 .3 .1],bab_size,'--o')
hold on 
title('baboon - file size vs quality')
subplot(2,1,2)
plot(100*[1 .9 .7 .5 .3 .1],bab_psnr,'--o')
hold on 
title('baboon - psnr vs quality')
