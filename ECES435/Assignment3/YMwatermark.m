function [marked] = YMwatermark( img,wmk,key )
%UNTITLED6 Summary of this function goes here
%   Detailed explanation goes here
    rng(key); 
    %LUTvals= repmat([0 1]',128,1) %rand(1,256) > .5;
    LUTvals=rand(1,256) > .5;
    [r,c]=size(img); 
    marked=zeros(size(img)); 
    incr=[1, -1, 2, -2, 3, -3, 4, -4, 5, -5, 6, -1, 7, -7, 8, -8, 9, -9, 10, ...
            -10, 11, -11, 12, -12, 13, -13, 14, -14, 15, -15]; 
    for i=1:r
        for j=1:c
            k=0; 
            l=0; 
            if img(i,j)==0
                img(i,j)=1; % can't index by zero in matlab 
            end 
            while(LUTvals(mod((img(i,j)+k),255))~=wmk(i,j))
                l=l+1; 
                k=incr(l); 
                if l>9
                    fprintf('fuck, can''t find\n')
                    break 
                end 
            end 
            marked(i,j)=img(i,j)+k; 
        end 
    end
    
    marked = uint8(marked); 

end

