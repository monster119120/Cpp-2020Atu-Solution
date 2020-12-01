#include "class.h"
#include <iostream>

using namespace std;


Matrix::Matrix() {
    row = 0;
    col = 0;
    Initialization();
}

void Matrix::Initialization() {
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
            mat[i][j] = 0;
}

void Matrix::Transpose() {
    int temp[80][80];


    for (int i = 0; i <row ; ++i) {
        for (int j = 0; j < col; ++j) {
            temp[j][i] = mat[i][j];
        }
    }

    for (int j=0; j<row; j++)
    {
        delete [] mat[j];
    }
    delete [] mat;

    mat = new int*[col];

    for (int i=0; i<row; i++)
        mat[i] = new int[row];


    for (int i = 0; i <col ; ++i) {
        for (int j = 0; j < row; ++j) {
            mat[i][j] = temp[i][j];
        }
    }

    int tempt = row;
    row = col;
    col = tempt;
}

int Matrix::determinant(int** detArray, int n)
{
    int det = 0, detMult=1, colsFilled=0;
    int ** tempSubArr;

    // the 1x1 matrix is the base case - in this case, return the value
    if (n == 1)
    {
        det = detArray[0][0];
    }
    else
    {
        //allocate memory for temporary array
        tempSubArr = new int*[n-1];
        for (int j=0; j<(n-1); j++)
        {
            tempSubArr[j] = new int[n-1];
        }

        // for every column in the matrix, iteratively add
        // detArray[0,i]*determinant of minor array*(-1)^i
        // that corresponds to the entry in the first row and column n
        for (int i=0; i<n; i++)
        {
            colsFilled=0;

            //fill every column of comatrix
            for (int j=0; j<n; j++)
            {
                if (i!=j)
                {
                    for (int k=0; k<(n-1); k++)
                    {
                        tempSubArr[k][colsFilled]=
                                detArray[k+1][j];
                    }
                    colsFilled++;
                }
            }

            // recursive definition of determinant
            det = det + (detArray[0][i])*detMult*
                        determinant(tempSubArr, n-1);
            detMult*=(-1); //next sub-matrix should be opposite sign
        }

        //de-allocate memory for temporary array
        for (int j=0; j<(n-1); j++)
        {
            delete [] tempSubArr[j];
        }
        delete [] tempSubArr;


    }
    return det;
}

void Matrix::Determinant() {
    if (row!=col)
        cout<<"@"<<endl;
    else{
        cout<<determinant(mat, row)<<endl;
    }
}

void Matrix::read() {
    cin>>row>>col;
    mat = new int*[row];

    for (int i=0; i<col; i++)
        mat[i] = new int[col];

    for (int i = 0; i < row; ++i)
        for (int j = 0; j < col; ++j)
            cin>>mat[i][j];

}

void Matrix::show() {
    for (int i = 0; i < row; ++i){
        for (int j = 0; j < col; ++j)
        {
            cout<<mat[i][j];
            if (j<col-1)
                cout<<" ";
        }
        cout<<endl;
    }
}

Matrix::~Matrix() {
    for (int j=0; j<row; j++)
    {
        delete [] mat[j];
    }
    delete [] mat;
}
