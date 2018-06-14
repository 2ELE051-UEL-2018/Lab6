#include "gtest/gtest.h"
extern "C"
{
#include "cplxc.h"
}
#include "aux_test_functions.h"

TEST(cplxc_produto, Arg0_0_Arg0_0)
{
	cplxc arg1 = { 0.0, 0.0 };
	cplxc arg2 = { 0.0, 0.0 };
	cplxc esperado = { 0.0, 0.0 };
	ASSERT_EQ(esperado, cplxc_produto(arg1, arg2));
}

TEST(cplxc_produto, Arg1_0_Arg1_0)
{
	cplxc arg1 = { 1.0, 0.0 };
	cplxc arg2 = { 1.0, 0.0 };
	cplxc esperado = { 1.0, 0.0 };
	ASSERT_EQ(esperado, cplxc_produto(arg1, arg2));
}

TEST(cplxc_produto, Arg2_0_Arg1_0)
{
	cplxc arg1 = { 2.0, 0.0 };
	cplxc arg2 = { 1.0, 0.0 };
	cplxc esperado = { 2.0, 0.0 };
	ASSERT_EQ(esperado, cplxc_produto(arg1, arg2));
}

TEST(cplxc_produto, Arg1_0_Arg2_0)
{
	cplxc arg1 = { 1.0, 0.0 };
	cplxc arg2 = { 2.0, 0.0 };
	cplxc esperado = { 2.0, 0.0 };
	ASSERT_EQ(esperado, cplxc_produto(arg1, arg2));
}

TEST(cplxc_produto, Arg0_1_Arg1_0)
{
	cplxc arg1 = { 0.0, 1.0 };
	cplxc arg2 = { 1.0, 0.0 };
	cplxc esperado = { 0.0, 1.0 };
	ASSERT_EQ(esperado, cplxc_produto(arg1, arg2));
}

TEST(cplxc_produto, Arg1_0_Arg0_1)
{
	cplxc arg1 = { 1.0, 0.0 };
	cplxc arg2 = { 0.0, 1.0 };
	cplxc esperado = { 0.0, 1.0 };
	ASSERT_EQ(esperado, cplxc_produto(arg1, arg2));
}

TEST(cplxc_produto, Arg0_1_Arg0_1)
{
	cplxc arg1 = { 0.0, 1.0 };
	cplxc arg2 = { 0.0, 1.0 };
	cplxc esperado = { -1.0, 0.0 };
	ASSERT_EQ(esperado, cplxc_produto(arg1, arg2));
}

TEST(cplxc_produto, Arg1_1_Arg1_1)
{
	cplxc arg1 = { 1.0, 1.0 };
	cplxc arg2 = { 1.0, 1.0 };
	cplxc esperado = { 0.0, 2.0 };
	ASSERT_EQ(esperado, cplxc_produto(arg1, arg2));
}

TEST(cplxc_produto, Arg1_m1_Arg1_m1)
{
	cplxc arg1 = { 1.0, -1.0 };
	cplxc arg2 = { 1.0, -1.0 };
	cplxc esperado = { 0.0, -2.0 };
	ASSERT_EQ(esperado, cplxc_produto(arg1, arg2));
}

TEST(cplxc_produto, Argm1_1_Argm1_1)
{
	cplxc arg1 = { -1.0, 1.0 };
	cplxc arg2 = { -1.0, 1.0 };
	cplxc esperado = { 0.0, -2.0 };
	ASSERT_EQ(esperado, cplxc_produto(arg1, arg2));
}

TEST(cplxc_produto, Argm1_m1_Argm1_m1)
{
	cplxc arg1 = { -1.0, -1.0 };
	cplxc arg2 = { -1.0, -1.0 };
	cplxc esperado = { 0.0, 2.0 };
	ASSERT_EQ(esperado, cplxc_produto(arg1, arg2));
}

TEST(cplxc_produto, Argm1_2_Arg3_m4)
{
	cplxc arg1 = { -1.0,  2.0 };
	cplxc arg2 = {  3.0, -4.0 };
	cplxc esperado = { 5.0, 10.0 };
	ASSERT_EQ(esperado, cplxc_produto(arg1, arg2));
}

TEST(cplxc_produto, Argm1_5_m2_5_Argm3_5_m4_5)
{
	cplxc arg1 = { -1.5, -2.5 };
	cplxc arg2 = { -3.5, -4.5 };
	cplxc esperado = { -6.0, 15.5 };
	ASSERT_EQ(esperado, cplxc_produto(arg1, arg2));
}