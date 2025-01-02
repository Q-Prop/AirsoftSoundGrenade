# Airsoft Sound Grenade

This repo is a work in progress, subject to my time and energy.

These grenades were designed specifically for the limitations at my local Airsoft field and to avoid teh problems of gas pwowered grenades.

Pull the pin, four seconds later it beeps loudly and lights flash.


## 3D printed enclosures
I haven't included the files for enclosures yet.
I have both a MK2 pineapple version and an M84 flashbang shell.

![Mk2 and M84 grenades](https://github.com/Q-Prop/AirsoftSoundGrenade/blob/main/M2andM84.jpg)


## Circuit Board
The schematic in Airsoft Sound Grenade Schematic.pdf was designed in EasyEDA, for easy PCB production.

I use JLCPCB to make circuit boards and populate the surface mount components.
The files in the JLCPCB folder are the Gerber file of the PCB layout and the BOM and Pick&Place files required by JLCPCB.
My last order of 30 PCBs cost me US$160 (approximately NZ$250) including shipping.

JLCPCB are occasionally out of stock of parts, be very careful about choosing a suitable substitute!!

The Capacitor and inductor in the lower middle of the board need mechanbical attachment to the PCB so they don't tear off and stop the grenade working. I use epoxy (Araldite), an 18ml syringe full will lock down a batch of 30 boards.

In addition to the surface mount components, you will need a miniature micro switch, a 2xAAA battery holder, and a buzzer.

## Programming
Finally you will need to use an in circuit programmer to program the boards.
The Arduino code is in AirsoftSoundGrenade.ino 
