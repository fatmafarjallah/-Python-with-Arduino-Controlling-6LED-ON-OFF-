int data;

void setup() 
{ 
  Serial.begin(9600); 
  pinMode(13, OUTPUT); 
  digitalWrite (13, LOW); 
  pinMode(12, OUTPUT); 
  digitalWrite (12, LOW); 
  pinMode(11, OUTPUT); 
  digitalWrite (11, LOW); 
  pinMode(10, OUTPUT); 
  digitalWrite (10, LOW); 
  pinMode(9, OUTPUT); 
  digitalWrite (9, LOW); 
  pinMode(8, OUTPUT); 
  digitalWrite (13, LOW); 
  Serial.println("This is my First Example.");
}
 
void loop() 
{
while (Serial.available())
  {
    data = Serial.read();
  }

  if (data == '1')
  digitalWrite (13, HIGH);
  else if (data == '0')
  digitalWrite (13, LOW);

  if (data == '2')
  digitalWrite (12, HIGH);
  else if (data == '0')
  digitalWrite (12, LOW);

  if (data == '3')
  digitalWrite (11, HIGH);
  else if (data == '0')
  digitalWrite (11, LOW);

  if (data == '4')
  digitalWrite (10, HIGH);
  else if (data == '0')
  digitalWrite (10, LOW);

  if (data == '5')
  digitalWrite (9, HIGH);
  else if (data == '0')
  digitalWrite (9, LOW);

  if (data == '6')
  digitalWrite (8, HIGH);
  else if (data == '0')
  digitalWrite (8, LOW);

}

