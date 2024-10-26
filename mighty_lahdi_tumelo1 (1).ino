// C++ code
//
int tempo = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);

  tempo = 1000;
}

void loop()
{
  digitalWrite(LED_BUILTIN, LOW);
  delay(tempo); // Wait for tempo millisecond(s)
  digitalWrite(LED_BUILTIN, HIGH);
  delay(tempo); // Wait for tempo millisecond(s)
}