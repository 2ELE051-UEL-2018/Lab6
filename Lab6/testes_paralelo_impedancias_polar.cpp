#include "gtest/gtest.h"
extern "C"
{
#include "cplxp.h"
}
#include "aux_test_functions.h"

extern "C"
{
	cplxp paralelo_impedancias_polar();
}

TEST(paralelo_impedancias_polar, TesteUnico)
{
	cplxp esperado = { 0.835362508584170, 0.893713700174221 };
	ASSERT_EQ(esperado, paralelo_impedancias_polar());
}