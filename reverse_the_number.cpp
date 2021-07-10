/*---- Reverse the given number----*/
#include <iostream>
using namespace std;

void reverse(int num)
{
    int rev = 0, rem;
    while (num != 0)
    {                         // num=123          now num=12      now num=1
        rem = num % 10;       // rem=123%10=3     rem=12%10=2     rem=1%10=1
        rev = rev * 10 + rem; // rev=0*10+3=3     rev=3*10+2=32   rev=32*10+1=321
        num = num / 10;       // num=123/10=12    num=12/10=1     num=1/10=0 condition true terminate while loop
    }
    cout << rev << endl;
}

int main()
{
    int num;
    cout << "Enter the number " << endl;
    cin >> num;
    cout << "Reverse Number Of " << num << " Is :" << endl;
    reverse(num);

    return 0;
}