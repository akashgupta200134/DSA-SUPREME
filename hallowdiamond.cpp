#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < n - row - 1; col++)
        { /// ye baherwala space
            cout << " ";
        }

        for (int i = 0; i < 2 * row + 1; i++)
        {

            // second - start and space wala

            if (i == 0 || i == 2 * row)
            {
                cout << "*";
            }

            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < row; col++)
        {

            cout << " ";
        }
        for (int i = 0; i < 2 * n - 2 * row + 1; i++)
        {

            // second - start and space wala

            if (i == 0 || i == 2 * n - 2 * row - 2)
            {
                cout << "*";
            }

            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
}