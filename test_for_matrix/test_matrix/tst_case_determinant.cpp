#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "../../matrix.h"

using namespace testing;

TEST(Matrix_det, Determinant1){
    //arrange
    const number det_check = 61.5;
    MatrixSquare matrix(3,{-5,2,3, 4,5,6, -7.5,8,9});

    //act
    number det_cur = matrix.determinant();

    //assert
    ASSERT_DOUBLE_EQ(det_cur,det_check);
}

TEST(Matrix_det,Determinant2){
    const number det_check = 10.;
    MatrixSquare matrix(4,{5.5,	1,	0,	1,
    1,      1,	0,	0,
    1,      0,	1,	0,
    -5.5,	0,	0,	1});

    number det_cur = matrix.determinant();

    ASSERT_DOUBLE_EQ(det_cur,det_check);
}

TEST(Matrix_det,Determinant_zero){
    const number det_check = 0.0;
    MatrixSquare matrix(3,{1,2,3, 4,5,6, 7,8,9});

    number det_cur = matrix.determinant();

    ASSERT_DOUBLE_EQ(det_cur,det_check);
}



