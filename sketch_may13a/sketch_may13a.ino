int scale = 2;
int pot = A4;
int Pwnpin = 6;
void setup() {
  Serial.begin(9600);
  pinMode(pot, INPUT);
  pinMode(Pwnpin, OUTPUT);
}


void loop() {
  int x = analogRead(pot);         
  Serial.println(x);               
   analogWrite(Pwnpin, x/4);     
  // digitalWrite(Pwnpin, HIGH);      
  // delayMicroseconds(x * scale);    
  // digitalWrite(Pwnpin, LOW);       
}
