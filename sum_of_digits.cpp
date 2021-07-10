/*----Sum of digits a given numbers----*/
#include <iostream>
using namespace std;


void sumOfDigits(int num)
{
    int sum = 0;
    while (num != 0)          //num=123           now num=12      now num=1
    {                         //sum=0+123%10=3    sum=3+12%10=5   sum=5+1%10=6
        sum = sum + num % 10; //num=123/10=12     num=12/10=1     num=1/10=0 condition true terminate while loop
        num = num / 10;
    }
    cout << sum << endl;
}


int main()
{
    int num;
    cout << "Enter the Number :" << endl;
    cin >> num;
    cout << "Sum Of Digits Of " << num << " Is :" << endl;
    sumOfDigits(num);
    return 0;
}
