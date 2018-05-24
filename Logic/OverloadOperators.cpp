#include "OverloadOperators.h"

std::pair<float ,float > operator+(std::pair<float ,float > vec1, std::pair<float ,float > vec2)
{
    float x = vec1.first + vec2.first;
    float y = vec1.second + vec2.second;

    return std::make_pair(x,y);
};

std::pair<float ,float > operator*(std::pair<float ,float > vec, float scal)
{
    vec.first *= scal;
    vec.second *=scal;

    return vec;
};

std::pair<float ,float > operator/(std::pair<float ,float > vec, float scal)
{
    vec.first /= scal;
    vec.second /=scal;

    return vec;
};
