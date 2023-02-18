include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

SOURCES += \
        main.cpp         \
        tst_case_determinant.cpp \
        tst_case_rank.cpp \
        tst_case_t_matrix.cpp
