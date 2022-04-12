# camel-euclid

getting started -euclid

##how to install
  
```console
git clone https://github.com/PNUxCAMEL/camel-euclid.git
cd camel-euclid
mkdir build
cd build
cmake ..
make
sudo make install
```

##how to include your code

```cpp
//main.cpp
#include <iostream>
#include <camel-euclid/<DIRECTORY>/<HEADER_FILE>>   // ex. #include <camel-euclid/vector/Point3D.h>

...

int main()
{
  CamelVector::Point3D point(1, 2, 3);
  std::cout << point.GetX() << " " << point.GetY() << " " << point.GetZ() << std::endl;
  // result
  // 1 2 3
  ...
}
```
