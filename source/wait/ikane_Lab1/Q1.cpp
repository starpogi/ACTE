/*Ita Kane =, Lab 1, Question 1 EC327 Spring 2012*/

#include <iostream>
using namespace std;

int main()  {
        /*Prompt the user for the triangle dimensions*/
        bool var=1;
        double base1, base2, height1, height2, area1, area2, diff;
        //While loop error checks for postitive dimension inputs
        while (var)
        {
                cout<< "Enter the information for the first triangle" << endl;
                cout<< "Base: ";
                cin>> base1;
                cout<< "Height: ";
                cin>> height1;
                cout<< "Second Triangle: "<<endl;
                cout<< "Base: ";
                cin>> base2;
                cout<< "Height: ";
                cin>> height2;
                if (base1>0 && base2>0 && height1>0 && height2>0)
                        var=0;
                else
                        cout<< "Dimensions must be greater than 0, reenter values" <<endl;
        }
        /*Calculates the areas of the triangles*/
        area1 = .5 * base1 * height1;
        area2 = .5 * base2 * height2;

        /*Checks which triangle is greater, calculates the diference and displays it */
        if (area2 > area1)
        {
                diff = area2-area1;
                cout<< "Triangle 2 is bigger by " <<diff<< " units" <<endl;
        }
        else
        {
                diff = area1- area2;
                cout<< "Triangle 1 is bigger by " <<diff<< " units" <<endl;
        }
return 0;
}

