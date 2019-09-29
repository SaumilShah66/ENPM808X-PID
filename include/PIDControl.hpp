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
#ifndef INCLUDE_PIDCONTROL_H_
#define INCLUDE_PIDCONTROL_H_

/*Header Files.............................................*/
#include<iostream>

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
 public:
  /*
   * @brief PIDControl Constructor
   */
  PIDControl();

  /*
   * @brief PIDControl Constructor
   * @param inputKp: Proportional gain
   * @param inputKi: Integral gain
   * @param inputKd: Derivative Gain
   * @param input_SampleTime: SampleTime
   */

  PIDControl(double inputKp, double inputKi, double inputKd,
             double inputSampleTime);

  /*
   * @brief Method to Compute Velocity
   * @param targetVelocity: Velocity that we want to achieve
   * @param actualVelocity: Current velocity
   */
  double computeNewVelocity(double targetVelocity, double actualVelocity);
  /*
   * @brief Setter method for Kp
   * @param inputKp: Proportional gain
   */
  void setKp(double inputKp);
  /*
   * @brief Setter method for Ki
   * @param inputKi: Integral gain
   */
  void setKi(double inputKi);
  /*
   * @brief Setter method for Kd
   * @param inputKd: Derivative gain
   */
  void setKd(double inputKd);
  /*
   * @brief Setter method for sample time
   * @input_SampleTime : Sample time for PID Controller
   */
  void setDt(double inputSampleTime);
  /*
   * @brief Getter method for Kp
   */
  double getKp();
  /*
   *@brief Getter method Ki
   */
  double getKi();
  /*
   * @brief Getter method Kd
   */
  double getKd();
  /*
   * @brief Getter method for Sample Time
   */
  double getDt();
  /*
   * @brief Destructor for the PIDControl Constructor
   */
  virtual ~PIDControl();
};

#endif /* INCLUDE_PIDCONTROL_H_ */
