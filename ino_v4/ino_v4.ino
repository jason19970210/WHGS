// WHGS Arduino version3 by Jason Hsu

int sensorPin1 = A1;
int sensorPin2 = A2;
int sensorPin3 = A3;
int sensorPin4 = A4;
int sensorPin5 = A5;

int sensorValue1 = 0;
int sensorValue2 = 0;
int sensorValue3 = 0;
int sensorValue4 = 0;
int sensorValue5 = 0;

int sensorValue11 = 0;
int sensorValue22 = 0;
int sensorValue33 = 0;
int sensorValue44 = 0;
int sensorValue55 = 0;

void setup(){

  Serial.begin(9600);

  sensorValue1 = analogRead(sensorPin1);
  sensorValue2 = analogRead(sensorPin2);
  sensorValue3 = analogRead(sensorPin3);
  sensorValue4 = analogRead(sensorPin4);
  sensorValue5 = analogRead(sensorPin5);

  /*
  Serial.print("V");
  Serial.print(analogRead(sensorPin1));
  Serial.print(",");
  Serial.print(analogRead(sensorPin2));
  Serial.print(",");
  Serial.print(analogRead(sensorPin3));
  Serial.print(",");
  Serial.print(analogRead(sensorPin4));
  Serial.print(",");
  Serial.print(analogRead(sensorPin5));
  Serial.println();

  Serial.print("Initializing");
  Serial.println();
  delay(500);
  */
}

void loop(){

  sensorValue11 = analogRead(sensorPin1);
  sensorValue22 = analogRead(sensorPin2);
  sensorValue33 = analogRead(sensorPin3);
  sensorValue44 = analogRead(sensorPin4);
  sensorValue55 = analogRead(sensorPin5);

  Serial.print("V");
  Serial.print(sensorValue11 - sensorValue1);
  Serial.print(",");
  Serial.print(sensorValue22 - sensorValue2);
  Serial.print(",");
  Serial.print(sensorValue33 - sensorValue3);
  Serial.print(",");
  Serial.print(sensorValue44 - sensorValue4);
  Serial.print(",");
  Serial.print(sensorValue55 - sensorValue5);
  Serial.println();

  delay(1000);

}
