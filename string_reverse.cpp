#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string *dynamicstr = new string;
    
    cout << "Enter String: ";
    cin >> *dynamicstr;
    
    
    for(int i = dynamicstr->length() - 1; i >= 0; i--) {
        cout << (*dynamicstr)[i];
    }
    cout << endl;

    delete dynamicstr; // Clean up memory
    return 0;
}
