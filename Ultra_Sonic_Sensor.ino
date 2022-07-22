int trigPin = 9;
int echoPin = 10;
int led = 7;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(led,OUTPUT);

}

void loop() {
  long duration, distance;
  digitalWrite(trigPin,1);
  delayMicroseconds(2000);

  digitalWrite(trigPin,0);
  duration = pulseIn(echoPin,1);
  distance = (duration/2)/29.1;
  Serial.print(distance);
  Serial.println("CM");
  delay(10); 

  if ((distance <=10))
    {
      digitalWrite(led,1);
 }
    else if (distance > 10) 
    {
      digitalWrite(led,0);
    }
    
}
