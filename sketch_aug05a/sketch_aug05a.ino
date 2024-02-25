const int flexPin1 = 34; // Pin connected to voltage divider output 1
const int flexPin2 = 35; // Pin connected to voltage divider output 2
const int flexPin3 = 36; // Pin connected to voltage divider output 3
const int flexPin4 = 37; // Pin connected to voltage divider output 4
const int flexPin5 = 38; // Pin connected to voltage divider output 5
const int buttonPin = 27; // Pin connected to the button

// Change these constants according to your project's design
const float VCC = 5; // voltage at Ardunio 5V line
const float R_DIV = 47000.0; // resistor used to create a voltage divider
const float flatResistance = 25000.0; // resistance when flat
const float bendResistance = 100000.0; // resistance at 90 deg

void setup() {
  Serial.begin(9600);
  pinMode(flexPin1, INPUT);
  pinMode(flexPin2, INPUT);
  pinMode(flexPin3, INPUT);
  pinMode(flexPin4, INPUT);
  pinMode(flexPin5, INPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Read the ADCs, and calculate voltage and resistance from them
  int ADCflex1 = analogRead(flexPin1);
  float Vflex1 = ADCflex1 * VCC / 1023.0;
  float Rflex1 = R_DIV * (VCC / Vflex1 - 1.0);
  int ADCflex2 = analogRead(flexPin2);
  float Vflex2 = ADCflex2 * VCC / 1023.0;
  float Rflex2 = R_DIV * (VCC / Vflex2 - 1.0);
  int ADCflex3 = analogRead(flexPin3);
  float Vflex3 = ADCflex3 * VCC / 1023.0;
  float Rflex3 = R_DIV * (VCC / Vflex3 - 1.0);
  int ADCflex4 = analogRead(flexPin4);
  float Vflex4 = ADCflex4 * VCC / 1023.0;
  float Rflex4 = R_DIV * (VCC / Vflex4 - 1.0);
  int ADCflex5 = analogRead(flexPin5);
  float Vflex5 = ADCflex5 * VCC / 1023.0;
  float Rflex5 = R_DIV * (VCC / Vflex5 - 1.0);

  // Use the calculated resistances to estimate the sensors' bend angles:
  float angle1 = map(Rflex1, flatResistance, bendResistance, 0, 90.0);
  float angle2 = map(Rflex2, flatResistance, bendResistance, 0, 90.0);
  float angle3 = map(Rflex3, flatResistance, bendResistance, 0, 90.0);
  float angle4 = map(Rflex4, flatResistance, bendResistance, 0, 90.0);
  float angle5 = map(Rflex5, flatResistance, bendResistance, 0, 90.0);

  // Check if the button is pressed
  int buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    // Save the data in an SVG file
    String svgData = "angle1=" + String(angle1) + "," +
                     "angle2=" + String(angle2) + "," +
                     "angle3=" + String(angle3) + "," +
                     "angle4=" + String(angle4) + "," +
                     "angle5=" + String(angle5);
    Serial.println(svgData);
  }

  delay(500);
}
