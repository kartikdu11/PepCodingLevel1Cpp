#include <iostream>
using namespace std;

/*
for input n = 4
1                                               1
1       2                               2       1
1       2       3               3       2       1
1       2       3       4       3       2       1

*/
int main(void)
{
    int n;
    cin >> n;

    int star = 1;
    int space = (2 * n) - 3;
    

    for (int i = 1; i <= n; i++)
    {
        int value = 1;
        for (int j = 1; j <= star; j++)
        {
            cout << value << "\t";
            value++;
        }
        for (int j = 1; j <= space; j++)
        {
            cout << "\t";
        }
        if (i == n)
        {
            value--;
            star--;
        }

        for (int j = 1; j <= star; j++)
        {
            value--;
            cout << value << "\t";
        }
        cout << endl;
        star++;
        space -= 2;
        
    }

    return 0;
}