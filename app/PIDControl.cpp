// Copyright 2019 Shantam Bajpai and Saumil Shah
/**
 *
 * @file  PIDControl.hpp
 * @brief class declaration for PID Controller
 * @author Saumil Shah (Driver) and Shantam Bajpai (Navigator)
 * @date  26th September 2019
 * @version 1.0
 *
 */

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<PIDControl.hpp>

PIDControl::PIDControl() {
}

/**
 * @brief Initializes the PIDControl Constructor
 * @param double Kp: inputs Proportional Gain
 * @param double Ki: inputs Integral gain
 * @param double Kd: inputs Derivative gain
 * @return Nothing
 */

PIDControl::PIDControl(double inputKp, double inputKi, double inputKd,
                       double input_sampleTime)
    : Kp(inputKp),
      Ki(inputKi),
      Kd(inputKd),
      SampleTime(input_sampleTime) {
}

/**
 * @brief A setter method to set Kp
 * @param double Kp: The Proportional Gain
 * @return Nothing
 */

void PIDControl::setKp(double inputKp) {
  // This method sets value of Kp
  this->Kp = inputKp;
}

/**
 * @brief A setter method to set Ki
 * @param double Ki: Integral Gain Value
 * @return nothing
 */

void PIDControl::setKi(double inputKi) {
  // This method sets value of Ki
  this->Ki = inputKi;
}

/**
 * @brief A setter method to set Ki
 * @param double Kd: Derivative Gain Value
 * @return nothing
 */

void PIDControl::setKd(double inputKd) {
  // This method sets value of Kd
  this->Kd = inputKd;
}

/**
 * @brief A setter method to get PID Sample time
 * @param input_SampleTime
 * @return Kp
 */

bool PIDControl::setDt(double inputSampleTime) {
  // This method should set value of Dt
  // It can be used to change value of Dt
  // Value of Dt can be only positive. Return false 
  // if any other value is passed.
  return true;
}

/**
 * @brief A getter method to get Ki value
 * @return Kp
 */

double PIDControl::getKp() {
  // Return the value of Kp
  return this->Kp;
}

/**
 * @brief A getter method to get Ki value
 * @return Ki
 */
double PIDControl::getKi() {
  // Return the value of Ki
  return this->Ki;
}

/**
 * @brief A getter method to get Kd
 * @return Kd
 */

double PIDControl::getKd() {
  // Return the value of Kd
  return this->Kd;
}

/**
 * @brief A getter method to get Sample Time
 * @return SampleTime
 */

double PIDControl::getDt() {
  // Return the value of Dt
  return this->Dt;
}

/**
 * @brief Method for computing new velocity based on target velocity and actual velocity
 * @param TargetVelocity: Output velocity for the system
 * @param ActualVelocity: Input Velocity for the system
 * @return New Velocity
 */

double PIDControl::computeNewVelocity(double targetVelocity,
                                      double actualVelocity) {
  // Please write the compute method as per
  // mentioned in acivity diagram
  return 0;
}

double calculateError(double targetVelocity, double actualVelocity) {
  // Please write the code to compute the error
  return 0;
}

PIDControl::~PIDControl() {
  std::cout << "Destructor";
}





