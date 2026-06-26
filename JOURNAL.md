# Outpost Journal

## Contents

### Thu Jun 25

Today was my first day getting started with the project. I worked for ~1.5 hours. This was my first time working with a microcontroller, specifically the Xiao ESP32S3. I started by just trying to connect it to my computer. I did this by downloading a VSCode extension called PlatformIo. The main.cpp file is wher eyou write all of your code. There are two basic functions, loop() and void(). I printed a simple message to my console from the ESP, and was able to test and upload the code.

The second step was to try and connect the ESP32 to the TFT screen I bought. I started by wiring up the breadboard (recorded using Lookout). This took me a long time because my MCU didn't have the pins labeled so I had to look up the pins online. It was also my first time using a TFT screen. TFT screens use 8 pins instead of the traditional 4 that OLED screens use. This MIGHT make it hard to wire everything up and get it to fit in my Altoids Bob Ross tin, but that's a problem for later lol.

Anyways, I wrote up a simple script to flash the screen from white to blue, however it didn't work. This was when I realized there was a problem with my TFT screen. Basically, I didn't order it with the pin headers soldered on, so there was a loose connection between the pins and the board, causing it to not render the color changes.

At this point it is kind of late and I'm pretty tired. I think tomorrow I'll solder on some wire to see if I can debug and figure out what the issue actually is.