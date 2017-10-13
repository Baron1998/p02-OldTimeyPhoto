// Author : Abdullah Baron 

// declear the header files 
#include <iostream>
#include <string>
#include <vector>
#include "bitmap.h"


using namespace std;

int main() 
{
// Declearing the veriables that i need for this project
Bitmap image;
vector <vector <Pixel> > bmp;
Pixel rgb;
string name;
bool BmpImage;
 
 // using do while loop to get the name of the file and keep asking for the name until they entered the correct format
do  {
    cout<< "what is the file name? (notice the file need to be in BMP format)\n";
    cin>> name;
    image.open(name);
    BmpImage = image.isImage();
    }
    while(BmpImage == false);


cout<< name <<"  has been loaded \n";
bmp = image.toPixelMatrix(); 
int aver; // declearign veriable to save the average inside it
     

 // show the matrice by using two for loops to change every pixel of the picture to gray by finding the average between red, green,and blue
for(int h = 0; h<bmp.size(); h++)  //h = hight 
    { 
      for(int w = 0; w<bmp[h].size(); w++) // w = width
          {
          //cout<<"editing "<<h<<" height and "<<w<<" width."<<endl;
           rgb = bmp [h][w];
           aver = (rgb.red + rgb.green + rgb.blue)/3;
           rgb.green = aver;
           rgb.red = aver;
           rgb.blue = aver;
           bmp[h][w] = rgb;
           }
    }

// overwrite the current bitmap with the bitmap that represented by a matrix of pixel and save the picture
// also, i choose the picture name when i save it
image.fromPixelMatrix(bmp);
image.save("oldtimey.bmp");

/* x17: Planning Project 2 (part 1)
declare veriables (Bitmap) ,(vector <vector <Pixel> > ) , and (Pixel).
output "what is the file name?" must be an image with BMP format
input the image that the user choose 
choose values for r , g , and b let's say 50 
when r=50 , g=50 , and b=50 we will git a gray color = 50
now we choose these values for every pixel of that image.
to change every pixel we need to use a loop(for loop) to make sure that every pixel will change to gray 
save the new image.
*/

  return 0;
}
