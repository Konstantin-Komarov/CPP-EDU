#include <iostream>
#include <cmath>

using namespace std;
double kooridants(int x1,int y1,int x2,int y2){
    if(((x1-x2)+(y2-y1)) ==0){
        throw "Devision by zero condition";
    }
    return sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
}
int main(){
    int x1,y1,x2,y2;
    cout << "Vvedite koordinati pervoy tochki (x1,y1) cherez probel: ";
    cin >> x1>> y1;
    cout<< "Vvedite koordinati vtoroy tochki (x2,y2) cherez probel: ";
    cin >> x2 >> y2;
    try{
        double r = kooridants(x1,y1,x2,y2);
        cout<<"Result is: "<<r<<endl;

    }
    catch (const char* error) {
        cerr << error<< endl;
    }
    return 0;
}