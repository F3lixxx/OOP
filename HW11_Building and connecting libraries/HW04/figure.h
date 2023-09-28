#include <iostream>
#include <string>

#pragma once

#ifdef MATHPOWERLIBRARYDYNAMIC_EXPORTS
#define MATHPOWERLIBRARY_API __declspec(dllexport)
#else
#define MATHPOWERLIBRARY_API __declspec(dllimport)
#endif

class Figure {
protected:
    std::string name_figure;
    int sides_;
public:
    Figure();

    MATHPOWERLIBRARY_API void print_info();

    MATHPOWERLIBRARY_API virtual std::string domain_error();
};