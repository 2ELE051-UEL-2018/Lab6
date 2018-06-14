#include "aux_test_functions.h"

double normaliza_fase(double fase)
{
	return fmod(fase + 4 * M_PI, 2 * M_PI);
}

bool operator==(const cplxc& a, const cplxc& b)
{
	return fabs(a.real - b.real) < 1e-10 && fabs(a.imag - b.imag) < 1e-10;
}

std::ostream& operator<<(::std::ostream& os, const cplxc& c)
{
	if (c.imag >= 0)
		return os << c.real << " + j*" << c.imag;
	else
		return os << c.real << " - j*" << -c.imag;
}

bool operator==(const cplxp& a, const cplxp& b)
{
	return fabs(a.modulo - b.modulo) < 1e-10 && fabs(normaliza_fase(a.fase - b.fase)) < 1e-10;
}

std::ostream& operator<<(::std::ostream& os, const cplxp& c)
{
	return os << c.modulo << "/_" << c.fase;
}

bool operator==(const struct tm& a, const struct tm& b)
{
	return a.tm_mday == b.tm_mday && a.tm_mon == b.tm_mon && a.tm_year == b.tm_year && a.tm_hour == b.tm_hour && a.tm_min == b.tm_min && a.tm_sec == b.tm_sec;
}

std::ostream& operator<<(::std::ostream& os, const struct tm& c)
{
	char res[128];
	sprintf(res, "%02d/%02d/%02d %02d:%02d:%02d", c.tm_mday, c.tm_mon+1, 1900+c.tm_year, c.tm_hour, c.tm_min, c.tm_sec);
	return os << res;
}
