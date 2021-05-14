# CSS Completer

## Description

The user inputs a base color, then the program will generate a list in CSS of five more colors that are color-blind friendly

### v0.2 Updates

The generated colors now have garunteed uniqueness from eachother, and the base color. Vectors and functions have been implemented to streamline the code, make it easier to read, and shorten it.

### v1.0 Updates

The code now has a class called "Color" to make creating colors easier. The class also allows for identifying features of the colors can be attached, such as what other colors cause problems for the colorblind.


## Developer

Lucas Bishop

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
(in console)
 g++ -std=c++11 *.cpp -o cvp; ./cvp
Enter a name for the file
MyPalette
Choose a base color:
(enter the number next to it)
1) pink
2) red
3) maroon
4) light orange
5) orange
6) brown
7) light yellow
8) yellow
9) olive
10) light blue
11) blue
12) navy blue
13) violet
14) purple
15) eggplant
16) black
17) gray
18) white
19) lime
20) green
21) dark green
3
Your theme is: 
maroon
dark green
olive
eggplant
yellow
orange
 

(in newly created css file)
#c maroon {color: rgb(128, 0, 0);}
#c dark green {color: rgb(0, 100, 0);}
#c olive {color: rgb(140, 140, 0);}
#c eggplant {color: rgb(128, 0, 128);}
#c yellow {color: rgb(255, 255, 0);}
#c orange {color: rgb(255, 128, 0);}
```

## C++ Guide

### Variables and Data Types

I have used string and int variables. The string is used for the name of the newly created .css file. There are two integer values, one keeps track of the base color slected by the user, the other is attached to a random number generator.

### Console Input and Output

The code propts the user for the name of a file, and creates a css file with that name. It then provides the user with a list of colors and asks the user to pick one as a base.

### Decisions

The constructor for color has a series of if and else if satements that determine what colors would conflict with the constructed color.

### Iteration

The code has a while loop that repeates until the user inputs a valid number coresponding to a base color. Another while loop continues until the palette has 6 non-conflicting colors. It also has a few for loops to progress through the color and string vectors while copying, adding, or comparing values.

### File Input and Output

Using the user's file name input, the code makes a new .css file. It then takes the base color, and the five non-conflicting color values, creates lines of css code, and adds them to the new file.

### Arrays/Vectors

There are 3 vectors in the code, two are color vectors, and one is a string vector. One color vector contains the 21 preset colors, the other will accumulate color values for the user's palatte. The string vector holds all of the color names that conflict with the palette.

### Functions

The color.h and color.cpp files have 7 pass by value functions. Two are constructors for the color struct, three of them return the color's r, g, and b integer values, one returns the name of the color, the last returns a vector containing all of the names of other colors it conflicts with.

The main fuction has two pass by reference functions. The first takes the most recently added palette color and adds its clashing colors to the string vector. The second function takes a random preset color, and checks if it is in the string vector, if the color is not in the string, it adds it to the palatte, if the color is in the palatte the function does nothing. 

### Classes

The Color class has been added. A color holds integers for its r, g, and b values, a string of its name, and a vector containing any color would cause problems for colorblind poeple. The class has seven functions, five of wich return the beforementioned variables. The other functions are constructors. One has parameters for the r,g,b, and name variables, and it builds the clashing vector based on the name (the clash vector contains the color itself to prevent repeating the color in the palette). The other constructor has no parameters and defaultly sets the color equal to black with the name "void" and no clashing colors besides itself.
