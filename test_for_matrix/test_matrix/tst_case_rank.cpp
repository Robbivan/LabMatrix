#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "../../matrix.h"

using namespace testing;

TEST(Matrix_rank, Rank_zero){
    //arrange
    const size_t rank_check = 0;
    MatrixSquare matrix(3,{0,0,0, 0,0,0, 0,0,0});

    //act
    size_t rank_cur = matrix.rank();

    //assert
    ASSERT_EQ(rank_check,rank_cur);
}

TEST(Matrix_rank, Rank1){
    //arrange
    const size_t rank_check = 1;
    MatrixSquare matrix(2,{0,0, 1,0});

    //act
    size_t rank_cur = matrix.rank();

    //assert
    ASSERT_EQ(rank_check,rank_cur);
}


TEST(Matrix_rank, Rank2){
    //arrange
    const size_t rank_check = 3;
    MatrixSquare matrix(3,{-5.5,1,7, 1,1,0, 1,2,1});

    //act
    size_t  rank_cur = matrix.rank();

    //assert
    ASSERT_EQ(rank_check,rank_cur);
}

TEST(Matrix_rank, Rank3){
    //arrange
    const size_t rank_check = 3;
    MatrixSquare matrix(3,{0,1,7, 1,1,0, 1,2,1});

    //act
    size_t  rank_cur = matrix.rank();

    //assert
    ASSERT_EQ(rank_check,rank_cur);
}

TEST(Matrix_rank, Rank4){
    //arrange
    const size_t rank_check = 1;
    MatrixSquare matrix(2,{0,0,0,1});

    //act
    size_t  rank_cur = matrix.rank();

    //assert
    ASSERT_EQ(rank_check,rank_cur);
}
