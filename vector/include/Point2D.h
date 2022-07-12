//
// Created by wj on 22. 4. 30.
//

#ifndef POINT2D_H
#define POINT2D_H

namespace camelVector
{
	class Point2D
	{
	public:
		Point2D();
		Point2D(float x, float z);

		float GetX() const;
		float GetZ() const;

		void SetX(const float x);
		void SetZ(const float z);

        // sorting
        static bool AscendingByX(Point2D& firstPoint, Point2D& secondPoint);
        static bool AscendingByZ(Point2D& firstPoint, Point2D& secondPoint);
        static bool DescendingByX(Point2D& firstPoint, Point2D& secondPoint);
        static bool DescendingByZ(Point2D& firstPoint, Point2D& secondPoint);

	private:
		float mX, mZ;
	};
}

#endif //POINT2D_H
