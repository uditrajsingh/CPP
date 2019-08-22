#include<iostream>
using namespace std;
void display(int **arr, int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cout << " " << arr[i][j];
        }
    }
    cout<<"\n";
}
void multiplication(int **A, int **B, int sA, int sB){
    if(sA != sB){
        cout << "Multiplication not possible\n";
        return;
    }
    int **matrix = new int *[sA];
    for(int z=0; z<sA; z++){
        matrix[z] = new int[sA];
    }
    for(int i=0; i<sB; i++){
        for(int j=0; j<sB; j++){
            for(int k=0; k<sA; k++){
                matrix[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "Resultant matrix is: ";
    display(matrix, sA);
}
void subtraction(int **A, int **B, int sA, int sB){
    if(sA != sB){
        cout << "Addition not possible\n";
        return;
    }
    int **matrix = new int *[sA];


    display(A, sA);
    display(B, sB);

    for(int i=0; i<sA; i++){
        matrix[i] = new int[sA];
    }

    for(int i=0; i<sB; i++){
        for(int j=0; j<sB; j++){
            matrix[i][j] = A[i][j] - B[i][j];
        }
    }
    cout << "Resultant matrix is: ";
    display(matrix, sA);
}
void addition(int **A, int **B, int sA, int sB){
    if(sA != sB){
        cout << "Addition not possible\n";
        return;
    }
    int **matrix = new int *[sA];


    display(A, sA);
    display(B, sB);

    for(int i=0; i<sA; i++){
        matrix[i] = new int[sA];
    }

    for(int i=0; i<sB; i++){
        for(int j=0; j<sB; j++){
            matrix[i][j] = A[i][j] + B[i][j];
        }
    }
    cout << "Resultant matrix is: ";
    display(matrix, sA);

}

int main()
{
    int **matrixA = NULL;
    int **matrixB = NULL;
    int sizeA;
    int sizeB;

    cout << "Enter size of array A & B: ";
    cin >> sizeA;
    cin >> sizeB;

    matrixA = new int*[sizeA];
    matrixB = new int*[sizeB];

    cout << "\nEnter element of matrix A 1 by 1\n";

    for(int i=0; i<sizeA; i++){
        matrixA[i] = new int[sizeA];
    }
    for(int i=0; i<sizeB; i++){
        matrixB[i] = new int[sizeB];
    }


    for(int i=0; i<sizeA; i++){
        for(int j=0; j<sizeA; j++){
            cin >> matrixA[i][j];
        }
    }

    cout << "\n\nEnter element of matrix B 1 by 1\n";

    for(int i=0; i<sizeB; i++){
        for(int j=0; j<sizeB; j++){
            cin >> matrixB[i][j];
        }
    }

    int option;

    cout << "*********************Menu*********************\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Transpose";
    cout << "**********************************************\n\n";
    cout << "Enter option: ";
    cin >> option;
    cout << "Selected option is " << option << "\n";

    switch(option){
        case 1:
            addition(matrixA, matrixB, sizeA, sizeB);
            break;
        case 2:
            subtraction(matrixA, matrixB, sizeA, sizeB);
            break;
        case 3:
            multiplication(matrixA, matrixB, sizeA, sizeB);
            break;
        default:
            break;
    }

    return 0;
}
