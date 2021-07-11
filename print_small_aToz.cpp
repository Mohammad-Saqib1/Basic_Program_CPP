#include <bits/stdc++.h>
using namespace std;
//ASCII CODE 65+32(97) to 90+32(122) FOR a to z
void AToZ()
{
    char ch = 122;
    for (int i = 97; i <= ch; i++)
    {
        cout << char(i) << " ";
    }
}
int main()
{
    AToZ();
    return 0;
}