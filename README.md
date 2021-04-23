# CSS Completer

## Description

The user inputs a base color, then the program will generate a list in CSS of five more colors that are color-blind friendly

### v0.2 Updates

The generated colors now have garunteed uniqueness from eachother, and the base color. Vectors and functions have been implemented to streamline the code, make it easier to read, and shorten it.

### v1.0 Updates

*Coming soon*


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
Enter a name for the file
color
Enter a base color in rgb
Red: 86
Blue: 200
Green: 200

(in newly created css file)
#base {color: rgb(86, 200, 200);}
#c1 {color: rgb(163, 162, 151);}
#c2 {color: rgb(85, 190, 83);}
#c3 {color: rgb(241, 249, 252);}
#c4 {color: rgb(121, 82, 107);}
#c5 {color: rgb(20, 233, 19);}
```

## C++ Guide

### Variables and Data Types

I have used a string variable and int variables. The string is used for the name of the newly created .css file. The integers are used for red, green, and blue values in an RGB color code.

### Console Input and Output

!!!Replace with a summary and examples of how input and output have been used effectively and appropriately!!!
The code propts the user for the name of a file, and creates a css file with that name. It then propts the user for the RGB values of a base color, uses those to create a line of css code, and adds it to the new file.

### Decisions

If the user inputs an incorrect red, green, or blue value, the code will output a message saying: "Invalid value. Please re-enter (color) value: " and make them input a new value.

### Iteration

The code has 4 do-while loops at the moment, 1 for each red, green, and blue vaues that the user inputs. These repeat if the user inputs an invalid color value (less than zero, or greater than 255). The last loop makes sure the newly created colors are unique, by making sure none of the red, green, and blue values are the same. If they are the same, it will repeat and make new colors.

### File Input and Output

Using the user's file name input, the code makes a new .css file. It then takes the base color, and the generated color values, creates lines of css code, and adds them to the new file.

### Arrays/Vectors

There are 3 vectors in the code containing the red, green, and blue integer values for the generated colors. This shorted the code greatly, because it used to have 18 separate integer value for the colors.

### Functions

The code has 3 functions, the first returns a random color value (an iteger between 0 and 255). The second uses pass by reference to modify the vectors to contain the rgb values for 6 colors. The third uses pass by value and returns a true boolen value if the colors held in the vectors are unique.

### Classes

*Coming in version 1.0*
