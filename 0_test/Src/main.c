#include "stm32f4xx.h"

int main()
{
  RCC -> AHB1ENR |= (1U<<0); //clock enable
  GPIOA -> MODER |= (1U<<10); //output
  GPIOA -> MODER &=~(1U<<11);
while(1)
{
   GPIOA -> ODR |= (1U << 5);


}


}
