#include <iostream>
using namespace std;

int main()
{

    for (int row = 0; row < 3; row++)
    {

            if (row == 0 || row == 2)
            {

                 for (int col = 0; col < 5; col++)
                {
                    cout << "* ";
                }
            }
            else
            {
                cout << "* ";

                for (int i = 0; i < 3; i++)
                {
                    cout << "  ";
                }

                cout << "* ";
        }
        cout << endl;
    }






/// Genric-code  wala

 int rowcount;
 int colcount ; 

 cin >> rowcount;
 cin >> colcount;

for (int row1 = 0; row1 < rowcount; row1++)
    {

            if (row1 == 0 || row1 == rowcount-1)
            {

                 for (int col1 = 0; col1 < colcount; col1++)
                {
                    cout << "* ";
                }
            }
            else
            {
                cout << "* ";


                  // no spaces = no of col - 2 

                for (int i = 0; i < colcount-2; i++)
                {
                    cout << "  ";
                }

                cout << "* ";
        }
        cout << endl;
    }

    























    
}



