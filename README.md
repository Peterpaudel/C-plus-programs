Here are some of the programm in C++ that will be helpful for clearing your OOP concepts topicwise.

# 5. Inheritance
* [constructor in inheritance](https://github.com/Utshav-paudel/C-plus-programs/blob/43c9d4ce41b819ed2af3f3a29bf9dc9d7479a3cc/code/inheritance%20program/constuctor%20in%20inheritance.cpp)
* [destructor in inheritance ](https://github.com/Utshav-paudel/C-plus-programs/blob/be7a47fb8cd326f62748bbbc7faf9fc09c2cdd12/code/inheritance%20program/destructor%20in%20inheritance.cpp)
* [ambguity in multiple inheritance](https://github.com/Utshav-paudel/C-plus-programs/blob/be7a47fb8cd326f62748bbbc7faf9fc09c2cdd12/code/inheritance%20program/ambguity%20in%20multipath.cpp)
# 6. Virtual function,polymorphism and miscellaneous C++ features
# 7. Function Templates and Exception handling
### Function templates  
Function template is a way to make your function generalizes as far as data type is concern.
It is made to avoid function overloading with only data type difference.  
Syntax:  
```c++
template<class type>
type func_name(type arg1,...,);
```
Note:
Type is a placeholder that get replace by data type of argument you passed on it.  
If you have argument with two different data types you can simply create two difference place holder as example:  
Syntax:  
```c++  
template<class type1,class type2>
type func_name(type1 arg1, type2 arg2);
```
* [Sample program that show template function](https://github.com/Utshav-paudel/C-plus-programs/blob/b97e6a3f566ebc1bb00dc1facd9304f96c1e4984/code/Function%20template%20and%20Exception%20handling/Templates/function_temp.cpp)
* [write a program to create a template class for stack implementation ](https://github.com/Utshav-paudel/C-plus-programs/blob/975b6c22ec67ddfeca1c81d16e30dc3a641ac0bf/code/Function%20template%20and%20Exception%20handling/Templates/template%20of%20stack.cpp)

### Exception Handling  
Exception are off beat situations in your program where your program should be ready to handle it with appropriate response. C++ provides built in error handling mehcanism that is called exception handling.  

Syntax:  
```C++
try{//throw statement here}
catch(type1 arg){}
catch(type2 arg){}
```
Note: datatype in throw and catch argument should be same otherwise it will throw error,also argument in catch is optional.  
* [sample program for exception handling](https://github.com/Utshav-paudel/C-plus-programs/blob/5ef5967083e233908b055e89266a256d5843031d/code/Function%20template%20and%20Exception%20handling/exception%20handling/sample_program_exception_handling.cpp)
* [wap to catch any type of exception](https://github.com/Utshav-paudel/C-plus-programs/blob/5ef5967083e233908b055e89266a256d5843031d/code/Function%20template%20and%20Exception%20handling/exception%20handling/wap%20to%20catch%20any%20type%20of%20exception.cpp)
* [wap to show multiple exception handling i.e(one try statement and multiple catch statement)](https://github.com/Utshav-paudel/C-plus-programs/blob/7827ac65c92afc5d488d9b63928e940f6578691a/code/Function%20template%20and%20Exception%20handling/exception%20handling/using%20multiple%20catch%20statement.cpp)
# 8.File Handling
* [some program related to file handling](https://github.com/Utshav-paudel/C-plus-programs/tree/5ed9bab770d2b478a7ec18fe47ca9cff747debb9/code/file%20handling)
