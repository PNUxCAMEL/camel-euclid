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
        return firstVector.GetX() < secondVector.GetX();
    }

    bool Vector3D::AscendingByY(Vector3D& firstVector, Vector3D& secondVector)
    {
        return firstVector.GetY() < secondVector.GetY();
    }

    bool Vector3D::AscendingByZ(Vector3D& firstVector, Vector3D& secondVector)
    {
        return firstVector.GetZ() < secondVector.GetZ();
    }

    bool Vector3D::DescendingByX(Vector3D& firstVector, Vector3D& secondVector)
    {
        return firstVector.GetX() > secondVector.GetX();
    }

    bool Vector3D::DescendingByY(Vector3D& firstVector, Vector3D& secondVector)
    {
        return firstVector.GetY() > secondVector.GetY();
    }

    bool Vector3D::DescendingByZ(Vector3D& firstVector, Vector3D& secondVector)
    {
        return firstVector.GetZ() > secondVector.GetZ();
    }

	bool Vector3D::bIsEqual(const Vector3D& other) const
	{
		if (mX == other.GetX() && mY == other.GetY() && mZ == other.GetZ())
		{
			return true;
		}
		return false;
	}

	float Vector3D::DistanceBetweenOther(const Vector3D& other) const
	{
		return std::sqrt((mX - other.GetX()) * (mX - other.GetX()) + (mY - other.GetY()) * (mY - other.GetY()) + (mZ - other.GetZ()) * (mZ - other.GetZ()));
	}
}