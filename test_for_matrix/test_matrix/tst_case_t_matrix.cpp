#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "../../matrix.h"

using namespace testing;
TEST(Matrix_t, Transpose_itself){
    //arrange
    MatrixSquare matrix(3,{1,2,3, 2,1,4, 3,4,1});
//    MatrixSquare matrix_t(3,{0,0,0, 0,0,0, 0,0,0});

    //act
    MatrixSquare matrix_t = matrix.transposed();

    //assert
    ASSERT_TRUE(matrix==matrix_t);
}

TEST(Matrix_t, Transpose1){
    //arrange
    MatrixSquare matrix(3,{1,2,3, 4,5,6, 7,8,9});
    MatrixSquare matrix_cur_t(3,{1,4,7, 2,5,8, 3,6,9});

    //act
    MatrixSquare matrix_res_t = matrix.transposed();

    //assert
    ASSERT_TRUE(matrix_cur_t==matrix_res_t);
}


