//
// Created by wj on 22. 4. 30.
//

#ifndef POINT3D_H
#define POINT3D_H

namespace camelVector
{
	class Point3D
	{
	public:
		Point3D();
		Point3D(float x, float y, float z);

		float GetX() const;
		float GetY() const;
		float GetZ() const;

		void SetX(float const x);
		void SetY(float const y);
		void SetZ(float const z);
		void SetXYZ(float const x, float const y, float const z) ;

        // sorting
        static bool AscendingByX(Point3D& firstPoint, Point3D& secondPoint);
        static bool AscendingByY(Point3D& firstPoint, Point3D& secondPoint);
        static bool AscendingByZ(Point3D& firstPoint, Point3D& secondPoint);
        static bool DescendingByX(Point3D& firstPoint, Point3D& secondPoint);
        static bool DescendingByY(Point3D& firstPoint, Point3D& secondPoint);
        static bool DescendingByZ(Point3D& firstPoint, Point3D& secondPoint);

	private:
		float mX, mY, mZ;
	};
}

#endif //POINT3D_H
