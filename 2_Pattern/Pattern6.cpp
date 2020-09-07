#include <iostream>
using namespace std;
/*
For input n = 5
*       *       *               *       *       *
*       *                               *       *
*                                               *
*       *                               *       *
*       *       *               *       *       *

*/
int main(void)
{
    int n;
    cin >> n;

    int space = 1;
    int star = n / 2 + 1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= star; j++)
        {
            cout << "*\t";
        }

        for (int j = 1; j <= space; j++)
        {
            cout << "\t";
        }

        for (int j = 1; j <= star; j++)
        {
            cout << "*\t";
        }
        if (i <= n / 2)
        {
            star--;
            space += 2;
        }
        else
        {
            space -= 2;
            star++;
        }
        cout << endl;
    }
    return 0;
}