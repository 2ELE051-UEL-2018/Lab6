#include "gtest/gtest.h"
extern "C"
{
#include "cplxc.h"
}
#include "aux_test_functions.h"

TEST(cplxc_soma, Arg0_0_Arg0_0)
{
	cplxc arg1 = { 0.0, 0.0 };
	cplxc arg2 = { 0.0, 0.0 };
	cplxc esperado = { 0.0, 0.0 };
	ASSERT_EQ(esperado, cplxc_soma(arg1, arg2));
}

TEST(cplxc_soma, Arg1_0_Arg0_0)
{
	cplxc arg1 = { 1.0, 0.0 };
	cplxc arg2 = { 0.0, 0.0 };
	cplxc esperado = { 1.0, 0.0 };
	ASSERT_EQ(esperado, cplxc_soma(arg1, arg2));
}

TEST(cplxc_soma, Arg0_0_Arg1_0)
{
	cplxc arg1 = { 0.0, 0.0 };
	cplxc arg2 = { 1.0, 0.0 };
	cplxc esperado = { 1.0, 0.0 };
	ASSERT_EQ(esperado, cplxc_soma(arg1, arg2));
}

TEST(cplxc_soma, Arg1_0_Arg1_0)
{
	cplxc arg1 = { 1.0, 0.0 };
	cplxc arg2 = { 1.0, 0.0 };
	cplxc esperado = { 2.0, 0.0 };
	ASSERT_EQ(esperado, cplxc_soma(arg1, arg2));
}

TEST(cplxc_soma, Arg1_0_Argm1_0)
{
	cplxc arg1 = { 1.0, 0.0 };
	cplxc arg2 = { -1.0, 0.0 };
	cplxc esperado = { 0.0, 0.0 };
	ASSERT_EQ(esperado, cplxc_soma(arg1, arg2));
}

TEST(cplxc_soma, Arg1_2_Arg3_4)
{
	cplxc arg1 = { 1.0, 2.0 };
	cplxc arg2 = { 3.0, 4.0 };
	cplxc esperado = { 4.0, 6.0 };
	ASSERT_EQ(esperado, cplxc_soma(arg1, arg2));
}

TEST(cplxc_soma, Arg5_m3_Argm7_4)
{
	cplxc arg1 = {  5.0, -3.0 };
	cplxc arg2 = { -7.0,  4.0 };
	cplxc esperado = { -2.0, 1.0 };
	ASSERT_EQ(esperado, cplxc_soma(arg1, arg2));
}

TEST(cplxc_soma, Arg1_5_2_5_Arg3_0_4_0)
{
	cplxc arg1 = { 1.5, 2.5 };
	cplxc arg2 = { 3.0, 4.0 };
	cplxc esperado = { 4.5, 6.5 };
	ASSERT_EQ(esperado, cplxc_soma(arg1, arg2));
}
