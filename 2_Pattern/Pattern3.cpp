#include <iostream>
using namespace std;
/*

For input n = 5
                                *
                        *       *
                *       *       *
        *       *       *       *
*       *       *       *       *

*/
int main(void)
{
    int n;
    cin >> n;
    int space = n - 1;
    int star = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            cout<<"\t";
        }
        for (int k = 1; k <= star; k++)
        {
            cout<<"*\t";
        }
        space--;
        star++;
        cout<<endl;
    }
    return 0;
}