/*-----Swap two given numbers using third variable------*/
#include <iostream>
using namespace std;


//Function for Swap with third variable
void swapp(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "After Swapping  :" << endl << num1 << " " << num2;
}


int main()
{
    int num1, num2;
    cout << "Enter num1 and num2 :" << endl;
    cin >> num1 >> num2;
    cout << "Before Swapping :" << endl
         << num1 << " " << num2 << endl;

    swapp(num1, num2);

    return 0;
}