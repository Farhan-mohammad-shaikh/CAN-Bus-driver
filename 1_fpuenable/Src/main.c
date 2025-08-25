#include "stm32f4xx.h"
#include "fpu.h"





int main()
{

	fpu_enable();

while(1)
{
   GPIOA -> ODR |= (1U << 5);


}


}
