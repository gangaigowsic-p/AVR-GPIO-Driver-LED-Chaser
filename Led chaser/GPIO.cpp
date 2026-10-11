#define F_CPU 16000000UL
#include "GPIO.h"

#include <util/delay.h>
volatile uint8_t *ddra = (volatile uint8_t*)0x21;
volatile uint8_t *ddrb = (volatile uint8_t*)0x24;
volatile uint8_t *ddrc = (volatile uint8_t*)0x27;
volatile uint8_t *porta = (volatile uint8_t*)0x22;
volatile uint8_t *portb = (volatile uint8_t*)0x25;
volatile uint8_t *portc = (volatile uint8_t*)0x28;
volatile uint8_t *pina = (volatile uint8_t*)0x20;
volatile uint8_t *pinb = (volatile uint8_t*)0x23;
volatile uint8_t *dest;

void GPIO_PINMODE(char port, uint8_t pin, uint8_t mode)
{

  if (port == 'A') {
    if (mode)
    {
      *ddra |= (1 << pin);
    }
    else
    {
      *ddra &= ~(1 << pin);
    }
  }
  if (port == 'B') {
    if (mode)
    {
      *ddrb |= (1 << pin);
    }
    else
    {
      *ddrb &= ~(1 << pin);
    }
  }
  if (port == 'C') {
    if (mode)
    {
      *ddrc |= (1 << pin);
    }
    else
    {
      *ddrc &= ~(1 << pin);
    }
  }
}
void GPIO_WRITE(char port, uint8_t pin, uint8_t mode)
{
  if (port == 'A') {
    if (mode)
    {
      *porta |= (1 << pin);
    }
    else
    {
      *porta &= ~(1 << pin);
    }
  }
  if (port == 'B') {
    if (mode)
    {
      *portb |= (1 << pin);
    }
    else
    {
      *portb &= ~(1 << pin);
    }
  }
  if (port == 'C') {
    if (mode)
    {
      *portc |= (1 << pin);
    }
    else
    {
      *portc &= ~(1 << pin);
    }
  }
  
}
void delay_us(uint16_t microseconds)
{
    _delay_us(microseconds);
}
void delays(volatile long k)
{
  for (volatile long i = 0; i < k; i++) 
  {
    for (volatile long j = 0; j < 50000; j++)
    {
      ;
    }
  }
}
volatile uint8_t *ports[] = {porta,portb,portc};
void GPIO_WRITEPORT(char port,uint8_t value)
{
  int index = port-'A';
  *ports[index] = value;
}
volatile uint8_t *pins[] = {pina,pinb};
uint8_t GPIO_READ(char port,uint8_t pin)
{
    int index1 = port-'A';
    return (*pins[index1]&(1<<pin)) ? 1 : 0;
}
