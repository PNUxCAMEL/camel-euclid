//
// Created by wj on 22. 4. 8..
//

#ifndef CAMEL_EUCLID_VECTOR3D_HPP
#define CAMEL_EUCLID_VECTOR3D_HPP

#include <cmath>
#include <iostream>

namespace camelVector
{
    class Vector3D
    {
    public:
        Vector3D();
        Vector3D(float x, float y, float z);
        Vector3D(float data[3]);

        float GetX() const;
        float GetY() const;
        float GetZ() const;
        float GetByIndex(int index) const;

        void SetX(float x);
        void SetY(float y);
        void SetZ(float z);
        void SetXYZ(float x, float y, float z);

        void operator-=(const Vector3D& other);
        void operator/=(float val);

        // sorting
        static bool AscendingByX(Vector3D& firstVector, Vector3D& secondVector);
        static bool AscendingByY(Vector3D& firstVector, Vector3D& secondVector);
        static bool AscendingByZ(Vector3D& firstVector, Vector3D& secondVector);
        static bool DescendingByX(Vector3D& firstVector, Vector3D& secondVector);
        static bool DescendingByY(Vector3D& firstVector, Vector3D& secondVector);
        static bool DescendingByZ(Vector3D& firstVector, Vector3D& secondVector);

        void Cout() const;
        bool bIsEqual(const Vector3D& other) const;

        float Norm(const Vector3D& other) const;
        float Dot(const Vector3D& other) const;

    private:
        float mX;
        float mY;
        float mZ;
    };
}
#endif //CAMEL_EUCLID_VECTOR3D_HPP
