//
// Created by wj on 22. 4. 8..
//

#ifndef HEIGHTMAP_POINT2D_H
#define HEIGHTMAP_POINT2D_H

namespace CamelVector
{
    class Point2D
    {
    public:
        Point2D();
        Point2D(float x, float y);

        float GetX() const;
        float GetY() const;

        void SetX(const float x);
        void SetY(const float y);

    private:
        float mX, mY;
    };
}

#endif //HEIGHTMAP_POINT2D_H
