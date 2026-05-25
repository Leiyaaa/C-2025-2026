#include <iostream>
using namespace std;
#include <cmath>

int first();
int second();


int main() {

first();
second();
return 0;


}
int first() {
    int a = 2;
    float b = 12.11f;
    const float p = 3.14f;

    cout << "a = " << a << ", b = " << b << endl;

    float numerator = 0.5f * (log(a) + log(b));
    float denominator = cbrt(cos(pow(a + b, 2) + exp(a)) * (p / 6.0f)); 

    float result = numerator / denominator;

    cout << "Result = " << result << endl;

    return 0;
}

int second() {
    
    int a = 4;
    float b = 300.1;
    float result2;
    result2 = pow(7.2*(a+b), (1+pow(cos(a),2))*(1-cos(b))+0.711*log*pow((a+b),3));
    cout << "\n" << result2;
    
    return 0;
}