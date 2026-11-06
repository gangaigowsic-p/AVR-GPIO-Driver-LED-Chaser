#include "GPIO.h"
/*This Function is used to create delays*/

void delays(void)
{
  for(volatile long int i = 0;i<177777;i++)
  {
  }
}

/*This function initailizies the gpio configurations*/

void GPIO_init(gpio_reg *gpioport,gpio_config *gpioconfig)
{
  //Turn on the given bit and sets as output or input

  if(gpioconfig->mode == 1)
  {
    gpioport->gpio_ddr |= (1 << (gpioconfig->pinVal));
  }
  else{
    gpioport->gpio_port &= ~(1 << (gpioconfig->pinVal));
  }
}

/*This function is used to set or reset the pin value*/

void GPIO_Write(gpio_reg *gpioport,gpio_config *gpioconfig)
{
  //Turn on the given bit and sets as high or low 

  if(gpioconfig->state == 1)
  {
    gpioport->gpio_port |= (1 << (gpioconfig->pinVal));
  }
  else{
    gpioport->gpio_port &= ~(1 << (gpioconfig->pinVal));
  }
}

/*This function is used to reset the pin value*/

void reset_pin(gpio_reg *gpioport,gpio_config *gpioconfig)
{
  /*This reset the bit on the pin*/

  gpioport->gpio_port &= ~(1 << (gpioconfig->pinVal));
}

/*This function is used to Toggle the pin value*/

void GPIO_Toggle(gpio_reg *gpioport,gpio_config *gpioconfig)
{
  for(;;)
  {
  gpioport->gpio_port |= (1 << (gpioconfig->pinVal));
  delays();
  gpioport->gpio_port &= ~(1 << (gpioconfig->pinVal));
  delays();
  }
}