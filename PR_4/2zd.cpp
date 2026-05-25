#include <iostream>   
#include <iomanip>    
using namespace std;

int main() {
    float var1 = 2.3;
    float var2 = 2.3;
    float var3 = 2.123456;
    float var4 = 2.123456;
    int var5 = 2.123456;

    cout << var1 << endl;                         
    cout << fixed << setprecision(2) << var2 << endl; 
    cout << fixed << setprecision(6) << var3 << endl;                        
    cout << fixed << setprecision(2) << var4 << endl; 
    cout << var5 << endl;     

    
}
