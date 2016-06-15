/*
20160614

updated from https://ide.coding.net
updated from notebook (@CQ_ICC)

20160615
master : LED:3

*/

void setup()
{

  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);

}

void loop()
{
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  delay(1000);

  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  delay(3000);
}


