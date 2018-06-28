#include <stdint.h>
#include "M4MemMap.h"
#include "GPIO.h"
#include "GPIO_Cfg.h"
#include "UART.h"
#include "UART_Cfg.h"


uint8_t UART_Rx_IntBuff[30]={0};
uint8_t UART_Tx_IntBuff[50]="0123456789ABCDEF9875RTASD";

uint8_t XXX,Y1,Y2 = 0;


int main(void)
{

    GPIO_Init();
    UART_Init();
    EN_INT(5);  //UART0
    //EN_INT(6);  //UART1
    //EN_INT(33); //UART2
    //EN_INT(59); //UART3
    //EN_INT(60); //UART4
    //EN_INT(61); //UART5
    //EN_INT(63); //UART7

    uint32_t i;




/*
    uint32_t k=0;
    UART_Tx_Init(UART_Tx_IntBuff,5,0);
    for(k=0;k<20000000;k++);
    UART_Tx(0);
    for(k=0;k<2000000;k++);
    UART_Tx(0);
    for(k=0;k<2000000;k++);
    UART_Tx(0);
    for(k=0;k<2000000;k++);
    UART_Tx(0);
    for(k=0;k<2000000;k++);
    UART_Tx(0);
    for(k=0;k<2000000;k++);
    UART_Tx(0);
    for(k=0;k<2000000;k++);
    UART_Tx(0);
    for(k=0;k<2000000;k++);
    UART_Tx(0);
    for(k=0;k<2000000;k++);
    UART_Tx(0);
    for(k=0;k<2000000;k++);
    UART_Tx(0);
*/

    UART_Tx_Init(UART_Tx_IntBuff,25,0);
    UART_Rx_Init(UART_Rx_IntBuff,23,0);
    for(i=0;i<50000;i++); // we have to make sure that the TX init is done

    while(1)
    {

        UART_Tx(0);
        for(i=0;i<50000;i++);
      //  UART_Rx(0);


    }


    return 0;

    }

