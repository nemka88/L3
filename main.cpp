// L4.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;
 
int main()
{
    int x;
    cin >> x;
    if (((x % 10) % 2 == 0) || (((x / 10) % 10) % 2 == 0) || ((x / 100) % 2 == 0))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
