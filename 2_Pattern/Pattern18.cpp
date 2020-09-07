#include <iostream>
using namespace std;
/*
For input n = 7
*       *       *       *       *       *       *
        *                               *
                *               *
                        *
                *       *       *
        *       *       *       *       *
*       *       *       *       *       *       *

*/
int main(void)
{
    int n;
    cin >> n;
    int star = n;
    int space = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            cout << "\t";
        }
        for (int j = 1; j <= star; j++)
        {
            if (i > 1 && i <= n / 2 && j > 1 && j < star)
            {
                cout << "\t";
            }
            else
            {
                cout << "*\t";
            }
        }
        if (i <= n / 2)
        {
            space++;
            star -= 2;
        }
        else
        {
            space--;
            star += 2;
        }
        cout << endl;
    }

    return 0;
}