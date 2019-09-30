// Copyright 2019 Saumil Shah and Shantam Bajpai
/**
 *
 * @file  test.cpp
 * @brief Test source file for PID controller.
 *        Contains the required headers and methods.
 * @author Saumil Shah (Driver) and Shantam Bajpai (Navigator)
 * @date  26th September 2019
 * @version 1.0
 *
 */

#include <gtest/gtest.h>
#include <PIDControl.hpp>

// Class instance is created here which will be used for the test
PIDControl PID(0.1, 0.1, 0.1, 0.1);
double val = 1.1;

/** 
 * @brief Test for setKp() function of the PidControl class.
 * It checks whether the values set by the user and the values obtained by 
 * getKp() function are same or not.
 */
TEST(checkGetterSetter, checkKp) {
  PID.setKp(val);
  EXPECT_EQ(PID.getKp(), val);
}

/** 
 * @brief Test for setKd() function of the PidControl class.
 * It checks whether the values set by the user and the values obtained by 
 * getKd() function are same or not.
 */
TEST(checkGetterSetter, checkKd) {
  PID.setKd(val);
  EXPECT_EQ(PID.getKd(), val);
}

/** 
 * @brief Test for setKi() function of the PidControl class.
 * It checks whether the values set by the user and the values obtained by 
 * getKi() function are same or not.
 */
TEST(checkGetterSetter, checkKi) {
  PID.setKi(val);
  EXPECT_EQ(PID.getKi(), val);
}

/** 
 * @brief Test for setDt() function of the PidControl class.
 * It checks whether the values set by the user and the values obtained by 
 * getDt() function are same or not.
 */
TEST(checkGetterSetter, checkDi) {
  PID.setDt(val);
  EXPECT_EQ(PID.getDt(), val);
}

/** 
 * @brief Test for computeNewVelocity() function of the PidControl class.
 * It verifies that the new velocity computed by the function matches 
 * expected values or not.
 */
TEST(checkComputeVelocity, checkValues) {
  PID.setKi(1);
  PID.setKp(1);
  PID.setKd(1);
  PID.setDt(1);
  EXPECT_EQ(PID.computeNewVelocity(1, 0), 3.0);
  EXPECT_EQ(PID.computeNewVelocity(1, 3), -6.0);
}
/** 
 * @brief Test for calculateError() function of the PidControl class.
 * It verifies that the computed error between set velocity and current 
 * velocity is correct or not.
 */
TEST(checkCalculateError, checkErrorValues) {
  EXPECT_EQ(PID.calculateError(1, 0), 1.0);
}
