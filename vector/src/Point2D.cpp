//
// Created by wj on 22. 4. 8..
//

#include "../include/Point2D.h"
//#include <camel-euclid/Point2D.h>

namespace CamelVector
{
    Point2D::Point2D()
        : mX(0)
        , mY(0)
    {
    }

    Point2D::Point2D(float x, float y)
        : mX(x)
        , mY(y)
    {
    }

    float Point2D::GetX() const
    {
        return mX;
    }

    float Point2D::GetY() const
    {
        return mY;
    }

    void Point2D::SetX(const float x)
    {
        mX = x;
    }

    void Point2D::SetY(const float y)
    {
        mY = y;
    }

}