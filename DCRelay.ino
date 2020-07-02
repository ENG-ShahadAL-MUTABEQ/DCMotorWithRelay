int R1=7;
int R2=8;


void setup() {
pinMode(R1,OUTPUT);
pinMode(R2,OUTPUT);

digitalWrite(R1,LOW);
digitalWrite(R2,LOW);


}

void loop() {
 digitalWrite(R1,HIGH);
 digitalWrite(R2,LOW);
 delay(1000);
 
 digitalWrite(R1,LOW);
 digitalWrite(R2,LOW);
 delay(1000);

 digitalWrite(R1,LOW);
 digitalWrite(R2,HIGH);
 delay(1000);
 }
