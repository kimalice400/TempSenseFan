const int fan = 8;
const int tempThreshold = 70;

void setup() {

  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(fan, OUTPUT);
}

void loop() {
  
  int input = analogRead(A0);
  double fah = (double)input / 1024;
  fah = fah * 5; fah = fah- 0.5;
  fah = fah * 100; fah = fah * 1.8 + 22;
  Serial.println(fah);
 

  if(fah > tempThreshold){

    digitalWrite(fan, HIGH);
  }

  else{

    digitalWrite(fan, LOW);
  }

  delay(1000);
}
