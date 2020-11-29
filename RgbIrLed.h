/*
  RgbIrLed.h - IR RGB Led Library.
  Created by Alistair Allan, September 24, 2012.
  Released into the public domain.
  44 button (type 2) addition by Phil Willis
*/

#ifndef RgbIrLed_h
#define RgbIrLed_h


class RgbIrLed
{
  public:
	RgbIrLed(int type);

	unsigned long Brighter;
	unsigned long Darker;
	unsigned long Off;
	unsigned long On;
	unsigned long Red;
	unsigned long Green;
	unsigned long Blue;
	unsigned long White;
	unsigned long Flash;
	unsigned long Strobe;
	unsigned long Fade;
	unsigned long Smooth;
	
		
	unsigned long Quick;
	unsigned long Slow;
	unsigned long Play;
	unsigned long Auto;
	unsigned long Jump3;
	unsigned long Jump7;	// Like Strobe	
	unsigned long Fade3;   // Like Smooth	
	unsigned long Fade7;   // Like Fade
   
	unsigned long BR1;
	unsigned long BR2;
	unsigned long BR3;
	unsigned long BR4;

	unsigned long BG1;
	unsigned long BG2;
	unsigned long BG3;
	unsigned long BG4;

	unsigned long BB1;
	unsigned long BB2;
	unsigned long BB3;
	unsigned long BB4;

	unsigned long BW1;
	unsigned long BW2;
	unsigned long BW3;
	unsigned long BW4;


};

#endif

