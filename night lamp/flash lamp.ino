
void setup()
{
 pinMode(13,OUTPUT);
Serial.begin(9600); 
}
void loop()
{
  int d=Serial.println("A0");
  
  if(d<300)
  {
  digitalWrite(13, HIGH);
  }
  else
  {
  digitalWrite(13, LOW);
  } 
}
