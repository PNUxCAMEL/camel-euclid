//
// Created by wj on 22. 4. 30.
//

#include "../include/Point3D.hpp"

namespace camelVector
{
    Point3D::Point3D()
        : mX(0.0f)
        , mY(0.0f)
        , mZ(0.0f)
    {
    }

    Point3D::Point3D(float x, float y, float z)
        : mX(x)
        , mY(y)
        , mZ(z)
    {
    }

    float Point3D::GetX() const
    {
        return mX;
    }

    float Point3D::GetY() const
    {
        return mY;
    }

    float Point3D::GetZ() const
    {
        return mZ;
    }

    void Point3D::SetX(float x)
    {
        mX = x;
    }

    void Point3D::SetY(float y)
    {
        mY = y;
    }

    void Point3D::SetZ(float z)
    {
        mZ = z;
    }

    void Point3D::SetXYZ(float x, float y, float z)
    {
        mX = x;
        mY = y;
        mZ = z;
    }

    bool Point3D::AscendingByX(Point3D& firstPoint, Point3D& secondPoint)
    {
        if (firstPoint.GetX() == secondPoint.GetX())
        {
            if (firstPoint.GetY() == secondPoint.GetY())
            {
                return firstPoint.GetZ() < secondPoint.GetZ();
            }
            else
            {
                return firstPoint.GetY() < secondPoint.GetY();
            }
        }
        else
        {
            return firstPoint.GetX() < secondPoint.GetY();
        }
    }

    bool Point3D::AscendingByY(Point3D& firstPoint, Point3D& secondPoint)
    {
        if (firstPoint.GetY() == secondPoint.GetY())
        {
            if (firstPoint.GetZ() == secondPoint.GetZ())
            {
                return firstPoint.GetX() < secondPoint.GetX();
            }
            else
            {
                return firstPoint.GetZ() < secondPoint.GetZ();
            }
        }
        else
        {
            return firstPoint.GetY() < secondPoint.GetY();
        }
    }

    bool Point3D::AscendingByZ(Point3D& firstPoint, Point3D& secondPoint)
    {
        if (firstPoint.GetZ() == secondPoint.GetZ())
        {
            if (firstPoint.GetX() == secondPoint.GetX())
            {
                return firstPoint.GetY() < secondPoint.GetY();
            }
            else
            {
                return firstPoint.GetX() < secondPoint.GetX();
            }
        }
        else
        {
            return firstPoint.GetZ() < secondPoint.GetZ();
        }
    }

    bool Point3D::DescendingByX(Point3D& firstPoint, Point3D& secondPoint)
    {
        if (firstPoint.GetX() == secondPoint.GetX())
        {
            if (firstPoint.GetY() == secondPoint.GetY())
            {
                return firstPoint.GetZ() > secondPoint.GetZ();
            }
            else
            {
                return firstPoint.GetY() > secondPoint.GetY();
            }
        }
        else
        {
            return firstPoint.GetX() > secondPoint.GetX();
        }
    }

    bool Point3D::DescendingByY(Point3D& firstPoint, Point3D& secondPoint)
    {
        if (firstPoint.GetY() == secondPoint.GetY())
        {
            if (firstPoint.GetZ() == secondPoint.GetZ())
            {
                return firstPoint.GetX() > secondPoint.GetX();
            }
            else
            {
                return firstPoint.GetZ() > secondPoint.GetZ();
            }
        }
        else
        {
            return firstPoint.GetY() > secondPoint.GetY();
        }
    }

    bool Point3D::DescendingByZ(Point3D& firstPoint, Point3D& secondPoint)
    {
        if (firstPoint.GetZ() == secondPoint.GetZ())
        {
            if (firstPoint.GetX() == secondPoint.GetX())
            {
                return firstPoint.GetY() > secondPoint.GetY();
            }
            else
            {
                return firstPoint.GetX() > secondPoint.GetX();
            }
        }
        else
        {
            return firstPoint.GetZ() > secondPoint.GetZ();
        }
    }

    bool Point3D::bIsEqual(const Point3D& other) const
    {
        if (mX == other.GetX() && mY == other.GetY() && mZ == other.GetZ())
        {
            return true;
        }
        return false;
    }

    float Point3D::DistanceBetweenOther(const Point3D& other) const
    {
        return std::sqrt((mX - other.GetX()) * (mX - other.GetX()) + (mY - other.GetY()) * (mY - other.GetY()) + (mZ - other.GetZ()) * (mZ - other.GetZ()));
    }

    float Point3D::DistanceBetweenOtherXZ(const Point3D& other) const
    {
        return std::sqrt((mX - other.GetX()) * (mX - other.GetX()) + (mZ - other.GetZ()) * (mZ - other.GetZ()));
    }

}