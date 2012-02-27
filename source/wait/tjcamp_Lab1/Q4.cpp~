# include <iostream>
using namespace std;






int main ()


{

cout << "Enter character: ";
char charin;
cin >> charin;


cout << "\nEnter the Offset ( enter 0 to convert case ): ";
int offset;
cin >> offset;


int jazz; // stores the difference between cases


while ( offset < 0)
{
cout << "\nERROR: negative offset, please enter a valid offset: ";
cin >> offset;
}


if ( offset == 0)
 { 

   if ( charin <= 90 && charin >= 65 )
          jazz = charin + 32;

      
         else if ( charin <=122 && charin >=97)
             jazz = charin - 32;
else
jazz= charin;

}



if ( offset != 0)
{
jazz = charin + offset;
}


if ( jazz > 127)
{
cout << " Range does not include extended ASCII" << endl;
}


else
cout << "New character: "<<static_cast<char>(jazz)<<endl;



return 0;

}





















