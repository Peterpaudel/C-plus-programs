Here are some of the programm in C++ that will be helpful for clearing your OOP concepts topicwise.

# 5. Inheritance
# 6. Virtual function,polymorphism and miscellaneous C++ features
# 7. Function Templates and Exception handling
* Function templates  
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
* |[Sample program that show template function](https://github.com/Utshav-paudel/C-plus-programs/blob/b97e6a3f566ebc1bb00dc1facd9304f96c1e4984/code/Function%20template%20and%20Exception%20handling/Templates/function_temp.cpp)|
|----------------------------------------------------------------------|
