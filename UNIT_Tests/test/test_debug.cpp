/*
 * test_factorial.cpp
 *
 *  Created on: 11 Jul 2018
 *      Author: comleyj
 */

//test_factorial.cpp
# include "gtest/gtest.h"
//# include "helper_macros.h"
//# include "debug.h"
//# include "debug.c"
#include "foo.h"
#include "foo.c"

TEST(DebugFunctionTest, debugCheckScalePacket) {
	EXPECT_EQ(1, foo());
}
