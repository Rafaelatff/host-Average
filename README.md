# host-Average
This project uses STM32CubeIDE and it's a program created to practice my C habilities during the course 'Microcontroller Embedded C Programming: Absolute Beginners' from FastBit.

This code, shows a simple code that runs inside the STM32CubeIDE, same used to program the 32-bit microcontrollers. The difference, is that we use it to run the code output inside the host machine (and not the target, that is the evaluation board). The host machine is basically the computer.

As an option, this code can also be build and tested by the 'the https://www.onlinegdb.com'.

## Installing GCC on windows

To use GCC on operation system on Windows, we actually use a minimalist GNU (the MinGW). After Downloading the CTOOS, extract it on C:.

![image](https://user-images.githubusercontent.com/58916022/205927227-8ec69d47-a7d5-45fb-8ee5-63dcccb7fee6.png)

Type in the 'env' in the Windows search bar. You will be able to edit the Environment Variables (see next image).

![image](https://user-images.githubusercontent.com/58916022/205927627-286374b5-f4a9-45e4-994f-bf8bf401603c.png)

Then click in the variable 'Path' and then Edit...

![image](https://user-images.githubusercontent.com/58916022/205927746-cb4fed0b-d763-4afb-9a4d-1e68b6e50233.png)

Add the following paths:

![image](https://user-images.githubusercontent.com/58916022/205927813-2b5a6e54-0fe9-41ac-a14c-c40129525eeb.png)

It's possible to test just running the 'gcc' command line the Command Prompt (type cmd in the search bar).

![image](https://user-images.githubusercontent.com/58916022/205927993-75bfc920-5bd0-4974-a51e-d37202a25381.png)

## Creating a host project

**That is an example and can be used to all host projects inside STM32CubeIDE.**

Go to File -> New -> C/C++ Project.

![image](https://user-images.githubusercontent.com/58916022/205923420-43bcf662-971d-4883-8909-6585f5d97769.png)

Then choose the option C Managed Build and click Next >.

![image](https://user-images.githubusercontent.com/58916022/205923606-4fdf31b7-ae01-4472-ab02-dcdc0b916cca.png)

Give the project a name and choose the MinGW GCC compiler and click Finish.

![image](https://user-images.githubusercontent.com/58916022/205923768-63ad66b0-33aa-4cbf-9e3c-258756a0cea2.png)

Right click in the project (inside the Project Explorer window) and go New -> Source File to create a new source file.

![image](https://user-images.githubusercontent.com/58916022/205923983-6409d174-eb3c-468c-8a70-fb9b95f7809e.png)

Type its name and do not forget to add its extension (.c).

![image](https://user-images.githubusercontent.com/58916022/205924151-9311b4ea-3d6a-4b97-93f3-f70b07650058.png)

## Coding and Running

Showing the generated code and a few observations:

![image](https://user-images.githubusercontent.com/58916022/205924988-63cef1af-6d34-444d-9f3b-a1bb60f7487c.png)

Note 1: The cursos position is confused. That is an Eclipse console heritage. As an options, it's possible to Run the generated .exe output. For that, right click in the project tree, go to Properties -> Resource and click in the icon for 'Show In Sytem Explorer'. Execute the .exe file inside the Debug folder.

Note 2: The console wasn't showing the printf() messages. According to instructor explanation, it was showing in somewhere else, so we needed to use the command line 'fflush(stdout)' to send it to the Console.

A second code was generated, to show a different way of programming the same code.

![image](https://user-images.githubusercontent.com/58916022/205926556-96598b37-e3ae-4010-b966-195a750edcbc.png)





