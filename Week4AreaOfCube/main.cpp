//
//  main.cpp
//  Week4AreaOfCube
//
//  Created by Jackie on 2/13/21.
//

#include <iostream>
#include <string>
using namespace std;

class box {
public:
    int width, depth, height;
    void setWidth(int x){
        width = x;
    }
    void setHeight(int y ){
        height = y;
    }
    void setDepth(int z){
            depth = z;
    }
    
    int getDepth(){
        if (depth <= 0){
            cout << "ERROR: DIMENSIONS CAN NOT BE LESS THAN ZERO."<< endl;
        }else{
            return depth;}
        return 0;
    }
    
    int getHeight(){
        return height;
    }
    
    int calcArea(){
        //return area
        int area = width * height * 6;
        if (static_cast<void>(width), static_cast<void>(height), depth <= 0){
            cout << "ERROR: DIMENSIONS CAN NOT BE LESS THAN ZERO."<< endl;
        }else{
            return area;}
        return 0;
    }
    
    int calcVolume(){
        if (depth <= 0){
            cout << "ERROR: DIMENSIONS CAN NOT BE LESS THAN ZERO."<< endl;
        }else{
            int volume = width * height * depth;
            return volume;}
        return 0;
        }
};

int main(int argc, const char * argv[]) {
    cout << "Name: Jackie Ocaña - Prog6Box - Date:  2/12/21" << endl;
    
    // Box 1 - Test set functions, Volume, getHeight and area functions

    box B1;    // HINT MAKE A Default constructor or set functions...

    B1.setWidth(2);

    B1.setHeight(3);

    B1.setDepth(4);

    cout << "Height = " << B1.getHeight() << endl;

    cout << "Area = " << B1.calcArea() << endl;

    cout << "Volume = " << B1.calcVolume() << endl;

    // Box 2 - Test zero value error for calc Area and Volume of sides functions

    box B2;

    B2.setWidth(3);

    B2.setHeight(4);

    cout << "Depth = " << B2.getDepth() << endl;

    cout << "Area = " << B2.calcArea() << endl;

    cout << "Volume = " << B2.calcVolume() << endl;

    }


/*Program 6 BOX - Complete the following code then run it

- Produce the correct output and Turn it in for credit

- Note: A Box is a 3D object...

Write a class for a BOX (box is another name for a cube)

It should contain:  Width, Height, and Depth

It should contain 3 methods to input/set the Width, Height, and Depth Values.

It should contain a method to calculate the Volume of the box.

It should contain a method to calculate sum of the Area the 6 sides of the box,.

It should contain three method to return/get the individual values of the Width, Height and Depth variables in the class

All dimensions must be greater than zero, before the area or volume can be calculate... the calc functions should cout an error message is they are not.

Test the box with the following driver code:

HINT: Use function names and class name found in driver below.

int main() {

// Box 1 - Test set functions, Volume, getHeight and area functions

box B1;    // HINT MAKE A Default constructor or set functions...

B1.setWidth(2);

B1.setHeight(3);

B1.setDepth(4);

cout << "Height = " << B1.getHeight << endl;

cout << "Area = " << B1.calcArea() << endl;

cout << "Volume = " << B1.calcVolume() << endl;

// Box 2 - Test zero value error for calc Area and Volume of sides functions

box B2;

B2.setWidth(3);

B2.setHeight(4);

cout << "Depth = " << B2.getDepth << endl;

cout << "Area = " << B2.calcArea() << endl;

cout << "Volume = " << B2.calcVolume() << endl;

}
*/
