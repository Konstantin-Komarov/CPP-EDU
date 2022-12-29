#include<iostream>
using namespace std;

int main(){

    char a[80];
    int i,k=0;
    cout<<"Введите строку: ";
    cin>>a;
    i = 0; // начать с первого символа, a[0]
    while (a[i] != '\0' ) // пока не достигли конца строки
    {
        if ( a[i] == 'A' )   // если очередной символ – 'A', ...
            k++;        // cчетчик+1
        i ++;                // переходим к следующему символу
    }
    cout<<"Ответ:"<<endl;
    cout<<k;
    return 0;
}