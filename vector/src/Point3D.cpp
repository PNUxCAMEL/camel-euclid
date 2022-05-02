//
// Created by wj on 22. 4. 30.
//

#include "../include/Point3D.h"

namespace CamelVector
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

	void Point3D::SetX(float const x)
	{
		mX = x;
	}

	void Point3D::SetY(float const y)
	{
		mY = y;
	}

	void Point3D::SetZ(float const z)
	{
		mZ = z;
	}

	void Point3D::SetXYZ(float const x, float const y, float z)
	{
		mX = x;
		mY = y;
		mZ = z;
	}
}