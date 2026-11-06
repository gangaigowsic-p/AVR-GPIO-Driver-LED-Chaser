#ifndef GPIO_H
#define GPIO_H
#include <stdint.h>

typedef enum{
  gpio_high = 1,
  gpio_low = 0
}gpio_state;

typedef enum{
  gpio_input = 0,
  gpio_output = 1
}gpio_modes;

typedef struct{
  volatile uint8_t gpio_pin;
  volatile uint8_t gpio_ddr;
  volatile uint8_t gpio_port;
}gpio_reg;

typedef struct{
   
  gpio_modes mode;
  gpio_state state;
  uint8_t pinVal;

}gpio_config;

/*GPIO Register Macros pointing to the GPIO Register structure*/
#define gpioa      (gpio_reg*)0x20
#define gpiob      (gpio_reg*)0x23
#define gpioc      (gpio_reg*)0x26

/*Function definitions of the GPIO*/
void GPIO_init(gpio_reg *gpioport,gpio_config *gpioconfig);
void GPIO_Write(gpio_reg *gpioport,gpio_config *gpioconfig);
void GPIO_Toggle(gpio_reg *gpioport,gpio_config *gpioconfig);
void reset_pin(gpio_reg *gpioport,gpio_config *gpioconfig);
void delays(void);
#endif