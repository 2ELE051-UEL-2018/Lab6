#include "gtest/gtest.h"
extern "C"
{
#include "cplxc.h"
}
#include "aux_test_functions.h"

TEST(cplxc_divisao, Arg1_0_Arg1_0)
{
	cplxc arg1 = { 1.0, 0.0 };
	cplxc arg2 = { 1.0, 0.0 };
	cplxc esperado = { 1.0, 0.0 };
	ASSERT_EQ(esperado, cplxc_divisao(arg1, arg2));
}

TEST(cplxc_divisao, Arg2_0_Arg1_0)
{
	cplxc arg1 = { 2.0, 0.0 };
	cplxc arg2 = { 1.0, 0.0 };
	cplxc esperado = { 2.0, 0.0 };
	ASSERT_EQ(esperado, cplxc_divisao(arg1, arg2));
}

TEST(cplxc_divisao, Arg1_0_Arg2_0)
{
	cplxc arg1 = { 1.0, 0.0 };
	cplxc arg2 = { 2.0, 0.0 };
	cplxc esperado = { 0.5, 0.0 };
	ASSERT_EQ(esperado, cplxc_divisao(arg1, arg2));
}

TEST(cplxc_divisao, Arg0_1_Arg1_0)
{
	cplxc arg1 = { 0.0, 1.0 };
	cplxc arg2 = { 1.0, 0.0 };
	cplxc esperado = { 0.0, 1.0 };
	ASSERT_EQ(esperado, cplxc_divisao(arg1, arg2));
}

TEST(cplxc_divisao, Arg0_1_Arg0_1)
{
	cplxc arg1 = { 0.0, 1.0 };
	cplxc arg2 = { 0.0, 1.0 };
	cplxc esperado = { 1.0, 0.0 };
	ASSERT_EQ(esperado, cplxc_divisao(arg1, arg2));
}

TEST(cplxc_divisao, Arg1_0_Arg0_1)
{
	cplxc arg1 = { 1.0, 0.0 };
	cplxc arg2 = { 0.0, 1.0 };
	cplxc esperado = { 0.0, -1.0 };
	ASSERT_EQ(esperado, cplxc_divisao(arg1, arg2));
}

TEST(cplxc_divisao, Arg1_1_Arg2_1)
{
	cplxc arg1 = { 1.0, -1.0 };
	cplxc arg2 = { 2.0, -1.0 };
	cplxc esperado = { 0.6, -0.2 };
	ASSERT_EQ(esperado, cplxc_divisao(arg1, arg2));
}
