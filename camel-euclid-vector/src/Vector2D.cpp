//
// Created by wj on 22. 4. 8..
//

#include "camel-euclid-vector/Vector2D.hpp"

namespace camelvector
{
    Vector2D::Vector2D()
        : mX(0.0f)
        , mY(0.0f)
    {
    }

    Vector2D::Vector2D(float x, float y)
        : mX(x)
        , mY(y)
    {
    }

    Vector2D::Vector2D(float data[2])
        : mX(data[0])
        , mY(data[1])
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

    float Vector2D::GetByIndex(int index) const
    {
        switch(index)
        {
        case 0:
            return mX;
        case 1:
            return mY;
        default:
            std::cout << "Index error!" << std::endl;
            return 0;
        }
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
        return firstVector.mX < secondVector.mX;
    }

    bool Vector2D::AscendingByY(Vector2D& firstVector, Vector2D& secondVector)
    {
        return firstVector.mY < secondVector.mY;
    }

    bool Vector2D::DescendingByX(Vector2D& firstVector, Vector2D& secondVector)
    {
        return firstVector.mX > secondVector.mX;
    }

    bool Vector2D::DescendingByY(Vector2D& firstVector, Vector2D& secondVector)
    {
        return firstVector.mY > secondVector.mY;
    }

    void Vector2D::Cout() const
    {
        std::cout << mX << " " << mY << std::endl;
    }

    bool Vector2D::bIsEqual(const Vector2D& other) const
    {
        if (mX == other.mX && mY == other.mY)
        {
            return true;
        }
        return false;
    }

    float Vector2D::Norm(const Vector2D& other) const
    {
        return std::sqrt((mX - other.mX) * (mX - other.mX) + (mY - other.mY) * (mY - other.mY));
    }

    float Vector2D::Dot(const Vector2D& other) const
    {
        float dotProduct = 0;
        for (int i = 0; i < 3; i++)
        {
            dotProduct += GetByIndex(i) * other.GetByIndex(i);
        }
        return dotProduct;
    }
}