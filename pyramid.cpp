//<--Wasif_Hossain-->--- Problem Name :
#include <bits/stdc++.h>
using namespace std;

//---------------  main function  ----------------- :)
int main()
{
    /*
      1
     121
    12321
   1234321
  123454321
 12345654321
1234567654321

*/

    int n = 7;

    for (int i = 1; i <= n; i++)
    {
        int count = 1;

        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << count;
            count++;
        }
        int count2 = i - 1;

        for (int m = 1; m <= i - 1; m++)
        {

            cout << count2;
            count2--;
        }

        cout << endl;
    }

    return 0;
}
