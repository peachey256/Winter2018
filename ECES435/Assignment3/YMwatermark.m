function [marked] = YMwatermark( img,wmk,key )
%UNTITLED6 Summary of this function goes here
%   Detailed explanation goes here
    rng(key); 
    LUTvals= rand(1,256) > .5;
    [r,c]=size(img); 
    marked=zeros(size(img)); 
    incr=[1, -1, 2, -2, 3, -3, 4, -4, 5, -5]; 
    for i=1:r
        for j=1:c
            k=0; 
            l=0; 
            while(LUTvals(mod((img(i,j)+k),255))~=wmk(i,j))
                l=l+1; 
                k=incr(l); 
                if l>9
                    fprintf("fuck, can't find\n")
                    break 
                end 
            end 
            marked(i,j)=img(i,j)+k; 
        end 
    end
    error=img-marked
    
    

end

