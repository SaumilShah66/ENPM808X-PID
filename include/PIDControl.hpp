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
/*#include guards for recursive inclusion..................*/
#ifndef INCLUDE_PIDCONTROL_HPP_
#define INCLUDE_PIDCONTROL_HPP_

/*Header Files.............................................*/
#include <iostream>

/**
 * @brief class for PIDControl
 * @param kp: Proportional Gain
 * @param ki: Integral gain
 * @param kd: Derivative gain
 * @param dt: Time difference
 * @param targetVelocity: Velocity that we want to achieve
 * @param actualVelocity: Current velocity
 */
class PIDControl {
 private:
  double kp;
  double ki;
  double kd;
  double dt;
  double previousError;
  double integralTerm;

 public:
  /*
   * @brief PIDControl Constructor
   */
  PIDControl();

  /**
   * @brief Initializes the PIDControl Constructor
   * @param double kp: inputs Proportional Gain
   * @param double ki: inputs Integral gain
   * @param double kd: inputs Derivative gain
   * @return nothing
   */
  PIDControl(double inputKp, double inputKi, double inputKd,
             double inputSampleTime);
  /**
   * @brief Method for computing error in velocity
   * @param targetVelocity: Output velocity for the system
   * @param actualVelocity: Input Velocity for the system
   * @return error
   */
  double calculateError(double targetVelocity, double actualVelocity);
  /*
   * @brief Method to Compute Velocity
   * @param targetVelocity: Velocity that we want to achieve
   * @param actualVelocity: Current velocity
   * @return returns final velocity
   */
  double computeNewVelocity(double targetVelocity, double actualVelocity);
  /*
   * @brief Setter method for kp
   * @param inputKp: Proportional gain
   * @return nothing
   */
  void setKp(double inputKp);
  /*
   * @brief Setter method for ki
   * @param inputKi: Integral gain
   * @return nothing
   */
  void setKi(double inputKi);
  /*
   * @brief Setter method for kd
   * @param inputKd: Derivative gain
   * @return nothing
   */
  void setKd(double inputKd);
  /**
   * @brief A setter method to get PID Sample time
   * @param inputSampleTime
   * @return nothing
   */
  void setDt(double inputSampleTime);
  /**
   * @brief A getter method to get ki value
   * @return kp
   */
  double getKp();
  /**
   * @brief A getter method to get ki value
   * @return ki
   */
  double getKi();
  /**
   * @brief A getter method to get kd
   * @return kd
   */
  double getKd();
  /**
   * @brief A getter method to get Sample Time
   * @return sampleTime
   */
  double getDt();
  /*
   * @brief Destructor for the PIDControl Constructor
   */
  virtual ~PIDControl();
};

#endif  // INCLUDE_PIDCONTROL_HPP_
