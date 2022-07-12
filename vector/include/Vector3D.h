//
// Created by wj on 22. 4. 8..
//

#ifndef CAMEL_EUCLID_VECTOR3D_H
#define CAMEL_EUCLID_VECTOR3D_H

namespace camelVector
{
    class Vector3D
    {
    public:
        Vector3D();
        Vector3D(float x, float y, float z);

        float GetX() const;
        float GetY() const;
        float GetZ() const;

        void SetX(float x);
        void SetY(float y);
        void SetZ(float z);
        void SetXYZ(float x, float y, float z);

        // sorting
        static bool AscendingByX(Vector3D& firstVector, Vector3D& secondVector);
        static bool AscendingByY(Vector3D& firstVector, Vector3D& secondVector);
        static bool AscendingByZ(Vector3D& firstVector, Vector3D& secondVector);
        static bool DescendingByX(Vector3D& firstVector, Vector3D& secondVector);
        static bool DescendingByY(Vector3D& firstVector, Vector3D& secondVector);
        static bool DescendingByZ(Vector3D& firstVector, Vector3D& secondVector);

    private:
        float mX, mY, mZ;
    };
}
#endif //CAMEL_EUCLID_VECTOR3D_H
