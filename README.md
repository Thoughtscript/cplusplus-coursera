# cplusplus-coursera

Coures and general C++ notes.

## Contents

* Coursework examples are contained in here.
* General learning samples are too!

## Comments

Some personal C++ notes.

Great resources:

1. [learncpp](https://www.learncpp.com)

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
