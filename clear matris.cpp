
#include <iostream>
using namespace std;

int main()
{
    int a, n;
    int c = 1;
    cout << "enter rows and cols: ";
    cin >> n;
    int ARR[50][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            //cout << "Enter element of your matris: ";
            cin >> a;

            if (a != 0)
            {
                ARR[c][0] = i;
                ARR[c][1] = j;
                ARR[c][2] = a;
                c++;
            }
                //cout << "zero element deleted.";

        }
    }
    ARR[0][0] = n;
    ARR[0][1] = n;
    ARR[0][2] = c-1;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ARR[i][j] << "  ";
        }
        cout << endl;
    }

}