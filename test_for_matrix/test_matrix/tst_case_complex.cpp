#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include "../../complex.h"

using namespace testing;

TEST(Complex, sum){
    //arange
    TComplex complex_one(5.0,2.5);
    TComplex complex_two(-5.0,-2.5);
    TComplex test_complex_sum(0.0,0.0);

    //act
    TComplex cur_complex_sum = complex_one + complex_two;

    //action
    ASSERT_DOUBLE_EQ(test_complex_sum.get_real(),cur_complex_sum.get_real());
    ASSERT_DOUBLE_EQ(test_complex_sum.get_image(),cur_complex_sum.get_image());

}

TEST(Complex, diff){
    //arange
    TComplex complex_one(5.0,2.5);
    TComplex complex_two(-5.0,-2.5);
    TComplex test_complex_diff(10.0,5.0);

    //act
    TComplex cur_complex_diff = complex_one - complex_two;

    //action
    ASSERT_DOUBLE_EQ(test_complex_diff.get_real(),cur_complex_diff.get_real());
    ASSERT_DOUBLE_EQ(test_complex_diff.get_image(),cur_complex_diff.get_image());

}

TEST(Complex, multiply){
    //arange
    TComplex complex_one(5.0,2.5);
    TComplex complex_two(-5.0,-2.5);
    TComplex test_complex_multiply(-18.75,-25.0);

    //act
    TComplex cur_complex_multiply = complex_one * complex_two;

    //action
    ASSERT_DOUBLE_EQ(test_complex_multiply.get_real(),cur_complex_multiply.get_real());
    ASSERT_DOUBLE_EQ(test_complex_multiply.get_image(),cur_complex_multiply.get_image());

}


TEST(Complex, division){
    //arange
    TComplex complex_one(5.0,2.5);
    TComplex complex_two(-5.0,2.5);
    TComplex test_complex_div(-0.6,-0.8);

    //act
    TComplex cur_complex_div = complex_one/ complex_two;

    //action
    ASSERT_DOUBLE_EQ(test_complex_div.get_real(),cur_complex_div.get_real());
    ASSERT_DOUBLE_EQ(test_complex_div.get_image(),cur_complex_div.get_image());

}
