#ifndef DIFFDRIVE_ARDUINO_CONFIG_H
#define DIFFDRIVE_ARDUINO_CONFIG_H

#include <string>


struct Config
{
  std::string left_wheel_name = "left_wheel";
  std::string right_wheel_name = "right_wheel";
  std::string left_wheel_t_name = "left_wheel_t";
  std::string right_wheel_t_name = "right_wheel_t";
  float loop_rate = 30;
  std::string device = "/dev/ttyUSB0";
  int baud_rate = 115200;
  int timeout = 1000;
  int enc_counts_per_rev = 1920;
};


#endif // DIFFDRIVE_ARDUINO_CONFIG_H