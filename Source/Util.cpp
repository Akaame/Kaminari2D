#include "../Headers/Util.h"

void Util::fatal_error(std::string error_message)
{
    std::cout << "Fatal Error" <<error_message << std::endl;
    exit(255);
}

void Util::null_check(void* target_pointer, std::string _error_message)
{
    if(target_pointer==NULL){
        fatal_error(_error_message);
    }
}