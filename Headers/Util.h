
#include <string>
#include <iostream>
class Util
{
    public:
    Util(){}
    ~Util(){}
    static void fatal_error(std::string);
    static void null_check(void*, std::string);
};