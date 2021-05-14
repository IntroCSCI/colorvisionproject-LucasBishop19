#include "color.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

/* bad combinations
green /= red, brown, blue, gray, black
red /= green
brown /= green
blue /= green, purple
gray /= green, blue
purple /= blue
black /= green

*/

color::color(){
  r=0;
  g=0;
  b=0;
  id="void";
  clash.push_back("void");
}

color::color(int re, int gr, int bl, string a){
  r = re;
  g = gr;
  b = bl;
  id = a;
  
  //determines what colors clash with the inputted color
  clash.push_back(a);
  if(a=="pink"){
    clash.push_back("lime");
    clash.push_back("green");
  }else if(a=="red"){
    clash.push_back("lime");
    clash.push_back("green");
    clash.push_back("dark green");
  }else if(a=="maroon"){
    clash.push_back("green");
    clash.push_back("lime");
  }else if(a=="brown"){
    clash.push_back("lime");
    clash.push_back("green");
    clash.push_back("dark green");
  }else if(a=="light blue"){
    clash.push_back("lime");
    clash.push_back("green");
    clash.push_back("violet");
    clash.push_back("purple");
  }else if(a=="blue"){
    clash.push_back("lime");
    clash.push_back("green");
    clash.push_back("dark green");
    clash.push_back("violet");
    clash.push_back("purple");
    clash.push_back("eggplant");
  }else if(a=="navy"){
    clash.push_back("green");
    clash.push_back("dark green");
    clash.push_back("purple");
    clash.push_back("eggplant");
  }else if(a=="gray"){
    clash.push_back("lime");
    clash.push_back("green");
    clash.push_back("dark green");
    clash.push_back("light blue");
    clash.push_back("blue");
    clash.push_back("navy");
  }else if(a=="violet"){
    clash.push_back("light blue");
    clash.push_back("blue");
  }else if(a=="purple"){
    clash.push_back("light blue");
    clash.push_back("blue");
    clash.push_back("navy");
  }else if(a=="eggplant"){
    clash.push_back("blue");
    clash.push_back("navy");
  }else if(a=="black"){
    clash.push_back("lime");
    clash.push_back("green");
    clash.push_back("dark green");
  }else if(a=="lime"){
    clash.push_back("pink");
    clash.push_back("red");
    clash.push_back("brown");
    clash.push_back("light blue");
    clash.push_back("blue");
    clash.push_back("gray");
    clash.push_back("black");
  }else if(a=="green"){
    clash.push_back("maroon");
    clash.push_back("red");
    clash.push_back("brown");
    clash.push_back("navy");
    clash.push_back("blue");
    clash.push_back("gray");
    clash.push_back("black");
  }else if(a=="dark green"){
    clash.push_back("maroon");
    clash.push_back("red");
    clash.push_back("pink");
    clash.push_back("brown");
    clash.push_back("navy");
    clash.push_back("blue");
    clash.push_back("light blue");
    clash.push_back("gray");
    clash.push_back("black");
  }

}

int color::red(){ //returns red value
  return r;
}

int color::green(){ //returns green value
  return g;
}

int color::blue(){ //returns blue value
  return b;
}

string color::identity(){//returns the color's name
  return id;
}

vector<string> color::bad(){
  return clash;
}