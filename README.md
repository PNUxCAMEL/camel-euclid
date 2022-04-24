# camel-euclid

getting started -euclid

## how to install
  
```bash
git clone https://github.com/PNUxCAMEL/camel-euclid.git
cd camel-euclid
mkdir build
cd build
cmake ..
make
sudo make install
```

## how to include your code

```cmake
// CMakeLists.txt in your project file
cmake_minimum_required(<VERSION>)   # over 3.1.0 version
project(<PROJECT_NAME>)

set(CMAKE_CXX_STANDARD 14)

find_package(camel-euclid REQUIRED)

add_executable(<PROJECT_NAME> main.cpp)

target_link_libraries(<PROJECT_NAME> camel-euclid-vector)
```

```cpp
//main.cpp
#include <iostream>
#include <camel-euclid/Vector.h>   

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
