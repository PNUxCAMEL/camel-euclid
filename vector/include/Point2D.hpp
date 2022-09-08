//
// Created by wj on 22. 4. 30.
//

#ifndef POINT2D_H
#define POINT2D_H

#include <cmath>

namespace camelVector
{
	class Point2D
	{
	public:
		Point2D();
		Point2D(float x, float z);

		float GetX() const;
		float GetZ() const;

		void SetX(float x);
		void SetZ(float z);

        // sorting
        static bool AscendingByX(Point2D& firstPoint, Point2D& secondPoint);
        static bool AscendingByZ(Point2D& firstPoint, Point2D& secondPoint);
        static bool DescendingByX(Point2D& firstPoint, Point2D& secondPoint);
        static bool DescendingByZ(Point2D& firstPoint, Point2D& secondPoint);

		bool bIsEqual(const Point2D& other) const;

		float DistanceBetweenOther(const Point2D& other) const;

	private:
		float mX;
        float mZ;
	};
}

#endif //POINT2D_H
