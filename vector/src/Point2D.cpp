//
// Created by wj on 22. 4. 30.
//

#include "../include/Point2D.h"

namespace camelVector
{
	Point2D::Point2D()
		: mX(0)
		, mZ(0)
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

	void Point2D::SetX(const float x)
	{
		mX = x;
	}

	void Point2D::SetZ(const float z)
	{
		mZ = z;
	}
    bool Point2D::AscendingByX(Point2D& firstPoint, Point2D& secondPoint)
    {
        return firstPoint.GetX() < secondPoint.GetX();
    }

    bool Point2D::AscendingByZ(Point2D& firstPoint, Point2D& secondPoint)
    {
        return firstPoint.GetZ() < secondPoint.GetZ();
    }
    bool Point2D::DescendingByX(Point2D& firstPoint, Point2D& secondPoint)
    {
        return firstPoint.GetX() > secondPoint.GetX();
    }

    bool Point2D::DescendingByZ(Point2D& firstPoint, Point2D& secondPoint)
    {
        return firstPoint.GetZ() > secondPoint.GetZ();
    }
}