//Author: Lucas Bishop
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib> // add the ability to use RNGs. I found it at https://www.bitdegree.org/learn/random-number-generator-cpp
using namespace std;

//Prototypes
int rc();
void makeVector(vector<int>&rList, vector<int>&gList, vector<int>&bList);
bool test(vector<int>);

string fileName;
string input;
int r,b,g;
vector <int>rList, bList, gList;

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

  rList.push_back(r);
  gList.push_back(g);
  bList.push_back(b);

  colors<<"#base {color: rgb("<<r<<", "<<b<<", "<<g<<");}";

  //creates 5 new distinct colors (will make sure they are colorblind safe later)
  do{
    makeVector(rList,gList,bList);
  }while(test(rList)==false &&
         test(gList)==false &&
         test(bList)==false);

  //adds colors to .css file
  for(int i=1;i<6;i++){
      colors<<endl<<"#c"<<i<<" {color: rgb("<<rList[i]<<", "<<bList[i]<<", "<<gList[i]<<");}";
    }
  return 0;
}
//generates a random number between 0 and 255
int rc(){
  int num;
  num=(rand() % 255);
  return num;
}
//adds 5 colors to the vectors
void makeVector(vector<int>&rList, vector<int>&gList, vector<int>&bList){
  for(int i=0;i<5;i++){
    rList.push_back(rc());
    gList.push_back(rc());
    bList.push_back(rc());
  }
}
//checks if the values in the vector are distince from eachother 
bool test(vector<int>l){
  for(int i=0; i<l.size(); i++){
    for(int c=0; c<l.size(); c++){
      if(i!=c && l[i]>=l[c]-10 && l[i]<=l[c]+10){
        return false;
      }
    }
  }
  return true;
}
