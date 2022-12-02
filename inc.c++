#include <iostream>

using namespace std;

int main()
{
    int a, b = 1;
    a = 10;
    if(--a)
        cout << "This is real value of b: " << b << endl;
    else
        cout << "This is incremented value of b: " << ++b << endl;
    return 0;
}