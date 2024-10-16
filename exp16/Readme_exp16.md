# AIM
To learn about exception handling in c++.

# Problem Statement

1.) Write a c++ program to get a customized error for entering a negative number.

2.) Write a c++ program to get a customized error for entering a year less than 2000.

# Theory

In C++, exceptions are runtime anomalies or abnormal conditions that a program encounters during its execution. The process of handling these exceptions is called exception handling. Using the exception handling mechanism, the control from one part of the program where the exception occurred can be transferred to another part of the code.

1. try in C++
The try keyword represents a block of code that may throw an exception placed inside the try block. It’s followed by one or more catch blocks. If an exception occurs, try block throws that exception.

2. catch in C++
The catch statement represents a block of code that is executed when a particular exception is thrown from the try block. The code to handle the exception is written inside the catch block.

3. throw in C++
An exception in C++ can be thrown using the throw keyword. When a program encounters a throw statement, then it immediately terminates the current function and starts finding a matching catch block to handle the thrown exception.

Note: Multiple catch statements can be used to catch different type of exceptions thrown by try block.



So basically using exception handling in C++, we can handle the exceptions so that our program keeps running.

### Output Images

- **Exp16a**

![alt text](output_Exp16a.png)

- **Exp16b**

![alt text](output_Exp16b.png)

- **Exp16c**

![alt text](output_Exp16c.png)

# Conclusion

We learnt to use exception handling in c++.