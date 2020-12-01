#ifndef CLASS_H
#define CLASS_H

class Matrix {
private:
    int row;
    int col;
    int ** mat;

public:
    Matrix();
    ~Matrix();
    void read();
    void Initialization ();
    void Transpose ();
    void show();
    void Determinant ();
    int determinant(int** detArray, int n);
};

#endif /* CLASS_H */