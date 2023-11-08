#include <iostream>
using namespace std;

int Delete(int, int, int []);
int Find(int, int, int []);

int main()
{
    int Arr[50];
    int n;
    cout << "enter number of elements: ";
    cin >> n; // number of elelments
    cout << "enter your array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }

    cout << "1. Insert the object in index." << endl;
    cout << "2. Delete an object" << endl;
    cout << "3. Find" << endl;
    cout << "\nenter the number of command: ";

    int a, index, object;
    cin >> a;
    while (1)
        switch (a)
        {
        case 1:
            int Insert(int object, int index);
            cout << "enter the command number: " << endl;
            cin >> a;
            break;


        case 2:
            cout << "enter the index of object you want to delete: ";
            cin >> index;
            object = Delete(index, n, Arr);
            cout << "\nenter the command number: " << endl;
            cin >> a;
            break;


        case 3:
            cout << "enter the object: ";
            cin >> object;
            index = Find(object, n, Arr);
            cout << index << endl;
            cout << "enter the command number: " << endl;
            cin >> a;
            break;


        default:
            cout << "not exist.";
            exit(0);
        }
}

//method num 2
int Delete(int index, int n, int Arr[])
{
    int object;
    object = Arr[index];

    for (int i = index; i < n; i++)
    {
        Arr[i] = Arr[i + 1];
    }

    Arr[n-1] = NULL;

    return object;
}

//method num 3
int Find(int object, int n, int Arr[])
{
    static int I[10];
    for (int i = 0; i < n; i++)
    {
        if (Arr[i] == object)
        {
            return i;
        }
    }
    cout << "not found!";
    exit(0);
}