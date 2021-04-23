int grnLedPin = 7;
int grnSwitchPin = 8;
int grnSwitch = 1;                              

void setup() {
  // put your setup code here, to run once:
  pinMode(grnLedPin, OUTPUT);
  pinMode(grnSwitchPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly);
 grnSwitch = digitalRead(grnSwitchPin);    
 if(grnSwitch == LOW)                        
 {digitalWrite(grnLedPin,HIGH);}                                                                                
else{digitalWrite(grnLedPin,LOW);} 
}
