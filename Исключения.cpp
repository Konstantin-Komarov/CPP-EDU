#include <iostream> 
#include <cmath> 

using namespace std; 

int main(){ 
    int x1,y1,x2,y2; 
    cout << "Vvedite koordinati pervoy tochki (x1,y1) cherez probel: ";
    cin >> x1>> y1; 
    cout<< "Vvedite koordinati vtoroy tochki (x2,y2) cherez probel: "; 
    cin >> x2 >> y2; 
    cout << "Rasstoyaniye mejdu tochkami ravno: " << sqrt(pow(x2-x1, 2)+pow(y2-y1, 2)) << "." << endl; 
    return 0; 
}