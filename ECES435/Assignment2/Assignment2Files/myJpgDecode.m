function [pep] = myJpgDecode()
%myJpgEncode implement my own jpeg algorithm
%   using the notes 
[rowN,colN,dct_block_size,iQ,iZZDCTQIm]=JPEG_entropy_decode(...
    '/Users/brianhosler/Documents/Drexel/17-18/Winter/ECES435/Winter2018/ECES435/Assignment2/Assignment2Files/');
pep=zeros(512);
ndx=1;
for i=1:512/8
    for j=1:512/8
        pep(8*(i-1)+1:i*8,8*(j-1)+1:j*8)=idct2(Vector2ZigzagMtx(iZZDCTQIm(ndx,:)));
        ndx=ndx+1;
    end 
end 
end

