//
// Created by wj on 22. 4. 8..
//

#ifndef HEIGHTMAP_POINT3D_H
#define HEIGHTMAP_POINT3D_H

namespace CamelVector
{
    class Vector3D
    {
    public:
        Vector3D();
        Vector3D(float x, float y, float z);

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
