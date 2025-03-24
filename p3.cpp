#include <iostream>
using namespace std;

int main() {
    string str = "hello world";  
    int n = str.length();

    char charArr[n]; 
    int countArr[n] = {0}; 
    int uniqueCounter = 0; 

    for (int i = 0; i < n; i++) {
        char ch = str[i];
        bool found = false;

        
        for (int j = 0; j < uniqueCounter; j++) {
            if (charArr[j] == ch) {
                countArr[j]++; 
                found = true;
                break;
            }
        }

        if (!found) {
            charArr[uniqueCounter] = ch;
            countArr[uniqueCounter] = 1;
            uniqueCounter++;
        }
    }

    cout << "Character  Count\n";
    for (int i = 0; i < uniqueCounter; i++) {
        cout << "   " << charArr[i] << "         " << countArr[i] << endl;
    }

    return 0;
}
