#include <iostream>
using namespace std;
int main()
{
    /*Bitwise AND(&):- 1&1 always 1 and other condition 0
    x  y     x&y
    1  1       1
    1  0       0
    0  1       0
    0  0       0

    */
    cout << "---Bitwise AND---" << endl;
    int x = 8, y = 10; /* Binary
                        1000(8)
                        1010(10)
                        1000(8)*/
    int z = x & y;
    cout << z << endl;


     /*Bitwise OR(&):- 0|0 always 0 and other condition 1
    x  y     x|y
    1  1       1
    1  0       1
    0  1       1
    0  0       0

    */
    cout << "---Bitwise OR---" << endl;
    int a = 8, b = 10; /* Binary
                        1000(8)
                        1010(10)
                        1010(10)*/
    int c = a|b;
    cout << c<< endl;


     /*Bitwise XOR(^):- Same value always 0(1^1=0,0^0=0)and other condition 1
    x  y     x^y
    1  1       0
    1  0       1
    0  1       1
    0  0       0

    */
    cout << "---Bitwise XOR---" << endl;
    int d = 8, e = 10; /* Binary
                        1000(8)
                        1010(10)
                        0010(2)*/
    int f = d^e;
    cout << f << endl;
    return 0;
}