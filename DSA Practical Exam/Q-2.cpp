#include <iostream>
using namespace std;

int main() {
    int rows = 10; 
    int i = 0;
    while (i < rows) {
        
        int j = 0;
        while (j < rows - i) {
            
            if (i % 2 == 0) {
               cout << "@ ";
            } else {
                cout << "% ";
            }
            j++;
        }
        cout << endl; // Newline after each row
        i++;
    }

    return 0;
}