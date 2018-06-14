#include "gtest/gtest.h"
extern "C"
{
#include "cplxc.h"
}
#include "aux_test_functions.h"

TEST(cplxc_subtracao, Arg0_0_Arg0_0)
{
	cplxc arg1 = { 0.0, 0.0 };
	cplxc arg2 = { 0.0, 0.0 };
	cplxc esperado = { 0.0, 0.0 };
	ASSERT_EQ(esperado, cplxc_subtracao(arg1, arg2));
}

TEST(cplxc_subtracao, Arg1_0_Arg0_0)
{
	cplxc arg1 = { 1.0, 0.0 };
	cplxc arg2 = { 0.0, 0.0 };
	cplxc esperado = { 1.0, 0.0 };
	ASSERT_EQ(esperado, cplxc_subtracao(arg1, arg2));
}

TEST(cplxc_subtracao, Arg0_0_Arg1_0)
{
	cplxc arg1 = { 0.0, 0.0 };
	cplxc arg2 = { 1.0, 0.0 };
	cplxc esperado = { -1.0, 0.0 };
	ASSERT_EQ(esperado, cplxc_subtracao(arg1, arg2));
}

TEST(cplxc_subtracao, Arg1_0_Arg1_0)
{
	cplxc arg1 = { 1.0, 0.0 };
	cplxc arg2 = { 1.0, 0.0 };
	cplxc esperado = { 0.0, 0.0 };
	ASSERT_EQ(esperado, cplxc_subtracao(arg1, arg2));
}

TEST(cplxc_subtracao, Arg0_1_Arg0_0)
{
	cplxc arg1 = { 0.0, 1.0 };
	cplxc arg2 = { 0.0, 0.0 };
	cplxc esperado = { 0.0, 1.0 };
	ASSERT_EQ(esperado, cplxc_subtracao(arg1, arg2));
}

TEST(cplxc_subtracao, Arg0_0_Arg0_1)
{
	cplxc arg1 = { 0.0, 0.0 };
	cplxc arg2 = { 0.0, 1.0 };
	cplxc esperado = { 0.0, -1.0 };
	ASSERT_EQ(esperado, cplxc_subtracao(arg1, arg2));
}

TEST(cplxc_subtracao, Arg0_1_Arg0_1)
{
	cplxc arg1 = { 0.0, 1.0 };
	cplxc arg2 = { 0.0, 1.0 };
	cplxc esperado = { 0.0, 0.0 };
	ASSERT_EQ(esperado, cplxc_subtracao(arg1, arg2));
}

TEST(cplxc_subtracao, Arg3_4_Arg1_2)
{
	cplxc arg1 = { 3.0, 4.0 };
	cplxc arg2 = { 1.0, 2.0 };
	cplxc esperado = { 2.0, 2.0 };
	ASSERT_EQ(esperado, cplxc_subtracao(arg1, arg2));
}

TEST(cplxc_subtracao, Argm2_4_Argm4_2)
{
	cplxc arg1 = { -2.0, 4.0 };
	cplxc arg2 = { -4.0, 2.0 };
	cplxc esperado = { 2.0, 2.0 };
	ASSERT_EQ(esperado, cplxc_subtracao(arg1, arg2));
}

TEST(cplxc_subtracao, Argm2_5_4_5_Arg1_3)
{
	cplxc arg1 = { 2.5, 4.5 };
	cplxc arg2 = { 1.0, 3.0 };
	cplxc esperado = { 1.5, 1.5 };
	ASSERT_EQ(esperado, cplxc_subtracao(arg1, arg2));
}