// WHGS Arduino v3 by Jason Hsu


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


void setup() 
  {
    Serial.begin(9600);

    Serial.print("  ");
    Serial.print(analogRead(sensorPin1));
    Serial.print("     ");
    Serial.print(analogRead(sensorPin2));
    Serial.print("     ");
    Serial.print(analogRead(sensorPin3));
    Serial.print("     ");
    Serial.print(analogRead(sensorPin4));
    Serial.print("     ");
    Serial.print(analogRead(sensorPin5));
    Serial.println();
    
    Serial.print("I");
    delay(250);
    Serial.print("n");
    delay(250);
    Serial.print("i");
    delay(250);
    Serial.print("t");
    delay(250);
    Serial.print("i");
    delay(250);
    Serial.print("a");
    delay(250);
    Serial.print("l");
    delay(250);
    Serial.print("i");
    delay(250);
    Serial.print("z");
    delay(250);
    Serial.print("i");
    delay(250);
    Serial.print("n");
    delay(250);
    Serial.print("g");
    delay(250);
    Serial.println();
    
  }


void loop() 
  {
    sensorValue1 = analogRead(sensorPin1);
    sensorValue2 = analogRead(sensorPin2);
    sensorValue3 = analogRead(sensorPin3);
    sensorValue4 = analogRead(sensorPin4);
    sensorValue5 = analogRead(sensorPin5);
    Serial.print("  ");
    Serial.print(sensorValue1);
    Serial.print("     ");
    Serial.print(sensorValue2);
    Serial.print("     ");
    Serial.print(sensorValue3);
    Serial.print("     ");
    Serial.print(sensorValue4);
    Serial.print("     ");
    Serial.print(sensorValue5);
    Serial.println();
    delay(1000);
  }
