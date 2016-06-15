/*
20160614

updated from https://ide.coding.net
updated from notebook (@CQ_ICC)

20160615
branch : LED:13

*/

void setup()
{

  pinMode(13, OUTPUT);
  pinMode(4, OUTPUT);

}

void loop()
{
  digitalWrite(13, HIGH);
  digitalWrite(4, HIGH);
  delay(1000);

  digitalWrite(13, LOW);
  digitalWrite(4, LOW);
  delay(3000);
}


