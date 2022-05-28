#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
unsigned long enterTime, exitTime;

String message = "";

void Morse_decod()
{
    static String morse[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....",
                             "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-",
                             ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "!"};

    int i = 0;
    while (morse[i] != "!")
    {
        if (morse[i] == message)
        {
            lcd.clear();
            lcd.print(char('A' + i));
            lcd.print(" ");
            break;
        }
        i++;
    }
    if (morse[i] == "!")
    {
        Serial.println("");
        Serial.println("This sign does not exist!");
    }
    message = "";
}

void setup()
{
    Serial.begin(9600);

    lcd.begin(16, 2); // potrebno da bismo mogli koristiti LCD.
                      // 16,2 oznacava dimenziju LCDa
    lcd.backlight();
}

void loop()
{

    while (analogRead(A0) <= 900)
    {
        enterTime = millis();
    }
    Serial.println(analogRead(A0));

    if (enterTime - exitTime >= 2800)
    {
        Serial.print("if called");
        Morse_decod();
    }

    while (analogRead(A0) > 850)
    {
        exitTime = millis();
    }

    unsigned long timeDif = exitTime - enterTime;
    Serial.println(timeDif);

    if (timeDif <= 550)
    {
        message += ".";
        lcd.print(message);
    }
    else if (timeDif <= 1550)
    {
        message += "-";
        lcd.print(message);
    }
}