#include <ADCS.h>

ADCS adcs;

float a;
int i = 0, j = 0;

void setup(){
	Serial.begin(9600);
	delay(3000);
}

void loop(){
	
	j = adcs.renew();
	if(j==1){
		adcs.control();
		if(i==0){
			i = adcs.reelPara();
		}
	}
}