# TO-DO AND DESIGN

## DESIGN SPECIFICATIONS

Here I will describe some of what this program needs to do and what I plan on doing to make it happen. The easiest way to start is to compartmentalize the problem.

### INPUT

I need an input system, wherein the user may enter the letter to be encrypted or decrypted. This is the baseline of the input system. This may be obtained through a simple cin statement. After the proof-of-concept, additional features may include being able to convert entire blocks of text and entering in different wheel configurations for the virtual engima to use. The blocks of text may be entered through the use of text files, and wheel configurations may be stored in a serialized format, potentially through YAML or JSON. Wheel settings will be saved in a file, possibly in a serialized format, so that the user need only enter them once for a period of use.

### PROCESSING

The processing portion of this software is simple, even in completion. The software will model the Enigma machine, made infamous during World War II. The scheme of the wiring for the enigma is publicly available on the internet, and I will go to no great length to describe it here. The code will model the way electrical currents pass through the wheel portion of the machine. The prototype of this software will contain but the starting wheel, one wheel in the middle, and the reflecting wheel. The software will have a minimum 3 middle wheel configuration after the prototype passes tests, with the wheels within being configurable through user inputs. The setting of the middle wheels will be determined as part of the user input. The reflector wheel and starting wheel will be static. The simulation of the middle wheels will be completed by the use of case/switch statements, populated based on the configuration of the wheel and what the wheel's setting is. 

### OUTPUT

The output system will simply display the converted letter during the proof-of-concept build. Afterwards, the system may be able to output translated blocks of text to a text file. The system will also output configuration settings on the request of the user, such as wheel configurations and wheel settings.

## TO-DO

- [] Work on the proof of concept, getting a baseline functionality working.
   - [x] Create an input system that will take one letter of user input and store it in a variable
   - [] Create a system with a static wheel, one middle wheel, and a reflector. Their       configuration will be hardcoded into the program for the prototype.
   - [] Allow for the system to output the newly encoded letter.
   - [] Translate a few letters on paper to compare to test runs of the prototype.
- [x] Plan on how the file setup of the program will be. Individual classes per file and main.cpp as the backbone in a single file. 
- [x] Create a basic Makefile
   - [x] Include make Clean option (This will remove all compiled objects)
   - [x] Include make All option (This will re-compile all files instead of changed ones)

