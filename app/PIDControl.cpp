// Copyright 2019 Saumil Shah and Shantam Bajpai
/*
 * @file  PIDControl.hpp
 * @brief class declaration for PID Controller
 * @author Saumil Shah (Driver) and Shantam Bajpai (Navigator)
 * @date  26th September 2019
 * @version 1.0
 */

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "PIDControl.hpp"

PIDControl::PIDControl() {
}

PIDControl::PIDControl(double inputKp, double inputKi, double inputKd,
                       double inputSampleTime) {
  this->kp = inputKp;
  this->ki = inputKi;
  this->kd = inputKd;
  this->dt = inputSampleTime;
  this->previousError = 0;
  this->integralTerm = 0;
}

void PIDControl::setKp(double inputKp) {
  // This method sets value of kp
  this->kp = inputKp;
}

void PIDControl::setKi(double inputKi) {
  // This method sets value of ki
  this->ki = inputKi;
}

void PIDControl::setKd(double inputKd) {
  // This method sets value of kd
  this->kd = inputKd;
}

void PIDControl::setDt(double inputSampleTime) {
  // This method should set value of dt
  // It can be used to change value of dt
  this->dt = inputSampleTime;
}

double PIDControl::getKp() {
  // Return the value of kp
  return this->kp;
}

double PIDControl::getKi() {
  // Return the value of ki
  return this->ki;
}

double PIDControl::getKd() {
  // Return the value of kd
  return this->kd;
}

double PIDControl::getDt() {
  // Return the value of dt
  return this->dt;
}

double PIDControl::calculateError(double targetVelocity,
                                  double actualVelocity) {
  // Please write the code to compute the error
}

double PIDControl::computeNewVelocity(double targetVelocity,
                                      double actualVelocity) {
  // Please write the compute method as per
  // mentioned in activity diagram
}

PIDControl::~PIDControl() {
}
