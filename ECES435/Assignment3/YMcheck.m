function [wmk] = YMcheck(img,key)
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here
    rng(key); 
    LUTvals= rand(1,256) > .5;
    wmk=LUTvals(img);

end

