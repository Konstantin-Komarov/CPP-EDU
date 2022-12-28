#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string str = "This Is StRiNg";
    for (int i = 0; i < str.length(); i++)
    {
        if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
        else if(islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
    }
    cout << str << endl;
    system("pause");
    return 0;
}