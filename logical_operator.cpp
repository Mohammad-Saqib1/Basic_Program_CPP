#include <iostream>
using namespace std;
int main()
{

    //Logical AND(&&):- Both cases True
    cout << "---Logical AND---" << endl;
    char x;
    cout << "Enter your Charater :" << endl;
    cin >> x;
    if (x >= 'A' && x <= 'Z')
    {
        cout << "Character is Capital Alphabet" << endl;
    }
    else
    {
        cout << "Character is Smaller Alphabet" << endl;
    }
   

    //Logical OR(||):- One or Both cases True
    cout << "---Logical OR---" << endl;
    char ch;
    cout << "Enter your Character :" << endl;
    cin >> ch;
    if ((ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') ||

        (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
    {
        cout << "Character is Vowels" << endl;
    }
    else
    {
        cout << "Character is Consonants" << endl;
    }

    //Logical NOT:- True or False
    cout << "---Logical NOT---" << endl;
    int z=0;
    if(!z){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

    return 0;
}