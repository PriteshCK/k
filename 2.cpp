// 2 Write a C++ program to store a matrix of given order(Max 10 and Min 5) and arrange the elements of each row in ascending order using Bubble sort.

#include <iostream>
using namespace std;

// func to bubble on array/row
void bubbleSort(int row[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (row[j] > row[j + 1]) {
                // Swap the elements
                int temp = row[j];
                row[j] = row[j + 1];
                row[j + 1] = temp;
            }
        }
    }
}

int main(){
	int rows, cols;
	int matrix [10][10];
	do {
		cout << "Enter rows: ";
		cin >> rows;

		cout << "Enter cols: ";
		cin >> cols;

		if (rows < 5 || rows > 10 || cols > 10 || cols < 5) {
			cout << "out of range\n";
		}
	} while (rows < 5 || rows > 10 || cols > 10 || cols < 5);
	for (int i=0; i<rows; i++) {
		for (int j=0; j<cols; j++) {
			cin >> matrix[i][j];
		}
	}

	// disp matrix
	for (int i=0; i<rows; i++) {
		for (int j=0; j<cols; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}

	// sort matrix
    	for (int i = 0; i < rows; i++) {
		bubbleSort(matrix[i], cols);
	}

	// disp sorted matrix
	for (int i=0; i<rows; i++) {
		for (int j=0; j<cols; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}


	
return 0;
}