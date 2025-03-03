//LED ON /OFF USING PUSH BUTTON WITH ARDUINO 

int  button_pin =2; // THESE PIN READ BUTTON PRESSED OR NOR 
int  button_state=0;  // INTIALLLY BUTTON IS NOT PRESSED 
int  led_pin =7 ;//  THIS  DIGITAL PIN OUTPUTS LED ANODE HIGH OR LOW DEPEND ON BUTTON PRESSED OR NOT 

void setup() {  //INTIALSING PIN CHARACTERSTICS 
  
  pinMode(led_pin,OUTPUT);
  pinMode(button_pin,INPUT);

}
  
void loop() {   // ALWAYS REPEATS

     button_state=digitalRead(button_pin);  // READS CURRENT STATE OF BUTTON 

     if(button_state==HIGH){           // If button is pressed
        digitalWrite(led_pin,HIGH);    // Turn ON LED
     }else{                           // If button is not pressed
        digitalWrite(led_pin,LOW);    // Turn OFF LED
     } 

}



