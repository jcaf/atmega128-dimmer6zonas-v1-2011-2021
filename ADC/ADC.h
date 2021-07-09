/*
 * ADC.h
 *
 * Created: 4/26/2013 11:51:12 AM
 *  Author: jc
 */ 


#ifndef ADC_H_
#define ADC_H_

	//Bit 7:6 REFS1:0 Rerefence Selection Bits
	//Bit 5: ADLAR: ADC Left Adjust Result
	//Bit 4:0 MUX4:0 Analog Channel and Gain Selection Bits
	//ADC Control and Status Register A: ADCSRA                     
	//#define ADC_PRESCALER_2		(0x00)
	/////////////////////////////////////////////////////////////////////////
	//#define ADC_Disable() do{ADCSRA &= ~( (1<<ADEN)|(1<<ADIF) );}while(0)	
	/////////////////////////////////////////////////////////////////////////
	//#define ADC_Enable_And_ADIFClear() BitTo1(ADCSRA,ADEN)
	/////////////////////////////////////////////////////////////////////////
	void singleconv1(void);
	void adc_init(void);
	//inline unsigned int adc_read16(void);

#endif /* ADC_H_ */
