#include <iostream>
using namespace std;
/*
 * @author Matthew Washburn
 */
int** create2DArray(int row, int col) {
    int **array = (int **) malloc(row * sizeof(int*));
    for(int i=0; i < row; i++) {
    array[i] = (int *) malloc(col * sizeof(int));
    }
    return array;
}

void fillArray(int** array, int row, int col) {
    int value = 1;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            array[i][j] = value++;
        }
    }
}    

int** transposeArray(int** array, int row, int col) {
    int **transpose = create2DArray(col, row);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
        transpose[j][i] = array[i][j];
            }
        }
    return transpose;
    
}

void printArray(int** array, int row, int col) {
    for (int i=0; i < row; i++) {
        for (int j=0; j < col; j++) {
                cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int row;
    int col;
    cout << "Enter Rows:" << endl;
    cin >> row;
    cout << "Enter Columns:" << endl;
    cin >> col;
    int** array = create2DArray(row, col);
    fillArray(array, row, col);
    
    cout << "Here is your Matrix:" << endl;
    printArray(array,row, col);
    
    cout << "Here is your Matrix Transposed:" << endl;
    int** transpose = transposeArray(array, row, col);
    printArray(transpose, col, row);
    
    for (int i = 0; i < row; i++) {
        free(array[i]);
    }
    free(array);
    
    return 0;
}
