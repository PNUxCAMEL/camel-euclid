//
// Created by wj on 22. 4. 8..
//

#ifndef CAMEL_EUCLID_VECTOR2D_H
#define CAMEL_EUCLID_VECTOR2D_H

namespace CamelVector
{
    class Vector2D
    {
    public:
        Vector2D();
        Vector2D(float x, float y);

        float GetX() const;
        float GetY() const;

        void SetX(const float x);
        void SetY(const float y);

    private:
        float mX, mY;
    };
}

#endif //CAMEL_EUCLID_VECTOR2D_H
