//<--Wasif_Hossain-->--- Problem Name :
#include <bits/stdc++.h>
using namespace std;
/*

1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

*/

//---------------  main function  ----------------- :)
int main()
{

    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        int c1 = 1;
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << c1 << " ";
            c1++;
        }

        for (int k = 1; k <= i - 1; k++)
        {
            cout << "* ";
        }

        for (int n = 1; n <= i - 1; n++)
        {
            cout << "* ";
        }

        int c2 = n - i + 1;
        for (int m = 1; m <= n - i + 1; m++)
        {
            cout << c2 << " ";
            c2--;
        }

        cout << endl;
    }

    return 0;
}
