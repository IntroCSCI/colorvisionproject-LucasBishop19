//Author: Lucas Bishop
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib> // add the ability to use RNGs. I found it at https://www.bitdegree.org/learn/random-number-generator-cpp
#include "color.h"
using namespace std;

//Prototypes
void addBadColors(vector <color>, vector <string>&);
void addColor(vector<color>, vector <string>, vector<color>&, int);

//variables
string fileName = "newFile";
int selected = 0;
vector <color> colorsList {};
vector <color> palette {};
vector <string> badColors {};
int r = 0;

//preset colors
color pink(255,128,128,"pink");
color red(255,0,0,"red");
color maroon (128,0,0,"maroon");
color lightOrange (255,192,128,"light orange");
color orange(255,128,0,"orange");
color brown (128,64,0,"brown");
color lightYellow(255,255,128,"light yellow");
color yellow(255,255,0,"yellow");
color olive(140,140,0,"olive");
color lime (0,255,0,"lime");
color green (0,128,0,"green");
color darkGreen (0,100,0,"dark green");
color lightBlue(128,128,255,"light blue");
color blue(0,0,255,"blue");
color navy(0,0,128,"navy");
color violet(255,128,255,"violet");
color purple(255,0,255,"purple");
color eggplant(128,0,128,"eggplant");
color black(0,0,0,"black");
color gray (85,85,85,"gray");
color white(255,255,255,"white");

int main()
{
  srand(time(0));//helps with the random number generator

  //takes the user's input for a file name and makes it into .css file
  cout<<"Enter a name for the file"<<endl;
  cin>>fileName;
  fileName = fileName+".css";
  ofstream theme(fileName);
  
  //adds preset colors to a vector
  colorsList.push_back(pink);
  colorsList.push_back(red);
  colorsList.push_back(maroon);
  colorsList.push_back(lightOrange);
  colorsList.push_back(orange);
  colorsList.push_back(brown);
  colorsList.push_back(lightYellow);
  colorsList.push_back(yellow);
  colorsList.push_back(olive);
  colorsList.push_back(lightBlue);
  colorsList.push_back(blue);
  colorsList.push_back(navy);
  colorsList.push_back(violet);
  colorsList.push_back(purple);
  colorsList.push_back(eggplant);
  colorsList.push_back(black);
  colorsList.push_back(gray);
  colorsList.push_back(white);
  colorsList.push_back(lime);
  colorsList.push_back(green);
  colorsList.push_back(darkGreen);
  

  //asks the user to select a base color
  cout<<"Choose a base color:"<<endl<<"(enter the number next to it)"<<endl;
  for(int i=0; i<colorsList.size();i++){
    cout<<(i+1)<<") "<<colorsList[i].identity()<<endl;

  //loops until a valid number is entered
  }
  do{
    cin>>selected;
  }while(selected<0||selected>21);
  palette.push_back(colorsList[selected-1]);
  
  //adds the base color to the new file
  theme<<endl<<"#c "<<palette[0].identity()<<" {color: rgb("<<palette[0].red()<<", "<<palette[0].green()<<", "<<palette[0].blue()<<");}";

  //makes sure the palette has 6 colors in it
  do{
    r = rand()%21;
    addBadColors(palette, badColors);
    addColor(colorsList, badColors, palette, r);
  }while(palette.size()!=6);

  //tells the user what their palette is, and adds the colors to the .css file in css code.
  cout<<"Your theme is: "<<endl<<palette[0].identity()<<endl;
  for(int i=1; i<palette.size(); i++){
    cout<<palette[i].identity()<<endl;
    theme<<endl<<"#c "<<palette[i].identity()<<" {color: rgb("<<palette[i].red()<<", "<<palette[i].green()<<", "<<palette[i].blue()<<");}";
  }
}

//takes the most recent color added to palette and adds its clashing colors to badColors
void addBadColors(vector <color> p, vector <string> &badColors){
  if(p[palette.size()-1].bad().size() !=0){
    for(int x=0; x<p[palette.size()-1].bad().size(); x++){
        badColors.push_back(p[palette.size()-1].bad()[x]);
    }
  }
}

//takes a random color from colorsList and checks if it clashes with the palette, if not, it is added to the palette
void addColor(vector<color> list, vector<string> bc, vector<color> &palette, int h){
  for(int x=0; x<bc.size(); x++){
    if(x==bc.size()-1){
      palette.push_back(list[h]);
    } else if(list[h].identity()==bc[x]){
      x=bc.size();
    }
  }
}
