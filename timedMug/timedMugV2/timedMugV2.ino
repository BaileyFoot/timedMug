// C++ code
//
void setup()
{
  pinMode(11, INPUT);
  pinMode(9, OUTPUT);
 // digitalWrite(11, LOW);
  
}

void loop()
{
 int pin11Value = digitalRead(11);  // Read the value of pin 11 (button)
  Serial.print("Pin 11 value: ");
  Serial.println(pin11Value);
  //delay(100);  // Optional delay for readability, adjust as needed

  if (digitalRead(11) == 1) {
    delay(20000); // Wait for 10000 millisecond(s)
    
    digitalWrite(9, HIGH);
    delay(500); // Wait for 3000 millisecond(s)
    digitalWrite(9, LOW);
    delay(500); // Wait for 3000 millisecond(s)
    digitalWrite(9, HIGH);
    delay(500); // Wait for 3000 millisecond(s)
    digitalWrite(9, LOW);
    
  }}
