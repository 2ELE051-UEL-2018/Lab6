#include "gtest/gtest.h"
extern "C"
{
#include "cplxc.h"
}
#include "aux_test_functions.h"

TEST(cplxc_conj, Arg0_0)
{
	cplxc arg = { 0.0, 0.0 };
	cplxc esperado = { 0.0, 0.0 };
	ASSERT_EQ(esperado, cplxc_conj(arg));
}

TEST(cplxc_conj, Arg1_0)
{
	cplxc arg = { 1.0, 0.0 };
	cplxc esperado = { 1.0, 0.0 };
	ASSERT_EQ(esperado, cplxc_conj(arg));
}

TEST(cplxc_conj, Arg0_2)
{
	cplxc arg = { 0.0, 2.0 };
	cplxc esperado = { 0.0, -2.0 };
	ASSERT_EQ(esperado, cplxc_conj(arg));
}

TEST(cplxc_conj, Arg1_5_2_5)
{
	cplxc arg = { 1.5, 2.5 };
	cplxc esperado = { 1.5, -2.5 };
	ASSERT_EQ(esperado, cplxc_conj(arg));
}