//
// Created by wj on 22. 4. 8..
//

#ifndef CAMEL_EUCLID_VECTOR2D_H
#define CAMEL_EUCLID_VECTOR2D_H

#include <cmath>
#include <iostream>

namespace camelvector
{
    class Vector2D
    {
    public:
        Vector2D();
        Vector2D(float x, float y);
        Vector2D(float data[2]);

        float GetX() const;
        float GetY() const;
        float GetByIndex(int index) const;

        void SetX(float x);
        void SetY(float y);

        // sorting
        static bool AscendingByX(Vector2D& firstVector, Vector2D& secondVector);
        static bool AscendingByY(Vector2D& firstVector, Vector2D& secondVector);
        static bool DescendingByX(Vector2D& firstVector, Vector2D& secondVector);
        static bool DescendingByY(Vector2D& firstVector, Vector2D& secondVector);

        void Cout() const;
        bool bIsEqual(const Vector2D& other) const;

        float Norm(const Vector2D& other) const;
        float Dot(const Vector2D& other) const;

    private:
        float mX;
        float mY;
    };
}

#endif //CAMEL_EUCLID_VECTOR2D_H
