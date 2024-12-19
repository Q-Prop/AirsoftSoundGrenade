/*
Airsoft sound grenade charge
Arduino powers on when the grenade pin is pulled.
A quick beep to acknowledge arming, detonation after 4 seconds
Replacing the pin powers off the device & when the pin ispulled again the timer restarst
*/

int DelayCount = 4;
int PinBeepsLED = 1;  // SW1 enables warning beeps during countdown
int BoostEnable = 3;  // Enables boostconverter in grenade, disabled between location activations.
int PinSounder = 4;   // detonation sounds
int SirenTime = 0;


// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(PinSounder, OUTPUT);
  digitalWrite(PinSounder, LOW);
  SirenTime = DelayCount / 2;
  pinMode(PinBeepsLED, OUTPUT);
  digitalWrite(PinBeepsLED, LOW);
  pinMode(BoostEnable, OUTPUT);
  digitalWrite(BoostEnable, HIGH);
}

//Function to sound beep
void DoBeep(int BTime) {
  digitalWrite(PinBeepsLED, HIGH); 
  digitalWrite(PinSounder, HIGH); //Siren
  delay(BTime);
  digitalWrite(PinBeepsLED, LOW);
  digitalWrite(PinSounder, LOW);
}
 
 void loop() {
  DoBeep(50); //Arming beep
  delay (DelayCount * 1000); //Delay for detonation

  DoBeep(200);   // Short beep to warn of impending doom
  delay(100);

  DoBeep(SirenTime * 1000); // Scream as the explosion for some seconds
 
  while (true) {
    delay(4800);
    digitalWrite(BoostEnable, HIGH);
    delay (100);
    digitalWrite(PinBeepsLED, HIGH);
    DoBeep(10);
    delay(90);
    digitalWrite(PinBeepsLED, LOW);
    digitalWrite(BoostEnable, LOW);
    }
}
