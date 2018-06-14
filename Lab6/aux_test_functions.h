#ifndef AUX_TEST_FUNCTIONS_H
#define AUX_TEST_FUNCTIONS_H

#include <iostream>
#include <ctime>
extern "C"
{
#include "cplxc.h"
#include "cplxp.h"
}

double normaliza_fase(double fase);

bool operator==(const cplxc& a, const cplxc& b);
std::ostream& operator<<(::std::ostream& os, const cplxc& c);

bool operator==(const cplxp& a, const cplxp& b);
std::ostream& operator<<(::std::ostream& os, const cplxp& c);

bool operator==(const struct tm& a, const struct tm& b);
std::ostream& operator<<(::std::ostream& os, const struct tm& c);

#endif // AUX_TEST_FUNCTIONS_H
