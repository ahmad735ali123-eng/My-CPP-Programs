#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;
    cout << "Values Before Swapping is:";
    cout << "\na" << a << endl;
    cout << "b" << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Values After Swappung is:";
    cout << "\na" << a << endl;
    cout << "b" << b << endl;
    return 0;
}