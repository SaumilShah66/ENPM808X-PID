// Copyright 2019 Saumil Shah and Shantam Bajpai 
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
 * @param double kp: inputs Proportional Gain
 * @param double ki: inputs Integral gain
 * @param double kd: inputs Derivative gain
 * @return Nothing
 */

PIDControl::PIDControl(double inputKp, double inputKi, double inputKd,
                       double inputSampleTime) {
    this->kp = inputKp;
      this->ki = inputKi;
      this->kd = inputKd;
      this->dt = inputSampleTime;
}

/**
 * @brief A setter method to set kp
 * @param double kp: The Proportional Gain
 * @return Nothing
 */

void PIDControl::setKp(double inputKp) {
  // This method sets value of kp
  this->kp = inputKp;
}

/**
 * @brief A setter method to set ki
 * @param double ki: Integral Gain Value
 * @return nothing
 */

void PIDControl::setKi(double inputKi) {
  // This method sets value of ki
  this->ki = inputKi;
}

/**
 * @brief A setter method to set ki
 * @param double kd: Derivative Gain Value
 * @return nothing
 */

void PIDControl::setKd(double inputKd) {
  // This method sets value of kd
  this->kd = inputKd;
}

/**
 * @brief A setter method to get PID Sample time
 * @param inputSampleTime
 * @return kp
 */

void PIDControl::setDt(double inputSampleTime) {
  // This method should set value of dt
  // It can be used to change value of dt
  this->dt = inputSampleTime;
}

/**
 * @brief A getter method to get Ki value
 * @return kp
 */

double PIDControl::getKp() {
  // Return the value of kp
  return this->kp;
}

/**
 * @brief A getter method to get Ki value
 * @return ki
 */
double PIDControl::getKi() {
  // Return the value of ki
  return this->ki;
}

/**
 * @brief A getter method to get Kd
 * @return kd
 */

double PIDControl::getKd() {
  // Return the value of kd
  return this->kd;
}

/**
 * @brief A getter method to get Sample Time
 * @return SampleTime
 */

double PIDControl::getDt() {
  // Return the value of Dt
  return this->dt;
}

/**
 * @brief Method for computing new velocity based on target velocity and actual velocity
 * @param targetVelocity: Output velocity for the system
 * @param actualVelocity: Input Velocity for the system
 * @return New Velocity
 */

double PIDControl::computeNewVelocity(double targetVelocity,
                                      double actualVelocity) {
  // Please write the compute method as per
  // mentioned in acivity diagram
  return 0;
}

/**
 * @brief Method for computing error in velocity
 * @param targetVelocity: Output velocity for the system
 * @param actualVelocity: Input Velocity for the system
 * @return Error
 */
double calculateError(double targetVelocity, double actualVelocity) {
  // Please write the code to compute the error
  return 0;
}

PIDControl::~PIDControl() {
  std::cout << "Destructor";
}