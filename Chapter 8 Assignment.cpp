#include <iostream>
using namespace std;

int main() 
{
    const int rows = 3;
    const int cols = 4;
    double matrix[rows][cols];
    
    // Get matrix input from the user
    cout << "Enter a " << rows << " by " << cols << " matrix row by row:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) 
		{
            cin >> matrix[i][j];
        }
    }
    
    // Calculate column sums
    for (int col = 0; col < cols; col++) 
	{
        double column_sum = 0;
        for (int row = 0; row < rows; row++) 
		{
            column_sum += matrix[row][col];
        }
        cout << "Sum of the elements at column " << col << " is " << column_sum << endl;
    }
    
    return 0;
}

