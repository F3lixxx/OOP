#include <iostream>
#include <string>

class  domain_error{
public:
     domain_error();

     virtual std::string domain_err(std:: string str);
};