# cplusplus-coursera

Personal course and general C++ notes for [Coursera - UI UC: Object-Oriented Data Structures in C++](https://www.coursera.org/learn/cs-fundamentals-1/home/).

> [Official course repository](https://github.com/wadefagen/coursera)

## Contents

Some personal C++ notes:

* Coursework examples are contained in here.
* General learning samples are too!
* Experimenting with syntax and file structures.

## Use

C++ version used:

```Bash
$ gcc --version
Configured with: --prefix=/Applications/Xcode.app/Contents/Developer/usr --with-gxx-include-dir=/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/c++/4.2.1
Apple clang version 11.0.0 (clang-1100.0.33.16)
Target: x86_64-apple-darwin19.4.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin
```

CMake version:

```Bash
$ cmake --version
cmake version 3.16.6

CMake suite maintained and supported by Kitware (kitware.com/cmake).
```

### Files and OOD

There are no interfaces or abstract classes in C++. Consider:

 - `filename.h` a class definition that’s pre-compiled (since it's not likely to change).
 - `filename.cpp` the implementation of that class definition (with full method definitions/implementations).

`::` is the scope **resolution operator** and defines the implemented methods of the class definition. 

`:` is the subclassing operator (equivalent of extends in Java). 

### Garbage Collection

* No automatic garbage collection (like in Java) - variables are not removed from memory automatically.
* Null out variables when done.

### Pointers and References

```c++
int num = 0;
```

* ***Variables*** hold ***values***.
* ***Reference operator*** gets the ***address*** from a ***variable*** holding a ***value***.

```c++
&num //address of value of num
```

* ***Pointer variables*** hold (the) ***addresses*** (of ***values***).

```c++
int* pointer_num = &num; //address of value of num
```

* ***Dereferencing*** returns the ***value*** of the ***address*** stored in a ***pointer variable***.

```c++
*pointer_num; //0 
```

* **Tip:** think of `**` as being the same as no `*` (the two cancel out) - akin to double-negation elimination.

### Console Out

```c++
cout << “hello world”;
```

### Access modifiers

Can be declared in classes (for encapsulated class fields) using the following:

```c++
public:
//declarations here
```

## Comments

Great resources:

1. [Official course repository](https://github.com/wadefagen/coursera)
1. [learncpp](https://www.learncpp.com)
1. [cppreference](https://en.cppreference.com/w/cpp/language/try_catch)