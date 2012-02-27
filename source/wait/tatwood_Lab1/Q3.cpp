#include <iostream>
#include <cmath>
using namespace std;


int Hamming(int aa, int bb)
{
    int same = 0;
    int remainderA = aa;
    int remainderB = bb;
    
    
    for (int i = 5; i >= 0; i--)
    {
     // Compare the digets of the highest power
        
        int checkA = (remainderA / (int)pow(10.0,i));
        int checkB = (remainderB / (int)pow(10.0,i));
        
        // cout << checkA << " and " << checkB << endl;
     
     // If they are the same increment the counter 'same'   
        if (checkA == checkB)
            same++;
     
     // Keep the remainder   
        remainderA = remainderA % (int)pow(10.0, i);
        remainderB = remainderB % (int)pow(10.0, i);
        
        // cout << "remainderA " << remainderA << endl << "remainderB " <<remainderB << endl;
        
        // cout << "same count is: " << same << endl;
    }
    
    // The hamming distance will be 6 minus the number of digets that are the same
    return 6 - same;
    
}


int main()
{
    // Promt the user for two integers between 0 and 999999
    int aa, bb, hamNum;
    
    
    cout << "Enter two integers between 0 and 999999: " << endl;
    cin >> aa >> bb;
    
    // Check to make sure the integers are in the correct range
    
    if (aa < 0 || aa > 999999)
    {
        cout << "Error, inputs not within range" << endl;
        return 0;
    }
    else if (bb < 0 || bb > 999999)
    {
        cout << "Error, inputs not within range" << endl;
        return 0;
    }
    else
    {
        hamNum = Hamming(aa, bb);  
    }
    
    // Print the results
    cout << "Hamming distance between " << aa << " and " << bb << " is " << hamNum << endl;
        
    return 0;
}