// Author : Abdullah Baron 
#include <iostream>
#include <string>
#include <vector>
#include "bitmap.h"
#include<string>

using namespace std;
int main() 
{

Bitmap image;
vector <vector <Pixel> > bmp;
Pixel rgb;
string name;

/*
image.open("machupicchu.bmp");
cout<< "machupicchu.bmp has been loaded \n";
bmp = image.toPixelMatrix();
cout<< " it is  "<< bmp.size() << "pixels high and  " << bmp[0].size() << " pixels wide \n";
*/

cout<< "what is the file name? (notice the file need to be in BMP format)\n";
cin>> name;
image.open(name);
cout<< name <<"  has been loaded \n";
bmp = image.toPixelMatrix();

int h = 0; // h = high
int w = 0; // w = wide


for( h; h<bmp.size(); h++)
    { 
      for(w; w<bmp[0].size(); w++)
          {
           rgb = bmp [h][w];
           rgb.red = 50;
           rgb.green = 50;
           rgb.blue = 50;
           bmp[h][w] = rgb;
           }
    }


image.fromPixelMatrix(bmp);
image.save("try1.bmp");

//declare veriables (Bitmap) ,(vector <vector <Pixel> > ) , and (Pixel).
//output "what is the file name?" must be an image with BMP format
//input the image that the user choose 
// choose values for r , g , and b let's say 50 
// when r=50 , g=50 , and b=50 we will git a gray color = 50
//now we choose these values for every pixel of that image.
//to change every pixel we need to use a loop(for loop) to make sure that every pixel will change to gray 
//save the new image.
  return 0;
}
