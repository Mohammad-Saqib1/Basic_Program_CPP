#include <iostream>
using namespace std;
int main()
{
    /*++ increamen operator:-
    1.++X prefix:-first increase value by 1 then use it
    1.X++ postfix:-first use it then increase value by 1 
    */
    cout << "Increament Operator " << endl;
    int x = 5, y = 10, z;
    x = ++x; //++5=6
    cout << x << endl;
    z = y++; //10++=10 after then 11
    cout << z << endl;
    cout << y << endl; //11 bcz fisrt use it then incrs

    /*++ decreament operator:-
    1.--X prefix:-first decrease value by 1 then use it
    1.X-- postfix:-first use it then decrease value by 1 
    */
    cout << "Decreament Operator " << endl;
    int a = 5, b = 10, c;
    a = --a; //--5=4
    cout << a << endl;
    c = b--; //10--=10 after then 9
    cout << c << endl;
    cout << b << endl; //9 bcz first decrease then use it
    return 0;
}