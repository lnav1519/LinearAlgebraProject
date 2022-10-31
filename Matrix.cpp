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
#include <iomanip>

using std::vector;
using std::sqrt;

/**
 * Constructor for the Matrix Object
 *
 * @param stuff
 *      The vector of doubles containing the data to be contained in the Matrix
 * @param rows
 *      The number of rows the Matrix will have
 * @param cols
 *      The number of columns the Matrix will have
 * @param byrow
 *      Boolean for whether or not the data will be read into the Matrix by row. Reads in by column if false.
 */
Matrix::Matrix(vector<double> stuff, int rows, int cols, bool byrow) {
    nrow = rows;
    ncol = cols;
    if (byrow == false) {
        vector<double> temp(stuff.size());
        for (int i =0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                double value = stuff[j * cols + i];
                auto it = temp.begin() + (i * cols + j);
                temp.insert(it, value);
            }
        }
        data = temp;
    }
    else {
        data = stuff;
    }
}


Matrix::Matrix(int rows, int cols) {
    vector<double> data(rows * cols);
    setRows(rows);
    setCols(cols);
}


void Matrix::setRows(int x) {
    nrow = x;
}


void Matrix::setCols(int x) {
    ncol = x;
}

double Matrix::mean() {
    
    double avg = sum() / (data.size());
    return avg;
    
}

double Matrix::var() {
    double sum = 0;
    int n = size();
    double avg = mean();
    for (int i =0; i < size(); i++) {
        double diff = data[i] - avg;
        sum += diff*diff;
    }
    return sum/(n-1);
}

int Matrix::size() {
    return data.size();
}

double Matrix::sd() {
    return sqrt(var());
}

double Matrix::sum() {
    double sum = 0;
    for (int i =0; i < size(); i++) {
        sum+= data[i];
    }
    return sum;
}

Matrix Matrix::cov() {
    unsigned dimension = ncols();
    unsigned n = nrows();
    Matrix covariance = Matrix(dimension, dimension);
    for (int i = 0 ; i < ncols(); i++) {
        
    }
    
    return covariance;
}

void Matrix::print() {
    for (int i =0; i < nrow; i ++) {
        std::cout << "[";
        for (int j =0; j < ncol; j ++) {
            if (j == ncol - 1) {
                std::cout << data[i*ncol + j];
            }
            else {
                std::cout << data[i*ncol + j] << " ";
            }
        }
        std::cout << "] " << std::endl;
    }
}

int Matrix::nrows() {
    return nrow;
}

int Matrix::ncols() {
    return ncol;
}

Matrix Matrix::standardize() {
    
    for (int i = 0; i < ncols(); i++) {
        vector<double> column;
        for (int j = 0; i < nrows(); j++) {
            column.push_back(data[i*ncols() + j]);
        }
        Matrix temp = Matrix(column, nrows(), ncols());
        double avg = temp.mean();
        double sd = temp.sd();
    }
    Matrix temp = Matrix(1,1);
    return temp;
}


Matrix Matrix::getCols(<#vector<int>#> columns) {
    for (int i =0; i < columns.size(); i++) {
        
    }
}
