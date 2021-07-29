

void setup() 
{
  pinMode(4, INPUT);
  pinMode(13, OUTPUT);
}

void loop() 
{
  
  
  int sw = digitalRead(4);

  if(sw ==1)
  {
    digitalWrite(13,HIGH);
  }

  if(sw ==1)
  {
    digitalWrite(13,LOW);
  }

}
