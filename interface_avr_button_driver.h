#ifndef INTERFACE_AVR_READ_DRIVER
#define INTERFACE_AVR_READ_DRIVER
#include "../../avr_mcal/avr_gpio_driver/interface_avr_gpio_driver.h"
#define  void_button_init(port_num,pin_num)     void_GPIO_init(port_num,pin_num,input)
#define  uint8_button_read(port_num,pin_num)     void_GPIO_read(port_num,pin_num)
#endif 