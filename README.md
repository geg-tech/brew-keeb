# Brew75
<img width="2880" height="1018" alt="brew_case_variant_2026-Mar-28_01-47-42PM-000_CustomizedView4642572212" src="https://github.com/user-attachments/assets/3608d582-84dc-45b6-8454-40e70fa15276" /> <br/>
my dream keyboard!

This is a 75% keyboard, powered with QMK and like 6 months of procrastination lmao <br/>
I started this project to create my dream keyboard back in the start of Blueprint, and I finally get to finish off this project after months of school work and robotics work getting in the way. After getting experience from my other keyboard-related projects, I wanted to tackle on an _actual_ keyboard project that I could customize to my liking and use as my daily driver. Although I easy could've bought some off the shelf keyboard, buying a mechanical keyboard for $80 dollars would very much bankrupt me <br/>

This keyboard contains:
* 82 total keys with 4 macro keys included!
* 2 clicky knobs for extra customization (or just fidgeting with)
* glowy RGB through the top and underglow!
* an OLED screen for showing statistics and cool graphics!
* integrated USB hub, supporting 4 connecting devices!
* awesome sauce silkscreen!

I'm overall very happy how this project turned out. Art-wise, this is my favorite project so far, with the PCB having 100% original silkscreen designs with the back paying homage to all my previous projects! 

## how 2 use this
its a keyboard where you go click clack on it <br/>
This is a standard 75% keyboard with 4 moddable macro buttons on the side and 2 knobs with switches! Tweak their functions in the firmware with QMK (located in PCB/keymaps/brewin/keymap.c)<br/>

anyways funky picture time
## CAD
<img width="2880" height="1018" alt="brew redner 7" src="https://github.com/user-attachments/assets/16729267-3dbc-47b6-9bab-bf7f422a3c22" /> <br/>
<img width="1024" height="768" alt="brew render 1" src="https://github.com/user-attachments/assets/1b6d57ec-5fa7-4bf5-87c8-75282b70b62b" /> <br/>
<img width="1024" height="768" alt="brew render 4" src="https://github.com/user-attachments/assets/9b1b0010-141f-4d14-878b-9b569f0a0626" /> <br/>
<img width="1004" height="545" alt="image" src="https://github.com/user-attachments/assets/4e83c067-0b15-4be1-abde-6e0ec3972302" /> <br/>
<img width="961" height="551" alt="image" src="https://github.com/user-attachments/assets/47275db1-fd38-4804-be76-7a869912371e" /> <br/>


## PCB + Schematics
<img width="1262" height="646" alt="image" src="https://github.com/user-attachments/assets/152eda34-c84f-4e1b-a323-e8bd887ec67c" /> <br/>
<img width="1013" height="514" alt="image" src="https://github.com/user-attachments/assets/bbf0c5b5-07e9-4062-b97d-45cc0ce18356" /> <br/>
<img width="931" height="488" alt="image" src="https://github.com/user-attachments/assets/ab53183c-67b4-43ef-b34a-5a0a6b388fe8" /> <br/>
<img width="945" height="496" alt="image" src="https://github.com/user-attachments/assets/bd592314-e69d-438a-9cba-c0288ba08c02" /> <br/>
<img width="894" height="460" alt="image" src="https://github.com/user-attachments/assets/239cfca0-1f70-4331-881d-00d92b221100" /> <br/>

## BOM
| part name                  | quantity         | purpose                                          | Shown Price       | Actual Cost  |   |
|----------------------------|------------------|--------------------------------------------------|-------------------|------------------------------|---|
| Gateron Cherry MX Switches | 82               | Keyswitches that are pressed                     | $8.20             | $8.20                        |   |
| EC11 Rotary Encoders       | 2                | Rotary knobs for incrementing items, macros      | $1.37             | $0 (Already owned)           |   |
| SK6812 LEDs 5050           | 22               | RGB LEDs to light up the keyboard                | $5.70             | $0 (Already owned)           |   |
| Raspberry Pi Pico          | 1                | Main microcontroller                             | $0.99             | $0 (Already owned)           |   |
| 1N4148 Diodes              | 85               | Organizes rows and columns for microcontroller   | $1.23             | $1.23                        |   |
| Case (3D print)            | 1 Full, 4 Pieces | Holds the plate, style                           | 3D Printed        | $0 (Will 3D print myself)    |   |
| Plate (3D print)           | 1 Full, 2 Pieces | Holds the PCB, gives sound                       | 3D Printed        | $0 (Will 3D print myself)    |   |
| PCB                        | 1                | Holds components and wires them                  | $40.22            | $40.22                       |   |
| USB A Female Connectors    | 5                | Connectors for built in USB hub                  | $3.10             | $3.10                        |   |
| Capacitors                 | 7                | Required for USB hub circuit                     | $2.78             | $2.78                        |   |
| SL2.1A IC                  | 1                | IC used for USB hub                              | $1.65             | $1.65                        |   |
| 6.00u Stabilizers          | 1                | Stabilizes the space bar                         | $4.06             | $4.06                        |   |
| 2.00u Stabilizers          | 4                | Stabilizes both shift keys, enter, and backspace | Included w/ Above | Included w/ Above            |   |
| 75% Keycaps                | 1 Set            | Covers keyswitches                               | $14.20            | $14.20                       |   |
| Rotary Encoder Knobs       | 2                | Covers the encoders                              | 3D Printed        | $0 (Will 3D print myself)    |   |
| #8-32 1/2" Screws          | 6                | Assembles the case and plate                     | $2.22             | $0 (Already Owned)           |   |
|                            |                  |                                                  |                   |                              |   |
|                            |                  |                                                  |                   | Actual Total Cost (tax + shipping): $82.76    |   |



> dedicated to richard tu <br/>
> happy birthday, friend.
