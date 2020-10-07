#include <iostream>
using namespace std;

int GCD(int x, int y){
    if(x == 0)
        return y;
    if(y == 0)
        return x;

    if(x == y)
        return x;

    if(x > y)
        return GCD(x - y, y);
    return GCD(x, y - x);
}

int main(){
    int a, b;

    cout << "Please enter the two numbers whose GCD you wish to calculate: ";
    cin >> a >> b;

    if (a < 0 || b < 0 || b == 0 && a == 0)
        cout << "An error occurred.\n";
    else
        cout << "The GCD of " << a << " and " << b << " is " << GCD(a, b) << ".\n";

    return 0;
}
