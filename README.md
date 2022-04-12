# camel-euclid

getting started -euclid

##how to install
  
```console
camel@camel:~$ git clone https://github.com/PNUxCAMEL/camel-euclid.git
camel@camel:~$ cd camel-euclid
camel@camel:~$ mkdir build
camel@camel:~$ cd build
camel@camel:~$ cmake ..
camel@camel:~$ make
camel@camel:~$ sudo make install
```

##how to include your code

```cpp
//main.cpp
#include <iostream>
#include <camel-euclid/<HEADER_FILE>>   // ex. #include <camel-euclid/Point3D.h>

...

int main()
{
  camelmath::Point3D point(1, 2, 3);
  std::cout << point.GetX() << " " << point.GetY() << " " << point.GetZ() << std::endl;
  // result
  // 1 2 3
}
```
