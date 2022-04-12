//
// Created by wj on 22. 4. 8..
//

#ifndef HEIGHTMAP_POINT3D_H
#define HEIGHTMAP_POINT3D_H

namespace camelmath
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

    private:
        float mX, mY, mZ;
    };
}
#endif //HEIGHTMAP_POINT3D_H
