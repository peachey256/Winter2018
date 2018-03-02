%Assignment 5
%Brian Hosler and Sarah Peachey
f1=imread('Assignment 5 - Part 1 Files/DCTfprints1.tif');
f2=imread('Assignment 5 - Part 1 Files/DCTfprints2.tif');
f3=imread('Assignment 5 - Part 1 Files/DCTfprints3.tif');
f4=imread('Assignment 5 - Part 1 Files/DCTfprints4.tif');
f5=imread('Assignment 5 - Part 1 Files/DCTfprints5.tif');

figure
subBandHist(f1,2,2)
%no JPEG

figure
subBandHist(f2,2,2)
%step size 10

figure
subBandHist(f3,2,2)
%step size 6

figure
subBandHist(f4,2,2)
%no JPEG

figure
subBandHist(f5,2,2)
%step size 10







