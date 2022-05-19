# 1. Basics
    1. C++ is a compiled language
    2. Source test has to be processed by an compiler and it produces object files, which are combined by a linker yeilding an executable program
    3. Source files ---> Compile ---> Object files ---> link ---> Executable file
    4. The executable file is created for specific hardware/system it is not portable(From windows to mac)
    5. The ISO C++ standard features defines two kind of entities:
        * Core language features such as built-in types (char and int)
        * Standard-library components such as containers(vector and map)
    6. C++ is statically typed language that is, the type of every entity(object, value, name, and expression) must be known to the compiler at its point of use.

# 1.1 Hello, World!
    int main(){} //the minimal C++ program 
    1. This defines a function called main which takes no arguements and does nothing
    2. Curly braces {} express grouping in C++. Here they indicate the start and end of the function
    3. The double slash // begins a comment that extends to the end of the line it is ignored by compiler
    4. Every C++ program must have exactly one global function named main() The program starts by executaing the function.
    5. The int value returned by main() if no value returned the system will receive a value indicating successful completion. If a nonzero value form main() indicates failure.

   # Hello World Program
        #include <iostream>
        int main()
        {
            std::cout<<"Hello, World!\n";
        }
    6. The line #include <iostream> instructs the compiler to include the declarations of the standard stream I/O facilities that are found in iostream.
    7. The operator <<(put to) writes its second arguement onto its first. 
    8. \n is the newline character
    9. The std:: specifies that the name cout is to be found in the standard library namespace
    10. A return type void indicates that a function does not return a value

# 1.2 Types, Variables, and Arithmetic
   # Types
    1. Every name and every expression has a type that determines the operations that may be performed on it For example the Declaration
        int inch;
    2. Specifies that inch is of int type that is inch is a interger variable.
    4. A declaration is a statement that introduces a name into the program It specifies a type for the named entity
    5. A type defines a set of possible values and a set of operations(for an object)
    6. An object is some memory that holds a value of some type
    7. A value is a set of bits interpreted according to a type
    8. A variable is a named object

    C++ offers a variety of fundamental types for example
    1. bool //Boolean, possible values are true and false or 0 and 1
    2. char //character for example 'r', 'y' and 'h'
    3. int //integer, for example 1, 42, and 1086
    4. double //double-precision floating point number for example 3.14 and 2999798.0

    Each fundamental type corresponds directly to hardware facilities and has a fixed size that determines the range of values that can be stored in it:

                    bool  : |____|
                    char  : |____|
                    int   : |____|____|____|____|
                    double: |____|____|____|____|____|____|____|____|

    9. A char variable is of the natural size to hold a character on a give machine(8 bit or 1 byte)
    10. The size of a type is implementation-defined and can be obtained by the sizeof operator for example sizeof(char) gives 1 and sizeof(int) gives 4

   # Arithmetic operators
            x+y  //plus
            +x   //unary plus
            x-y  //minus
            -x   //unary minus
            x*y  //multiply
            x/y  //divide
            x%y  //remainder(modulas) for integers

   # Comparision operators
            x==y //equal
            x!=y //not equal
            x<y  //less than
            x>y  //greater than
            x<=y //less than or equal to
            x>=y //greater than or equal to
            x+=y //x = x+y
            ++x  //increment x = x+1
            x-=y //x = x-y
            --x  //decrement x = x-1
            x*=y //scaling x = x*y
            x/=y //scaling x = x/y
            x%=y // x = x%y

    11. = it is a assignment operator and == test equality
    12. {} it saves us from conversion of data types 
            int i = 7.2;  //i has 7
            int i = {7.2} //error float to int conversion
    13. A constant cannot be left uninitialized and a variable should be left uninitialized in extremely rare circumstances.
    14. When defining a variable you don't actually need to state its types explicitly when it can be deduced from the initializer
            auto b = true;      //bool
            auto ch = 'x';      //char
            auto i = 123;       //int
            auto d = 1.2;       //double
            auto z = sqrt(y);   //z has the type of whatever sqrt(y) returns
    15. We use auto where we don't have a specific reason to mention the type explicitly "Specific reasons include":
            1. The definitaion is in a large scope where we want to make the type clearly visible ot readers of our code
            2. We want to be explicit about a variable's range or precision 
    16. Using auto we avoid redundancy and writing long type names

# 1.3 Constants
# const
    1. If we declare a variable using const the value in the variable will not change
    2. Evaluated at run time
# constexpr
    1. Evaluated at compile time
    2. This is used primarily to specify constants to allow placement of date in memory where it is unlikely to be corupted and for performance

# Example
        const int dmv = 17;                             //dmv is a named constant
        int var = 17;                                   // var is not a constant
        constexpr double max1 = 1.4*square(dmv);        //dmv is constant so no problem
        constexpr double max2 = 1.4*square(var);        //var is not a constant compilation error
        const double max3 = 1.4*square(var);            //var is not a constant but it will be evaluated in runtime
        double sum(const vector<double>&);              //sum will not modify its arguement
        vector<double> v {1.2, 3.4, 4.5};               //v is not a constant
        const double s1 = sum(v);                       //v is not a constant evaluated at run time 
        constexpr double s2 = sum(v);                   //v is not a constant compilation error
    
    1. For a function to be usable in a constant expression that is in an expression that will be evaluated by the compiler it must be defined constexpr 
    	constexpr double square(double x){return x*x;}
    2. To be constexpr a function must be rather simple just return-statement computing a value
    3. A constexpr function can be used for non-constant arguements but when that is done the result is not a constant expression 

