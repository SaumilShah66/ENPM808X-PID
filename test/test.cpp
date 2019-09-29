#include <gtest/gtest.h>
#include <PIDControl.hpp>

PIDControl PID(0.1, 0.1, 0.1, 0.1);
double val=1.1;

 TEST(CheckGetterSetter, CheckKp) {
   PID.SetKp(val);
  EXPECT_EQ(PID.GetKp(), val);
 }

 TEST(CheckGetterSetter, CheckKd) {
   PID.SetKd(val);
   EXPECT_EQ(PID.GetKd(), val);
 }

 TEST(CheckGetterSetter, CheckKi) {
   PID.SetKi(val);
   EXPECT_EQ(PID.GetKi(), val);
 }

TEST(CheckComputeVelocity, CheckValues) {
	PID.SetKi(0.1);
	PID.SetKp(0.1);
	PID.SetKd(0.1);
	PID.SetDt(0.1);
	EXPECT_EQ(PID.ComputeNewVelocity(1,0), 10.101);
	EXPECT_EQ(PID.ComputeNewVelocity(2,1), 10.201);
}

TEST(TimeStampPositivity, CheckPositiveTimeDifference) {
	EXPECT_EQ(PID.SetDt(0), false);
	EXPECT_EQ(PID.SetDt(0.1), true);
	EXPECT_EQ(PID.SetDt(-0.10), false);
}