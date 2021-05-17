#ifndef COLOR_H
#define COLOR_H
#include <string>
#include <vector>

using std::string;
using std::vector;

class color{
  private:
  
  public:
    //Varibales
    int r,g,b; // values for red, green and blue
    string id; //the type of color
    vector<string> clash; //contains colors that cause problems for the colorblind

  //functions
  color(); //basic constructor
  color(int,int,int,string); //constructer with parameters
  int red(); 
  int green();
  int blue();
  string identity();
  vector <string> bad();
};

#endif