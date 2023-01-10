//
// Created by wj on 22. 4. 30.
//

#include "../include/Point2D.hpp"

namespace camelVector
{
    Point2D::Point2D()
        : mX(0.0f)
        , mZ(0.0f)
    {
    }

    Point2D::Point2D(float x, float z)
        : mX(x)
        , mZ(z)
    {
    }

    float Point2D::GetX() const
    {
        return mX;
    }

    float Point2D::GetZ() const
    {
        return mZ;
    }

    float Point2D::GetByIndex(int index) const
    {
        switch(index)
        {
        case 0:
            return mX;
        case 1:
            return mZ;
        default:
            std::cout << "Index error!" << std::endl;
            return 0;
        }
    }

    void Point2D::SetX(float x)
    {
        mX = x;
    }

    void Point2D::SetZ(float z)
    {
        mZ = z;
    }

    bool Point2D::AscendingByX(Point2D& firstPoint, Point2D& secondPoint)
    {
        if (firstPoint.mX == secondPoint.mX)
        {
            return firstPoint.mZ < firstPoint.mZ;
        }
        else
        {
            return firstPoint.mX < firstPoint.mX;
        }
    }

    bool Point2D::AscendingByZ(Point2D& firstPoint, Point2D& secondPoint)
    {
        if (firstPoint.mZ == secondPoint.mZ)
        {
            return firstPoint.mX < firstPoint.mX;
        }
        else
        {
            return firstPoint.mZ < firstPoint.mZ;
        }
    }

    bool Point2D::DescendingByX(Point2D& firstPoint, Point2D& secondPoint)
    {
        if (firstPoint.mX == secondPoint.mX)
        {
            return firstPoint.mZ > firstPoint.mZ;
        }
        else
        {
            return firstPoint.mX > firstPoint.mX;
        }
    }

    bool Point2D::DescendingByZ(Point2D& firstPoint, Point2D& secondPoint)
    {
        if (firstPoint.mZ == secondPoint.mZ)
        {
            return firstPoint.mX > firstPoint.mX;
        }
        else
        {
            return firstPoint.mZ > firstPoint.mZ;
        }
    }

    bool Point2D::bIsEqual(const Point2D& other) const
    {
        if (mX == other.mX && mZ == other.mZ)
        {
            return true;
        }
        return false;
    }

    float Point2D::DistanceBetweenOther(const Point2D& other) const
    {
        return std::sqrt((mX - other.mX) * (mX - other.mX) + (mZ - other.mZ) * (mZ - other.mZ));
    }
}