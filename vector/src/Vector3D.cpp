//
// Created by wj on 22. 4. 8..
//

#include "../include/Vector3D.h"

namespace CamelVector
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
}