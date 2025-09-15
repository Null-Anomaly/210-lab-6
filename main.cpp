/*COMSC 210 | Lab 6 & Functions 1 | Lawrence Bryant
IDE used: VSC*/

#include <iostream>
using namespace std;

//I am just using comments
//To space things out
//For my own Personal sanity
//Of not having things
//so cluttered

void enterArrayData(double*);
void outputArrayData(double*);
int sumArray();

int main()
{
    double* arr = nullptr;
    const int SIZE = 5;
    arr = new double[SIZE];
    enterArrayData(arr);
    outputArrayData(arr);


    delete[] arr;
    return 0;
}

void enterArrayData(double* arry)
{
    double safety = 0;
    for(int i = 0; i < 5; i++) 
    {
        cout << "Data entry for the array: \n";
        cout << "> Element #" << i << ": ";
        cin >> safety;
        arry[i] = safety;
        cout << "\n";
    }
    cout << "Data entry complete.\n";
}

void outputArrayData(double* arry)
{
    cout << "Outputting array elements: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arry[i] << " ";
    }
}