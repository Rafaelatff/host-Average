# host-Average
This project uses STM32CubeIDE and it's a program created to practice my C habilities during the course 'Microcontroller Embedded C Programming: Absolute Beginners' from FastBit.

This code, shows a simple code that runs inside the STM32CubeIDE, same used to program the 32-bit microcontrollers. The difference, is that we use it to run the code output inside the host machine (and not the target, that is the evaluation board). The host machine is basically the computer.

As an option, this code can also be build and tested by the 'the https://www.onlinegdb.com'.

## Installing GCC on windows

Check the [MinGW README.md page](https://github.com/Rafaelatff/MinGW/blob/main/README.md).

## Creating a host project

Check the [MinGW README.md page](https://github.com/Rafaelatff/MinGW/blob/main/README.md).

## Coding and Running

Showing the generated code and a few observations:

![image](https://user-images.githubusercontent.com/58916022/205924988-63cef1af-6d34-444d-9f3b-a1bb60f7487c.png)

Note 1: The cursos position is confused. That is an Eclipse console heritage. As an options, it's possible to Run the generated .exe output. For that, right click in the project tree, go to Properties -> Resource and click in the icon for 'Show In Sytem Explorer'. Execute the .exe file inside the Debug folder.

Note 2: The console wasn't showing the printf() messages. According to instructor explanation, it was showing in somewhere else, so we needed to use the command line 'fflush(stdout)' to send it to the Console.

A second code was generated, to show a different way of programming the same code.

![image](https://user-images.githubusercontent.com/58916022/205926556-96598b37-e3ae-4010-b966-195a750edcbc.png)





