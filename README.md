# CSS Completer

## Description

The user inputs a base color, then the program will generate a list in BMP of five more colors that are color-blind friendly

### v0.2 Updates

*Coming soon*

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
Enter a name for the file
color
Enter a base color in rgb
Red: 86
Blue: 200
Green: 200
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

*Coming in version 0.2*

### Functions

*Coming in version 0.2*

### Classes

*Coming in version 1.0*
