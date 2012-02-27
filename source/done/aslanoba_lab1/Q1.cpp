#include <iostream>
using namespace std;

int main()
{	
	double base, height;
	//prompt user for the size of the triangle
	cout <<"Enter the information for the first triangle: " <<endl;
	cout <<"Base: ";
	cin >>base;
        while (base <= 0) 
        {
            cout <<"Please enter a positive integer: ";
            cin >>base;
            if (base >0) break;
        }
    
    cout <<"Height: ";
    cin >>height;
        while (height <= 0) 
        {
            cout <<"Please enter a positive integer: ";
            cin >>height;
            if (height >0) break;
        }
    
    //Calculate the area of the first triangle
        double area=(base*height)/2;
    
    double base2, height2;
	//prompt user for the size of the triangle
	cout <<"Second triangle:" <<endl;
    cout <<"Base: ";
    cin >>base2;
        while (base2 <= 0) 
        {
            cout <<"Please enter a positive integer: ";
            cin >>base2;
                if (base2 >0) break;
        }
            
    cout <<"Height: ";
    cin >>height2;
        while ( height2 <= 0) 
        {
            cout <<"Please enter a positive integer: ";
            cin >>height2;
                if (height2 >0) break;
        }
                
    //Calculate the area of the second triangle
        double area2=(base2*height2)/2;
    		
	//Compare the areas of the triangles
	if (area2 > area)
    {
        double diff=area2-area;
        cout <<"Triangle 2 is bigger by "<<diff<<" units"<<endl;
    }
    else
    {
        double diff=area - area2;
        cout <<"Triangle 1 is bigger by "<<diff<<" units"<<endl;
    }
    return 0;
}
    
    


