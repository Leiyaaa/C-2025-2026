#include <string>
#include <iostream>
using namespace std;

int main() {
    string values, tmpl;
    
    getline(cin, values);
    getline(cin, tmpl);

    int start = 0;
    while (start < (int)values.length()) {
        int comma = values.find(',', start);
        if (comma == (int)string::npos) 
            comma = values.length();

        string pair = values.substr(start, comma - start);
        int eq = pair.find('=');
        
        if (eq != (int)string::npos) {
            string placeholder = "[" + pair.substr(0, eq) + "]";
            string value = pair.substr(eq + 1);

            size_t pos = 0;
            while ((pos = tmpl.find(placeholder, pos)) != string::npos) {
                tmpl.replace(pos, placeholder.length(), value);
                pos += value.length();
            }
        }

        start = comma + 1;
    }

    cout << tmpl << endl;
    return 0;
}