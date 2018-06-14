#include "gtest/gtest.h"
extern "C"
{
#include "cplxc.h"
}
#include "aux_test_functions.h"

extern "C"
{
	cplxc paralelo_impedancias_cart();
}

TEST(paralelo_impedancias_cart, TesteUnico)
{
	cplxc esperado = { 0.523372890561028, 0.651084739625981 };
	ASSERT_EQ(esperado, paralelo_impedancias_cart());
}