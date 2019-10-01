int inPin = 13;  
int val = 0;    

void setup() {
  pinMode(7,OUTPUT);  
  pinMode(inPin, INPUT);    
}

void loop(){
  val = digitalRead(inPin);  
  if (val == HIGH) 
  {     
    digitalWrite(7, LOW); 
  } else {
    digitalWrite(7, HIGH);
  }
}
 
© 2019 GitHub, Inc.
