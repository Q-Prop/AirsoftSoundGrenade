# Airsoft Sound Grenade


Pull the pin, four seconds later it beeps loudly.

## Circuit Board
The schematic in Airsoft Sound Grenade Schematic.pdf was designed in EasyEDA, for easy PCB production.

I use JLCPCB to make circuit boards and populate the surface mount components.
The files in teh JLCPCB folder are the Gerber file of teh PCB layout and the BOM and Pick&Place files required by JLCPCB.
My last order of 30 PCBs cost me US$160 (approximately NZ$250) including shipping.

JLCPCB are occasionally out of stock of parts, be very careful about choosing a suitable substitute!!

The Capacitor and inductor in teh lower middle of the board need mechanbical attachment to teh PCB so they don't tear off and stop the grenade working. I use epoxy (Araldite), an 18ml syringe full will lock down a batch of 30 boards.

In addition to the surface mount components, you will need a miniature micro switch, a 2xAAA battery holder, and a buzzer.

## Programming
Finally you will need to use an in circuit programmer to program the boards.
The Arduino code is in AirsoftSoundGrenade.ino 
