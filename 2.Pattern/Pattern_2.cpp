#include <iostream>
using namespace std;
/*

For input = 5
*   *   *   *  *
*   *   *   *
*   *   *
*   *
*

*/
int main(void)
{
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*\t";
        }
        cout << endl;
    }
    return 0;
}
