#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    
  
    std::cout << "Enter the row size: ";
    std::cin >> rows;
    std::cout << "Enter the  column size: ";
    std::cin >> cols;
    
    
    int *matrix = new int[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }
    
  
    std::cout << "Enter array's elements:" << std::endl;
    int i = 0, j = 0;
    while (i < rows) {
        j = 0;
        while (j < cols) {
            std::cout << "a[" << i << "][" << j << "] = ";
            std::cin >> matrix[i][j];
            ++j;
        }
        ++i;
    }
    
ent
    int maxElement = matrix[0][0];
    i = 0;
    while (i < rows) {
        j = 0;
        while (j < cols) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
            ++j;
        }
        ++i;
    }
   
    std::cout << "The largest element  is: " << maxElement << std::endl;
    
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
    
    return 0;
}