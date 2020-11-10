/*
   TUTORIAL PUSH BUTTON PADA ARDUINO
   TAMPILKAN STATUS BUTTON PADA SERIAL MONITOR

   Pinout :
   Tombol 1 -> D9
   Tombol 2 -> D8

*/

#define TOMBOL1 9
#define TOMBOL2 8

void setup()
{
  Serial.begin(115200);  // memulai komunikasi serial
  Serial.println("Mencoba Push Button");
  pinMode(TOMBOL1, INPUT); //set menjadi input
  pinMode(TOMBOL2, INPUT); //set menjadi input
  digitalWrite(TOMBOL1, HIGH); //pull high sebagai default awal
  digitalWrite(TOMBOL2, HIGH); //pull high sebagai default awal
}

void loop()
{
  int a = digitalRead(TOMBOL1);
  int b = digitalRead(TOMBOL2);
  //ditekan nilai menjadi 0 (LOW)
  Serial.print("Status tombol A adalah : ");
  Serial.println(a);
  Serial.print("Status tombol B adalah : ");
  Serial.println(b);

  delay(100);

}
