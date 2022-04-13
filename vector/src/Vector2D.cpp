//
// Created by wj on 22. 4. 8..
//

#include "../include/Vector2D.h"

namespace CamelVector
{
    Vector2D::Vector2D()
        : mX(0)
        , mY(0)
    {
    }

    Vector2D::Vector2D(float x, float y)
        : mX(x)
        , mY(y)
    {
    }

    float Vector2D::GetX() const
    {
        return mX;
    }

    float Vector2D::GetY() const
    {
        return mY;
    }

    void Vector2D::SetX(const float x)
    {
        mX = x;
    }

    void Vector2D::SetY(const float y)
    {
        mY = y;
    }

}