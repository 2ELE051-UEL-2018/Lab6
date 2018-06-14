#ifndef CPLXC_H
#define CPLXC_H

#define _USE_MATH_DEFINES
#include <math.h>

struct complexoc
{
	double real, imag;
};

typedef struct complexoc cplxc;

cplxc cplxc_init_cartesiano(double real, double imag);
cplxc cplxc_init_polar(double modulo, double fase);
double cplxc_real(cplxc arg);
double cplxc_imag(cplxc arg);
double cplxc_modulo(cplxc arg);
double cplxc_fase(cplxc arg);
cplxc cplxc_conj(cplxc arg);
cplxc cplxc_soma(cplxc arg1, cplxc arg2);
cplxc cplxc_subtracao(cplxc arg1, cplxc arg2);
cplxc cplxc_produto(cplxc arg1, cplxc arg2);
cplxc cplxc_divisao(cplxc arg1, cplxc arg2);
cplxc cplxc_exp(cplxc arg);

#endif // CPLXC_H