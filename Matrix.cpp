//
//  Matrix.cpp
//  PCA
//
//  Created by Louis Navarro on 10/25/22.
//

#include "Matrix.hpp"
#include <vector>
#include <cmath>

using std::vector;
using std::sqrt;

Matrix ::Matrix(vector<vector<float>> stuff) {
    data = stuff;
    nrow = data.size();
    ncol = data[0].size();
}

Matrix::Matrix(int rows, int cols) {
    vector<vector<float>> data(rows);
    for (int i =0; i < rows; i++) {
        data[i].resize(cols);
    }
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
    for (int i=0; i < data.size(); i++) {
        for (int j =0; j < data[i].size(); j++) {
            float diff = data[i][j] - mean();
            sum += diff * diff;
        }
    }
    return sum/(n-1);
}

int Matrix::size() {
    int count = 0;
    for (int i =0; i < data.size(); i++) {
        count += data[i].size();
    }
    return count;
}

float Matrix::sd() {
    return sqrt(var());
}

float Matrix::sum() {
    float sum = 0;
    for (int i = 0; i < nrow; i++) {
        for (int j = 0; j < ncol; j++) {
            sum += data[i][j];
        }
    }
    return sum;
}

//unsigned Matrix::dim() {
//    unsigned dimensions[2] = {nrow, ncol};
//    return dimensions
//}
