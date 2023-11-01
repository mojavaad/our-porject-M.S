
#include <iostream>
using namespace std;


void hanoi(int NumDisk, char start, char temp, char finish)
{

    if (NumDisk == 1)
        cout << start << " -> " << finish << endl;

    else 
    {
        hanoi(NumDisk - 1, start, finish, temp);

        cout << start << " -> " << finish << endl;

        hanoi(NumDisk - 1, temp, start, finish);
    }

}
