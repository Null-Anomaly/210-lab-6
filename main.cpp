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
double sumArray(double*);

int main()
{
    double* arr = nullptr;
    const int SIZE = 5;
    arr = new double[SIZE];
    enterArrayData(arr);
    outputArrayData(arr);
    double sum = sumArray(arr);
    cout << "\nSum of values: " << sum;

    delete[] arr;
    return 0;
}

void enterArrayData(double* arry)
{
    double safety = 0;
    cout << "Data entry for the array: \n";
    for(int i = 0; i < 5; i++) 
    {
        cout << "> Element #" << i << ": ";
        cin >> safety;
        arry[i] = safety;
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

double sumArray(double* arry)
{
    double total = 0;
    for (int i = 0; i < 5; i++)
    {
        total += arry[i];
    }
    return total;
}