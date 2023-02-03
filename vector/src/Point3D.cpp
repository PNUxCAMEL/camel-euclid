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

    Point3D::Point3D(float data[3])
        : mX(data[0])
        , mY(data[1])
        , mZ(data[2])
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

    float Point3D::GetByIndex(int index) const
    {
        switch (index)
        {
        case 0:
            return mX;
        case 1:
            return mY;
        case 2:
            return mZ;
        default:
            std::cout << "Index error!" << std::endl;
            return 0;
        }
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

    void Point3D::operator-=(const Point3D& other)
    {
        mX -= other.mX;
        mY -= other.mY;
        mZ -= other.mZ;
    }

    void Point3D::operator/=(float val)
    {
        mX /= val;
        mY /= val;
        mZ /= val;
    }

    bool Point3D::AscendingByX(Point3D& firstPoint, Point3D& secondPoint)
    {
        if (firstPoint.mX == secondPoint.mX)
        {
            if (firstPoint.mY == secondPoint.mY)
            {
                return firstPoint.mZ < secondPoint.mZ;
            }
            else
            {
                return firstPoint.mY < secondPoint.mY;
            }
        }
        else
        {
            return firstPoint.mX < secondPoint.mX;
        }
    }

    bool Point3D::AscendingByY(Point3D& firstPoint, Point3D& secondPoint)
    {
        if (firstPoint.mY == secondPoint.mY)
        {
            if (firstPoint.mZ == secondPoint.mZ)
            {
                return firstPoint.mX < secondPoint.mX;
            }
            else
            {
                return firstPoint.mZ < secondPoint.mZ;
            }
        }
        else
        {
            return firstPoint.mY < secondPoint.mY;
        }
    }

    bool Point3D::AscendingByZ(Point3D& firstPoint, Point3D& secondPoint)
    {
        if (firstPoint.mZ == secondPoint.mZ)
        {
            if (firstPoint.mX == secondPoint.mX)
            {
                return firstPoint.mY < secondPoint.mY;
            }
            else
            {
                return firstPoint.mX < secondPoint.mX;
            }
        }
        else
        {
            return firstPoint.mZ < secondPoint.mZ;
        }
    }

    bool Point3D::DescendingByX(Point3D& firstPoint, Point3D& secondPoint)
    {
        if (firstPoint.mX == secondPoint.mX)
        {
            if (firstPoint.mY == secondPoint.mY)
            {
                return firstPoint.mZ > secondPoint.mZ;
            }
            else
            {
                return firstPoint.mY > secondPoint.mY;
            }
        }
        else
        {
            return firstPoint.mX > secondPoint.mX;
        }
    }

    bool Point3D::DescendingByY(Point3D& firstPoint, Point3D& secondPoint)
    {
        if (firstPoint.mY == secondPoint.mY)
        {
            if (firstPoint.mZ == secondPoint.mZ)
            {
                return firstPoint.mX > secondPoint.mX;
            }
            else
            {
                return firstPoint.mZ > secondPoint.mZ;
            }
        }
        else
        {
            return firstPoint.mY > secondPoint.mY;
        }
    }

    bool Point3D::DescendingByZ(Point3D& firstPoint, Point3D& secondPoint)
    {
        if (firstPoint.mZ == secondPoint.mZ)
        {
            if (firstPoint.mX == secondPoint.mX)
            {
                return firstPoint.mY > secondPoint.mY;
            }
            else
            {
                return firstPoint.mX > secondPoint.mX;
            }
        }
        else
        {
            return firstPoint.mZ > secondPoint.mZ;
        }
    }

    void Point3D::Cout() const
    {
        std::cout << mX << " " << mY << " " << mZ << std::endl;
    }

    bool Point3D::bIsEqual(const Point3D& other) const
    {
        if (mX == other.mX && mY == other.mY && mZ == other.mZ)
        {
            return true;
        }
        return false;
    }

    float Point3D::Norm(const Point3D& other) const
    {
        return std::sqrt((mX - other.mX) * (mX - other.mX) + (mY - other.mY) * (mY - other.mY) + (mZ - other.mZ) * (mZ - other.mZ));
    }

    float Point3D::NormBetweenXZ(const Point3D& other) const
    {
        return std::sqrt((mX - other.mX) * (mX - other.mX) + (mZ - other.mZ) * (mZ - other.mZ));
    }

    float Point3D::Dot(const Point3D& other) const
    {
        float dotProduct = 0;
        for (int i = 0; i < 3; i++)
        {
            dotProduct += GetByIndex(i) * other.GetByIndex(i);
        }
        return dotProduct;
    }
}