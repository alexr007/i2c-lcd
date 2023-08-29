#include <Wire.h> 
#include <LCD_I2C.h>

// https://github.com/blackhack/LCD_I2C
// https://github.com/blackhack/LCD_I2C/blob/master/examples/Hello_World/Hello_World.ino
LCD_I2C lcd(0x27, 20, 4);

uint8_t happy[8] =
{
    0b00000,
    0b10001,
    0b00000,
    0b00000,
    0b10001,
    0b01110,
    0b00000,
    0b00000,
};

uint8_t wow[8] =
{
    0b00000,
    0b10001,
    0b00000,
    0b01110,
    0b10001,
    0b01110,
    0b00000,
    0b00000,
};

uint8_t anchor[8] =
{
    0b01110,
    0b01010,
    0b01110,
    0b00100,
    0b10101,
    0b10101,
    0b01110,
    0b00100
};

uint8_t snow[8] =
{
    0b01000,
    0b11101,
    0b01011,
    0b00001,
    0b00100,
    0b01110,
    0b00100,
    0b10000
};

uint8_t slash[8] =
{
    0b00000,
    0b10000,
    0b01000,
    0b00100,
    0b00010,
    0b00001,
    0b00000,
    0b00000
};

uint8_t box[8] =
{
    0b11111,
    0b10001,
    0b10001,
    0b10001,
    0b10001,
    0b10001,
    0b10001,
    0b11111
};

uint8_t b1[8] =
{
    0b00000,
    0b00000,
    0b00000,
    0b00000,
    0b00000,
    0b00000,
    0b00000,
    0b11111
};

uint8_t b2[8] =
{
    0b00000,
    0b00000,
    0b00000,
    0b00000,
    0b00000,
    0b00000,
    0b11111,
    0b11111
};

uint8_t b3[8] =
{
    0b00000,
    0b00000,
    0b00000,
    0b00000,
    0b00000,
    0b11111,
    0b11111,
    0b11111
};


uint8_t b4[8] =
{
    0b00000,
    0b00000,
    0b00000,
    0b00000,
    0b11111,
    0b11111,
    0b11111,
    0b11111
};

uint8_t b5[8] =
{
    0b00000,
    0b00000,
    0b00000,
    0b11111,
    0b11111,
    0b11111,
    0b11111,
    0b11111
};

uint8_t b6[8] =
{
    0b00000,
    0b00000,
    0b11111,
    0b11111,
    0b11111,
    0b11111,
    0b11111,
    0b11111
};

uint8_t b7[8] =
{
    0b00000,
    0b11111,
    0b11111,
    0b11111,
    0b11111,
    0b11111,
    0b11111,
    0b11111
};


uint8_t b8[8] =
{
    0b11111,
    0b11111,
    0b11111,
    0b11111,
    0b11111,
    0b11111,
    0b11111,
    0b11111
};

void setup() {
  lcd.begin();                     
  lcd.backlight();

    // lcd.createChar(0, happy);
    // lcd.createChar(1, wow);
    // lcd.createChar(2, anchor);
    // lcd.createChar(3, snow);
    // lcd.createChar(4, slash);
    // lcd.createChar(5, box);

    lcd.createChar(1, b1);
    lcd.createChar(2, b2);
    lcd.createChar(3, b3);
    lcd.createChar(4, b4);
    lcd.createChar(5, b5);
    lcd.createChar(6, b6);
    lcd.createChar(7, b7);
    lcd.createChar(8, b8);

    // lcd.write(0);
    // lcd.write(1);
    // lcd.write(2);
    // lcd.write(3);
    // lcd.write(5);
    // lcd.write(4);
    // lcd.print("/");
    // lcd.print("|");
    // lcd.print("-");

  // lcd.setCursor(0, 0);
  // lcd.print("line1");

  // lcd.setCursor(0, 1);
  // lcd.print("line2");

  // lcd.setCursor(0, 2);
  // lcd.print("line3");

  // lcd.setCursor(0, 3);
  // lcd.print("line4");

}

int ch = 1;
void loop()
{
  lcd.setCursor(0, 0);
  lcd.write(ch);
  delay(1000);
  ch++;
  if (ch > 8) ch=1; 


    // //Autoscroll
    // lcd.setCursor(5, 0);
    // lcd.print(F("Autoscrolling"));
    // lcd.setCursor(10, 1);
    // lcd.autoscroll();

    // for (int i = 0; i < 10; i++)
    // {
    //     lcd.print(i);
    //     delay(200);
    // }

    // lcd.noAutoscroll();
    // // lcd.clear();

    // // Scroll left and right
    // lcd.setCursor(10, 0);
    // lcd.print(F("To the left!"));
    // for (int i = 0; i < 10; i++)
    // {
    //     lcd.scrollDisplayLeft();
    //     delay(200);
    // }
    // // lcd.clear();
    // lcd.print(F("To the right!"));
    // for (int i = 0; i < 10; i++)
    // {
    //     lcd.scrollDisplayRight();
    //     delay(200);
    // }
    // // lcd.clear();

    // //Cursor
    // lcd.setCursor(0, 0);
    // lcd.cursor();
    // lcd.print(F("Cursor"));
    // delay(3000);
    // // lcd.clear();

    // //Cursor blink
    // lcd.setCursor(0, 0);
    // lcd.blink();
    // lcd.print(F("Cursor blink"));
    // delay(3000);
    // // lcd.clear();

    // //Blink without cursor
    // lcd.setCursor(0, 0);
    // lcd.noCursor();
    // lcd.print(F("Just blink"));
    // delay(3000);
    // lcd.noBlink();
    // // lcd.clear();
}