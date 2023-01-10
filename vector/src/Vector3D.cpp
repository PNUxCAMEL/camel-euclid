//
// Created by wj on 22. 4. 8..
//

#include "../include/Vector3D.hpp"

namespace camelVector
{
    Vector3D::Vector3D()
        : mX(0.0f)
        , mY(0.0f)
        , mZ(0.0f)
    {
    }

    Vector3D::Vector3D(float x, float y, float z)
        : mX(x)
        , mY(y)
        , mZ(z)
    {
    }

    float Vector3D::GetX() const
    {
        return mX;
    }

    float Vector3D::GetY() const
    {
        return mY;
    }

    float Vector3D::GetZ() const
    {
        return mZ;
    }

    float Vector3D::GetByIndex(int index) const
    {
        switch(index)
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

    void Vector3D::SetX(float const x)
    {
        mX = x;
    }

    void Vector3D::SetY(float const y)
    {
        mY = y;
    }

    void Vector3D::SetZ(float const z)
    {
        mZ = z;
    }

    void Vector3D::SetXYZ(float const x, float const y, float z)
    {
        mX = x;
        mY = y;
        mZ = z;
    }

    bool Vector3D::AscendingByX(Vector3D& firstVector, Vector3D& secondVector)
    {
        if (firstVector.mX == secondVector.mX)
        {
            if (firstVector.mY == secondVector.mY)
            {
                return firstVector.mZ < secondVector.mZ;
            }
            else
            {
                return firstVector.mY < secondVector.mY;
            }
        }
        else
        {
            return firstVector.mX < secondVector.mX;
        }
    }

    bool Vector3D::AscendingByY(Vector3D& firstVector, Vector3D& secondVector)
    {
        if (firstVector.mY == secondVector.mY)
        {
            if (firstVector.mZ == secondVector.mZ)
            {
                return firstVector.mX < secondVector.mX;
            }
            else
            {
                return firstVector.mZ < secondVector.mZ;
            }
        }
        else
        {
            return firstVector.mY < secondVector.mY;
        }
    }

    bool Vector3D::AscendingByZ(Vector3D& firstVector, Vector3D& secondVector)
    {
        if (firstVector.mZ == secondVector.mZ)
        {
            if (firstVector.mX == secondVector.mX)
            {
                return firstVector.mY < secondVector.mY;
            }
            else
            {
                return firstVector.mX < secondVector.mX;
            }
        }
        else
        {
            return firstVector.mZ < secondVector.mZ;
        }
    }

    bool Vector3D::DescendingByX(Vector3D& firstVector, Vector3D& secondVector)
    {
        if (firstVector.mX == secondVector.mX)
        {
            if (firstVector.mY == secondVector.mY)
            {
                return firstVector.mZ > secondVector.mZ;
            }
            else
            {
                return firstVector.mY > secondVector.mY;
            }
        }
        else
        {
            return firstVector.mX > secondVector.mX;
        }
    }

    bool Vector3D::DescendingByY(Vector3D& firstVector, Vector3D& secondVector)
    {
        if (firstVector.mY == secondVector.mY)
        {
            if (firstVector.mZ == secondVector.mZ)
            {
                return firstVector.mX > secondVector.mX;
            }
            else
            {
                return firstVector.mZ > secondVector.mZ;
            }
        }
        else
        {
            return firstVector.mY > secondVector.mY;
        }
    }

    bool Vector3D::DescendingByZ(Vector3D& firstVector, Vector3D& secondVector)
    {
        if (firstVector.mZ == secondVector.mZ)
        {
            if (firstVector.mX == secondVector.mX)
            {
                return firstVector.mY > secondVector.mY;
            }
            else
            {
                return firstVector.mX > secondVector.mX;
            }
        }
        else
        {
            return firstVector.mZ > secondVector.mZ;
        }
    }

    bool Vector3D::bIsEqual(const Vector3D& other) const
    {
        if (mX == other.mX && mY == other.mY && mZ == other.mZ)
        {
            return true;
        }
        return false;
    }

    float Vector3D::DistanceBetweenOther(const Vector3D& other) const
    {
        return std::sqrt((mX - other.mX) * (mX - other.mX) + (mY - other.mY) * (mY - other.mY) + (mZ - other.mZ) * (mZ - other.mZ));
    }
}