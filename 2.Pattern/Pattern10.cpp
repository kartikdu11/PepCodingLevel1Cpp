#include <iostream>
using namespace std;
/*
For input n = 5
                *
        *               *
*                               *
        *               *
                *

*/
int main(void)
{
    int n;
    cin >> n;

    int outer_space = n / 2;
    int inner_space = -1;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= outer_space; j++)
        {
            cout<<"\t";
        }

        cout<<"*\t";

        for (int j = 1; j <= inner_space; j++)
        {
            cout<<"\t";
        }
        if (i > 1 && i < n)
        {
            cout<<"*\t";
        }

        if (i <= n / 2)
        {
            outer_space--;
            inner_space += 2;
        }
        else
        {
            outer_space++;
            inner_space -= 2;
        }
        cout<<endl;
    }
    return 0;
}