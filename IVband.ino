int trig = 2;
int echo = 4;
int dist = 0;
int buzzer= 6;


int trig2 = 11;
int echo2 = 9;
int dist2 = 0;
int buzzer2 = 8;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  pinMode(trig2, OUTPUT);
  pinMode(echo2, INPUT);

  Serial.begin(9600);

}

void loop() {
  int cm, cm2;
  digitalWrite(trig, 0);
  delayMicroseconds(2);

  digitalWrite(trig,1);
  delayMicroseconds(10);
  digitalWrite(trig, 0);
  
  dist = pulseIn(echo, 1);
  cm = dist/58;

  digitalWrite(trig2, 0);
  delayMicroseconds(2);

  digitalWrite(trig2,1);
  delayMicroseconds(10);
  digitalWrite(trig2, 0);
  
  dist2 = pulseIn(echo2, 1);
  cm2 = dist2/58;

  Serial.print(cm);
  Serial.println(" cm1");


  Serial.print(cm2);
  Serial.println(" cm2");

  if(cm2 <= 60){
    tone(buzzer2,4400);
  }
  else if(cm <= 60){
    tone(buzzer, 2700);
  }
  else if( cm2 <=80) {             
    tone(buzzer2,4000);
  }
  else if( cm <=80) {              
    tone(buzzer,2300);
  }
  else if( cm2 <=100) {            
    tone(buzzer2,3600);
  }
  else if( cm <=100) {           
    tone(buzzer,1900);
  }
  else if( cm2 <=120) {            
    tone(buzzer2,3200);
  }
  else if( cm <=120) {           
    tone(buzzer,1500);
  }
  else if( cm2 <=140) {             
    tone(buzzer2,3000);
  }
  else if( cm <=140) {             
    tone(buzzer,1100);
  }

  else if( cm2 <=160) {             
    tone(buzzer2,2800);
  }
  
  else if( cm <=160) {            
    tone(buzzer,700);
  }

  else {
    noTone(buzzer);
    noTone(buzzer2);
  }
  delay(1000);
}
