/*
 * Nome: Henrik de Freitas
 * Data: 02/11/2022 
 * Blink LED com PB7 
 * ASF = Advanced Software Framework
 */

// Em caso de adicionar este include, não preciso de adicionar os demais abaixo, pois eles já existem internamente
// #include <asf.h>
#include <sam3x8e.h>
#include <pio_sam3x8e.h>

void delay_ms(int ms)
{
	for (int i = 0; i < ms; i++)
	{
		for (int j = 0; j < x; j++)
		{
			
		}
	}
}

int main (void)
{
	// Habilita o clock do PIOB 
	PMC->PMC_PCR = 12 & 0x3f;
	PMC->PMC_PCR |= (1 << 28) | (1 << 12);
	
	// Habilitar o PIO
	PIOB->PIO_PER |= (1 << 27);
	
	// PB27 é saída
	PIOB->PIO_OER |= (1 << 27);
	
	while (1)
	{
		PIOB->PIO_SODR |= (1 << 27);
		delay_ms(500);
		PIOB->PIO_SODR |= (1 << 27);
		delay_ms(500);
	}
}
