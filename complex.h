#ifndef TCOMPLEX_H
#define TCOMPLEX_H
#include <iostream>

class TComplex
{
public:
    TComplex();
    TComplex(double _real);
    TComplex(double _real, double _image);
    TComplex(int _real);
    TComplex(const TComplex&) = default;
    TComplex& operator =(const TComplex& other) = default;
    TComplex operator -() const;
    TComplex operator +() const;
    TComplex& operator +=(const TComplex& other);
    TComplex& operator -=(const TComplex& other);
    TComplex& operator *=(const TComplex& other);
    TComplex& operator /=(const TComplex& other);

    double get_real() const{
        return real;
    }

    double get_image() const{
        return image;
    }

    friend TComplex operator +(TComplex left, const TComplex& right);
    friend TComplex operator -(TComplex left, const TComplex& right);
    friend TComplex operator *(TComplex left, const TComplex& right);
    friend TComplex operator /(TComplex left, const TComplex& right);
    friend bool operator ==(const TComplex& left, const TComplex& right);
    friend bool operator !=(const TComplex& left, const TComplex& right);

    friend std::ostream& operator<<(std::ostream& out, const TComplex& num);
    friend std::istream& operator>>(std::istream& in, TComplex& num);

private:
    double real, image;
};

#endif // TCOMPLEX_H
