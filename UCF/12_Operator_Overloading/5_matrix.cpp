// Define a class matrix to represent 3x3 matrix. Provide appropriate instance methods. 
// Also define operator +, operator -, operator* to perform addition, subtraction and multiplication operations respectively.
#include<iostream>
using namespace std;

class Matrix{
    private:
        int matrix[3][3];
    
    public:
        Matrix(){}
        Matrix(int matrix[3][3]){
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    this->matrix[i][j] = matrix[i][j];
                }
            }
        }
        Matrix operator+(int matrix[3][3]){
            Matrix temp;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    temp.matrix[i][j] = this->matrix[i][j] + matrix[i][j];
                }
            }
            return temp;
        }
        Matrix operator-(int matrix[3][3]){
            Matrix temp;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    temp.matrix[i][j] = this->matrix[i][j] - matrix[i][j];
                }
            }
            return temp;
        }
        Matrix operator*(int matrix[3][3]){
            Matrix temp;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    temp.matrix[i][j] = (this->matrix[i][0]*matrix[0][j])+(this->matrix[i][1]*matrix[1][j])+(this->matrix[i][2]*matrix[2][j]);
                }
            }
            return temp;
        }
        void printMatrix(){
            for (int i = 0; i < 3; i++)
            {
                cout << "| " << matrix[i][0] << ", " << matrix[i][1] << ", " << matrix[i][2] << " |" << endl;
            }
        }
};

int main(){
    cout << "--- Testing Matrix Operations ---" << endl;

    int m1_data[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int m2_data[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int m3_data[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    }; // Identity matrix for multiplication test

    Matrix mat1(m1_data);
    Matrix mat2(m2_data);
    Matrix mat_result;

    cout << "\nMatrix 1:" << endl;
    mat1.printMatrix();

    cout << "\nMatrix 2:" << endl;
    mat2.printMatrix();

    cout << "\n--- Addition (mat1 + m2_data) ---" << endl;
    mat_result = mat1 + m2_data;
    mat_result.printMatrix();

    cout << "\n--- Subtraction (mat1 - m2_data) ---" << endl;
    mat_result = mat1 - m2_data;
    mat_result.printMatrix();

    cout << "\n--- Multiplication (mat1 * m3_data) ---" << endl;
    mat_result = mat1 * m3_data; // Using m3_data (identity) for simpler observation
    mat_result.printMatrix();

    cout << "\n--- End of Matrix Tests ---" << endl;

    return 0;
}