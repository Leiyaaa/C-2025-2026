#include <iostream>
#include <cmath>   
using namespace std;

int main() {
    double sum = 0;  
    int count = 0;    

    for (int i = 1; i <= 20; i++) {
        sum += sqrt(i);  
        count++;        
    }

    double average = sum / count; 

    cout << "Average = " << average << endl;

}
