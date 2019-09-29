// Copyright 2019 Saumil Shah and Shantam Bajpai
/**
 *
 * @file  main.cpp
 * @brief main file to run all tests
 * @author Saumil Shah (Driver) and Shantam Bajpai (Navigator)
 * @date  26th September 2019
 * @version 1.0
 *
 */
#include <gtest/gtest.h>

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
