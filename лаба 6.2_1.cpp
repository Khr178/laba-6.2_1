// лаба 6.2_1.cpp 

#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
    cout << "\nEnter the size of the array(max 10)\n";
    const int n = 10;
    int a[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    

    cout << "Array before modfication:" << endl;
    print_array(a, n);

    reverse(a, n);

    cout << "\nArray after modfication:" << endl;
    print_array(a, n);
    cout << endl;

    return 0;
}




