//
// Created by wj on 22. 4. 30.
//

#ifndef POINT3D_H
#define POINT3D_H

#include <cmath>
#include <iostream>

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
        float GetByIndex(int index) const;

        void SetX(float x);
        void SetY(float y);
        void SetZ(float z);
        void SetXYZ(float x, float y, float z);

        // sorting
        static bool AscendingByX(Point3D& firstPoint, Point3D& secondPoint);
        static bool AscendingByY(Point3D& firstPoint, Point3D& secondPoint);
        static bool AscendingByZ(Point3D& firstPoint, Point3D& secondPoint);
        static bool DescendingByX(Point3D& firstPoint, Point3D& secondPoint);
        static bool DescendingByY(Point3D& firstPoint, Point3D& secondPoint);
        static bool DescendingByZ(Point3D& firstPoint, Point3D& secondPoint);

        bool bIsEqual(const Point3D& other) const;

        float DistanceBetweenOther(const Point3D& other) const;
        float DistanceBetweenOtherXZ(const Point3D& other) const;
        float Dot(const Point3D& other) const;
        void Normalize(const Point3D& other, Point3D& result) const;

    private:
        float mX;
        float mY;
        float mZ;
    };
}

#endif //POINT3D_H
