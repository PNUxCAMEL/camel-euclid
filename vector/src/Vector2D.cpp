//
// Created by wj on 22. 4. 8..
//

#include "../include/Vector2D.h"

namespace camelVector
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

    bool Vector2D::AscendingByX(Vector2D& firstVector, Vector2D& secondVector)
    {
        return firstVector.GetX() < secondVector.GetX();
    }

    bool Vector2D::AscendingByY(Vector2D& firstVector, Vector2D& secondVector)
    {
        return firstVector.GetY() < secondVector.GetY();
    }

    bool Vector2D::DescendingByX(Vector2D& firstVector, Vector2D& secondVector)
    {
        return firstVector.GetX() > secondVector.GetX();
    }

    bool Vector2D::DescendingByY(Vector2D& firstVector, Vector2D& secondVector)
    {
        return firstVector.GetY() > secondVector.GetY();
    }

}