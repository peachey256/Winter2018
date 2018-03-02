function [] = subBandHist(img,y,x)
%UNTITLED2 Summary of this function goes here
%   Detailed explanation goes here
    arr=[];
    [r,c]=size(img);
    for i=1:8:r
        for j=1:8:c
            temp=dct2(img(i:i+7,j:j+7));
            arr=[arr, temp(y,x)];
        end
    end
    histogram(arr,'BinWidth',1)
end

