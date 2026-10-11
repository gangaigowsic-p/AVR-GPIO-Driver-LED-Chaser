#ifndef GPIO_H
#define GPIO_H
#include <stdint.h>
#define high 1
#define low 0

#define input 0
#define output 1

#include <util/delay.h>
#define F_CPU 16000000UL

extern volatile uint8_t *ddra;
extern volatile uint8_t *porta;
extern volatile uint8_t *ddrb;
extern volatile uint8_t *portb;
extern volatile uint8_t *ddrc;
extern volatile uint8_t *portc;
extern volatile uint8_t *pina;
extern volatile uint8_t *pinb;
void delay_us(uint16_t microseconds);
void delays(volatile long k);
void GPIO_PINMODE(char port,uint8_t pin,uint8_t mode);
void GPIO_WRITE(char port,uint8_t pin,uint8_t mode);
void GPIO_WRITEPORT(char port,uint8_t value);
uint8_t GPIO_READ(char port,uint8_t pin);
uint8_t GPIO_READPORT();
#endif