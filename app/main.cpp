// Copyright 2019 Saumil Shah and Shantam Bajpai
/*
 * @file  main.cpp
 * @brief Main function which uses the class for computation
 * @author Saumil Shah (Driver) and Shantam Bajpai (Navigator)
 * @date  26th September 2019
 * @version 1.0
 *
 */

#include <iostream>
#include <memory>
#include <cstdio>
#include <cstdlib>
#include "PIDControl.hpp"

int main() {
    PIDControl pidObj(2, 3, 4, 0.001);
    std::cout << "New velocity is: " <<
    pidObj.computeNewVelocity(12, 2) << std::endl;
}
