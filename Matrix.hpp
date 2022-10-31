//
//  Matrix.hpp
//  PCA
//
//  Created by Louis Navarro on 10/25/22.
//

#ifndef Matrix_hpp
#define Matrix_hpp

#include <stdio.h>


#include <stdio.h>
#include <vector>
#include <array>

class Matrix {
public:
    Matrix(std::vector<double> stuff, int rows, int cols, bool byrow=true);
    Matrix(int rows, int cols);
    double mean();
    double var();
    int size();
    double sd();
    double sum();
    Matrix cov();
    int nrows();
    int ncols();
    unsigned dim();
    void print();
    Matrix standardize();
    
    Matrix getCols(std::vector<int> columns);
    Matrix getRows(std::vector<int> rows);
private:
    std::vector<double> data;
    unsigned nrow;
    unsigned ncol;
    
    
    void setRows(int x);
    void setCols(int x);
};

#endif /* Matrix_hpp */
