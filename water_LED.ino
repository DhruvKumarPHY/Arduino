int value = 0;


void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(A1,INPUT);

}

void loop() {

value = analogRead(A1);
   
   if (value <= 50)
   {
    digitalWrite(13,1);
    digitalWrite(12,0);
    digitalWrite(11,0);
   }
    
    else if (value <= 100)
    {
    digitalWrite(13,0);
    digitalWrite(12,1);
    digitalWrite(11,0);
    }

    else 
    {
    digitalWrite(13,0);
    digitalWrite(12,0);
    digitalWrite(11,1);
    }
}
