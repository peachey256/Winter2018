function [result] = myJpgEncode( pep,Q )
%myJpgEncode implement my own jpeg algorithm
%   using the notes 
A=zeros(size(pep)); 
stor=[];
for i=1:512/8
    for j=1:512/8
        tempA=dct2(pep(8*(i-1)+1:i*8,8*(j-1)+1:j*8)); 
        pep_quan=round(tempA./Q).*Q; 
        stor=[stor;ZigzagMtx2Vector(pep_quan)];
    end 
end 


result=JPEG_entropy_encode(512,512,8,Q,stor,...
    '/Users/brianhosler/Documents/Drexel/17-18/Winter/ECES435/Winter2018/ECES435/Assignment2/Assignment2Files/',1);


end

