#include <stdio.h>

volatile int * PS2_ptr = (int *) 0xFF200100;  // PS/2 port address
int PS2_data, RVALID;
unsigned char key_byte_1 = 0;
unsigned char key_byte_2 = 0;
unsigned char key_byte_3 = 0;

int main(){

	
*(PS2_ptr) = 0xFF; 

while(1) {
  PS2_data = *(PS2_ptr); // read the Data register in the PS/2 port
  RVALID = PS2_data & 0x8000; 
	 
  if(RVALID){ 
  	key_byte_1 = key_byte_2; 
	key_byte_2 = key_byte_3;
	key_byte_3 = PS2_data & 0xFF;
	  
	// if 'a' is pressed
	if(key_byte_3 == (char)0x1C && key_byte_2 == (char)0xF0 && key_byte_1 == (char)0x1C){

	}
	// if 'd' is pressed
	else if(key_byte_3 == (char)0x23 && key_byte_2 == (char)0xF0 && key_byte_1 == (char)0x23){
		
	}
	// if 'w' is pressed
	else if(key_byte_3 == (char)0x1D && key_byte_2 == (char)0xF0 && key_byte_1 == (char)0x1D){
	   
	}
	// if 's' is pressed
	else if(key_byte_3 == (char)0x1B && key_byte_2 == (char)0xF0 && key_byte_1 == (char)0x1B){
			 
	}
	// if left arrow is pressed
	else if (key_byte_3 == (char)0x6B && key_byte_2 == (char)0xF0 && key_byte_1 == (char)0xE0){
	
	}
	// if right arrow is pressed
	else if (key_byte_3 == (char)0x74 && key_byte_2 == (char)0xF0 && key_byte_1 == (char)0xE0){
	
	}
	// if up arrow is pressed
	else if (key_byte_3 == (char)0x75 && key_byte_2 == (char)0xF0 && key_byte_1 == (char)0xE0){
	
	}
	// if down arrow is pressed
	else if (key_byte_3 == (char)0x72 && key_byte_2 == (char)0xF0 && key_byte_1 == (char)0xE0){

	}
  }
 }
}
