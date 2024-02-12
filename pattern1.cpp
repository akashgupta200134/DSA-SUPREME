#include <iostream>
using namespace std;

int main()
{

    // patterns -1
    //       *****
    //       *****
    //       *****

    for (int row = 0; row < 3; row++)
    {

        for (int col = 0; col < 5; col++)
        {
            cout << "*";
        }

        cout << endl;
    }

  /// pattern type 2
//   ***
//   ***
//   ***
//   ***
//   ***

    for (int j = 0; j < 5; j++)
    {

        for (int i = 0; i < 3; i++)
        {
            cout << "*";
        }

        cout << endl;
    }



    /// print  same pattern by taking the input from user

    int n;
    cin >> n;
    for (int row1 = 0; row1 < n; row1++)
    {

        for (int col1 = 0; col1 < n; col1++)
        {

            cout << " * ";
        }

        cout << endl;
    }
}