//Author: Lucas Bishop
#include <iostream>
#include <fstream>
#include <cstdlib> // add the ability to use RNGs. I found it at https://www.bitdegree.org/learn/random-number-generator-cpp
using namespace std;

string fileName;
string input;
int r,b,g;
int r1=1,r2=2,r3=3,r4=4,r5=5;
int g1=1,g2=2,g3=3,g4=4,g5=5;
int b1=1,b2=2,b3=3,b4=4,b5=5;

int main()
{
  //first deliverable: create new .css file with inputed name, add base color and 5 others to new file

  //takes the user's input for a file name and makes it into .css file
  cout<<"Enter a name for the file"<<endl;
  cin>>fileName;
  fileName = fileName+".css";
  ofstream colors(fileName);

  //takes user's input, makes sure it's a valid rgb value, and adds it to .css file
  cout<<"Enter a base color in rgb"<<endl;
  do{
    cout<<"Red: ";
    cin>>r;
    if(r<0 || r>255){
      cout<<"Invalid value. Please re-enter red value: "<<endl;
    }
  }while(!(r>=0 && r<=255));
  do{
    cout<<"Blue: ";
    cin>>b;
    if(b<0 || b>255){
      cout<<"Invalid value. Please re-enter blue value: "<<endl;
    }
  }while(!(b>=0 && b<=255));
  do{
    cout<<"Green: ";
    cin>>g;
    if(g<0 || g>255){
      cout<<"Invalid value. Please re-enter green value: "<<endl;
    }
  }while(!(g>=0 && g<=255));
  colors<<"#base {color: rgb("<<r<<", "<<b<<", "<<g<<");}";

  //creates 5 new distinct colors (will make sure they are colorblind safe later)
  do{
    r1 = (rand() % 255)+0;
    r2 = (rand() % 255)+0;
    r3 = (rand() % 255)+0;
    r4 = (rand() % 255)+0;
    r5 = (rand() % 255)+0;

    g1 = (rand() % 255)+0;
    g2 = (rand() % 255)+0;
    g3 = (rand() % 255)+0;
    g4 = (rand() % 255)+0;
    g5 = (rand() % 255)+0;

    b1 = (rand() % 255)+0;
    b2 = (rand() % 255)+0;
    b3 = (rand() % 255)+0;
    b4 = (rand() % 255)+0;
    b5 = (rand() % 255)+0;
  }while(
    r == r1 && g == g1 && b == b1 &&
    r == r2 && g == g2 && b == b2 &&
    r == r3 && g == g3 && b == b3 &&
    r == r4 && g == g4 && b == b4 &&
    r == r5 && g == g5 && b == b5 &&
    r1 == r2 && g1 == g2 && b1 == b2 &&
    r1 == r3 && g1 == g3 && b1 == b3 &&
    r1 == r4 && g1 == g4 && b1 == b4 &&
    r1 == r5 && g1 == g5 && b1 == b5 &&
    r2 == r3 && g2 == g3 && b2 == b3 &&
    r2 == r4 && g2 == g4 && b2 == b4 &&
    r2 == r5 && g2 == g5 && b2 == b5 &&
    r3 == r4 && g3 == g4 && b3 == b4 &&
    r3 == r5 && g3 == g5 && b3 == b5 &&
    r4 == r5 && g4 == g5 && b4 == b5
  );
  //adds colors to .css file
  colors<<endl<<"#c1 {color: rgb("<<r1<<", "<<b1<<", "<<g1<<");}";
  colors<<endl<<"#c2 {color: rgb("<<r2<<", "<<b2<<", "<<g2<<");}";
  colors<<endl<<"#c3 {color: rgb("<<r3<<", "<<b3<<", "<<g3<<");}";
  colors<<endl<<"#c4 {color: rgb("<<r4<<", "<<b4<<", "<<g4<<");}";
  colors<<endl<<"#c5 {color: rgb("<<r5<<", "<<b5<<", "<<g5<<");}";
  return 0;
}
