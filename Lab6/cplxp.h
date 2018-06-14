#ifndef CPLXP_H
#define CPLXP_H

#define _USE_MATH_DEFINES
#include <math.h>

struct complexop
{
	double modulo, fase;
};

typedef struct complexop cplxp;

cplxp cplxp_init_cartesiano(double real, double imag);
cplxp cplxp_init_polar(double modulo, double fase);
double cplxp_real(cplxp arg);
double cplxp_imag(cplxp arg);
double cplxp_modulo(cplxp arg);
double cplxp_fase(cplxp arg);
cplxp cplxp_conj(cplxp arg);
cplxp cplxp_soma(cplxp arg1, cplxp arg2);
cplxp cplxp_subtracao(cplxp arg1, cplxp arg2);
cplxp cplxp_produto(cplxp arg1, cplxp arg2);
cplxp cplxp_divisao(cplxp arg1, cplxp arg2);
cplxp cplxp_exp(cplxp arg);

#endif // CPLXC_H