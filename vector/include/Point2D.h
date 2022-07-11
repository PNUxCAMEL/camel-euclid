//
// Created by wj on 22. 4. 30.
//

#ifndef POINT2D_H
#define POINT2D_H

namespace camelVector
{
	class Point2D
	{
	public:
		Point2D();
		Point2D(float x, float z);

		float GetX() const;
		float GetZ() const;

		void SetX(const float x);
		void SetZ(const float z);

	private:
		float mX, mZ;
	};
}

#endif //POINT2D_H
