function [ img_out ] = HBfilt(img_in, alph)
%UNTITLED3 Summary of this function goes here
%   Detailed explanation goes here
    img_out=img_in+uint8(alph*conv2(double(img_in),[0 -.25 0; -.25 1 -.25; 0 -.25 0],'same'));

end

