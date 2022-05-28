#define outputLED 10

void setup()
{
    pinMode(outputLED, OUTPUT);
    Serial.begin(9600);
}

void loop()
{ // Read data from the sensor:
    char s = Serial.read();

    if (s == 'a')
    {
        flashShort();
        flashLong();
        delay(3000);
        Serial.write('a');
    }
    else if (s == 'b')
    {
        flashLong();
        flashShort();
        flashShort();
        flashShort();
        delay(3000);
        Serial.write('b');
    }
    else if (s == 'c')
    {
        flashLong();
        flashShort();
        flashLong();
        flashShort();
        delay(3000);
        Serial.write('c');
    }
    else if (s == 'd')
    {
        flashLong();
        flashShort();
        flashShort();
        delay(3000);
        Serial.write('d');
    }
    else if (s == 'e')
    {
        flashShort();
        delay(3000);
        Serial.write('e');
    }
    else if (s == 'f')
    {
        flashShort();
        flashShort();
        flashLong();
        flashShort();
        delay(3000);
        Serial.write('f');
    }
    else if (s == 'g')
    {
        flashLong();
        flashLong();
        flashShort();
        delay(3000);
        Serial.write('g');
    }
    else if (s == 'h')
    {
        flashShort();
        flashShort();
        flashShort();
        flashShort();
        delay(3000);
        Serial.write('h');
    }
    else if (s == 'i')
    {
        flashShort();
        flashShort();
        delay(3000);
        Serial.write('i');
    }
    else if (s == 'j')
    {
        flashShort();
        flashLong();
        flashLong();
        flashLong();
        delay(3000);
        Serial.write('j');
    }
    else if (s == 'k')
    {
        flashLong();
        flashShort();
        flashLong();
        delay(3000);
        Serial.write('k');
    }
    else if (s == 'l')
    {
        flashShort();
        flashLong();
        flashShort();
        flashShort();
        delay(3000);
        Serial.write('l');
    }
    else if (s == 'm')
    {
        flashLong();
        flashLong();
        delay(3000);
        Serial.write('m');
    }
    else if (s == 'n')
    {
        flashLong();
        flashShort();
        delay(3000);
        Serial.write('n');
    }
    else if (s == 'o')
    {
        flashLong();
        flashLong();
        flashLong();
        delay(3000);
        Serial.write('o');
    }
    else if (s == 'p')
    {
        flashShort();
        flashLong();
        flashLong();
        flashShort();
        delay(3000);
        Serial.write('p');
    }
    else if (s == 'r')
    {
        flashShort();
        flashLong();
        flashShort();
        delay(3000);
        Serial.write('r');
    }
    else if (s == 's')
    {
        flashShort();
        flashShort();
        flashShort();
        delay(3000);
        Serial.write('s');
    }
    else if (s == 't')
    {
        flashLong();
        delay(3000);
        Serial.write('t');
    }
    else if (s == 'u')
    {
        flashShort();
        flashShort();
        flashLong();
        delay(3000);
        Serial.write('u');
    }
    else if (s == 'v')
    {
        flashShort();
        flashShort();
        flashShort();
        flashLong();
        delay(3000);
        Serial.write('v');
    }
    else if (s == 'z')
    {
        flashLong();
        flashLong();
        flashShort();
        flashShort();
        delay(3000);
        Serial.write('z');
    }
    digitalWrite(outputLED, LOW);
}

void flashShort()
{
    digitalWrite(outputLED, HIGH);
    delay(500);
    digitalWrite(outputLED, LOW);
    delay(500);
}

void flashLong()
{
    digitalWrite(outputLED, HIGH);
    delay(1500);
    digitalWrite(outputLED, LOW);
    delay(1500);
}