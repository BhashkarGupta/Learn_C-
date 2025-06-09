// Define a class Matrix to represent a 3x3 order matrix. Provide appropriate methods
// and properties to the class. Also define following methods in the class:
// 1. Matrix add(Matrix)
// 2. Matrix sub(Matrix)
// 3. Matrix multiply(Matrix)
// 4. Matrix transpose()
// 5. bool is_singular()

#include <iostream>
using namespace std;

class Matrix{
    private:
    int matrixData[3][3];

    int minor(int mat[3][3], int rowToRemove, int colToRemove)
    {
        int temp[2][2];
        int row = 0, col = 0, result;
        for (int i = 0; i < 3; i++)
        {
            if (i == rowToRemove)
            {
                continue;
            }
            else
            {
                for (int j = 0; j < 3; j++)
                {
                    if (j == colToRemove)
                    {
                        continue;
                    }
                    else
                    {
                        temp[row][col] = mat[i][j];
                        if (col != 1)
                        {
                            col++;
                        }else{
                            col = 0;
                            row++;
                        }
                    }
                }
            }
        }
        result = (temp[0][0] * temp[1][1]) - (temp[1][0] * temp[0][1]);
        return result;
    }

    int pow(int num, int power){
        int result = 1;
        for (int i = 0; i < power; i++)
        {
            result *= num;
        }
        return result;
    }

    int determinant(int matrix[3][3]){
        int result = 0, sign = -1;
        for (int i = 0; i < 3; i++)
        {
            result += pow(-1, i) * matrix[0][i] * minor(matrix, 0, i);
        }
        return result;
    }

    public:
    void setMatrixData(int matrix[3][3]){
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                matrixData[i][j] = matrix[i][j];
            }
        } 
    }

    void printMatrix(){
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matrixData[i][j] << " ";
            }
            cout << endl;
        } 
    }

    Matrix add(Matrix matrix){
        Matrix temp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                temp.matrixData[i][j] = matrixData[i][j] + matrix.matrixData[i][j];
            }
        }
        return temp;
    }

    Matrix sub(Matrix matrix){
        Matrix temp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                temp.matrixData[i][j] = matrixData[i][j] - matrix.matrixData[i][j];
            }
        }
        return temp;
    }

    Matrix multiply(Matrix matrix){
        Matrix temp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                int tempValue = 0;
                for (int x = 0; x < 3; x++)
                {
                    tempValue += (matrixData[i][x] * matrix.matrixData[x][j]);
                }
                temp.matrixData[i][j] = tempValue;
            }
        }
        return temp;
    }

    Matrix transpose(){
        Matrix temp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                temp.matrixData[j][i] = matrixData[i][j];
            }
        }
        return temp;
    }

    bool is_singular(){
        if (determinant(matrixData) == 0)
        {
            return true;
        }
        return false;
    }
};

int main() {
    Matrix A, B;

    int mat1[3][3] = {
        {2, -3, 1},
        {2, 0, -1},
        {1, 4, 5}
    };

    int mat2[3][3] = {
        {1, 2, 3},
        {0, 1, 4},
        {5, 6, 0}
    };

    A.setMatrixData(mat1);
    B.setMatrixData(mat2);

    cout << "Matrix A:" << endl;
    A.printMatrix();

    cout << "\nMatrix B:" << endl;
    B.printMatrix();

    cout << "\nA + B:" << endl;
    A.add(B).printMatrix();

    cout << "\nA - B:" << endl;
    A.sub(B).printMatrix();

    cout << "\nA * B:" << endl;
    A.multiply(B).printMatrix();

    cout << "\nTranspose of A:" << endl;
    A.transpose().printMatrix();

    cout << "\nIs Matrix A Singular? " << (A.is_singular() ? "Yes" : "No") << endl;

    return 0;
}
