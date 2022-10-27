//
//  Matrix.cpp
//  PCA
//
//  Created by Louis Navarro on 10/25/22.
//

#include "Matrix.hpp"
#include <vector>
#include <cmath>
#include <iostream>

using std::vector;
using std::sqrt;

Matrix::Matrix(vector<float> stuff, int rows, int cols) {
    data = stuff;
    nrow = rows;
    ncol = cols;
}

Matrix::Matrix(int rows, int cols) {
    vector<float> data(rows * cols);
    setRows(rows);
    setCols(cols);
}

void Matrix::setRows(int x) {
    nrow = x;
}

void Matrix::setCols(int x) {
    ncol = x;
}

int Matrix::mean() {
        return sum()/size();
    }

float Matrix::var() {
    float sum = 0;
    int n = size();
    
    return sum/(n-1);
}

unsigned long Matrix::size() {
    return data.size();
}

float Matrix::sd() {
    return sqrt(var());
}

float Matrix::sum() {
    float sum = 0;
    
    return sum;
}

Matrix Matrix::cov() {
    unsigned dimension = ncols();
    unsigned n = nrows();
    Matrix covariance = Matrix(dimension, dimension);
    
    
    return covariance;
}

void Matrix::print() {
    for (int i =0; i < nrow; i ++) {
        for (int j =0; j < ncol; j ++) {
            std::cout << "[" << data[i*ncol + j] << "] ";
        }
        std::cout << std::endl;
    }
}

int Matrix::nrows() {
    return nrow;
}

int Matrix::ncols() {
    return ncol;
}
