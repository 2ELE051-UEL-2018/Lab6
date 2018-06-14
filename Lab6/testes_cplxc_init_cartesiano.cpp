#include "gtest/gtest.h"
extern "C"
{
#include "cplxc.h"
}
#include "aux_test_functions.h"

TEST(cplxc_init_cartesiano, Init0_0)
{
	cplxc res_esperado = { 0.0, 0.0 };
	ASSERT_EQ(res_esperado, cplxc_init_cartesiano(0.0, 0.0));
}

TEST(cplxc_init_cartesiano, Init0_1)
{
	cplxc res_esperado = { 0.0, 1.0 };
	ASSERT_EQ(res_esperado, cplxc_init_cartesiano(0.0, 1.0));
}

TEST(cplxc_init_cartesiano, Initm1_0)
{
	cplxc res_esperado = { -1.0, 0.0 };
	ASSERT_EQ(res_esperado, cplxc_init_cartesiano(-1.0, 0.0));
}

TEST(cplxc_init_cartesiano, Init13_m37)
{
	cplxc res_esperado = { 13.0, -37.0 };
	ASSERT_EQ(res_esperado, cplxc_init_cartesiano(13.0, -37.0));
}