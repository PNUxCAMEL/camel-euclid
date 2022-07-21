//
// Created by wj on 22. 4. 8..
//

#ifndef CAMEL_EUCLID_VECTOR2D_H
#define CAMEL_EUCLID_VECTOR2D_H

namespace camelVector
{
    class Vector2D
    {
    public:
        Vector2D();
        Vector2D(float x, float y);

        float GetX() const;
        float GetY() const;

        void SetX(float x);
        void SetY(float y);

        // sorting
        static bool AscendingByX(Vector2D& firstVector, Vector2D& secondVector);
        static bool AscendingByY(Vector2D& firstVector, Vector2D& secondVector);
        static bool DescendingByX(Vector2D& firstVector, Vector2D& secondVector);
        static bool DescendingByY(Vector2D& firstVector, Vector2D& secondVector);

    private:
        float mX, mY;
    };
}

#endif //CAMEL_EUCLID_VECTOR2D_H
