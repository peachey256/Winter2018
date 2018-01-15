function [ img_out ] = Gcorrection(img_in, gama)
%UNTITLED2 Summary of this function goes here
%   Detailed explanation goes here
%No summary or explanation is needed
%.
%.
%.
%Come on guys
    img_out=uint8(255*(double(img_in)/255).^gama);
end

