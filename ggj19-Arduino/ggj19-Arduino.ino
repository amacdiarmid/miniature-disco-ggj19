//dial
 #define outputA 4
 #define outputB 5
 int counter = 0; 
 int aState;
 int aLastState;  

//buttons
const int OutButt1 = 2;
const int OutButt2 = 3;
int ButtonState1 = 0;
int ButtonState2 = 0;

//tempre
const int OutButt3 = A0;
int TempState1 = 0;

//int LEDarray[18] ={-1, 2, -1, 6, -1, 7, -1, 8, -1, 9, -1, 10, -1, 11, -1, 12, -1, 13};
int LEDarray[18] ={2, -1, 6, -1, 7, -1, 8, -1, 9, -1, 10, -1, 11, -1, 12, -1, 13,-1};
int curCounter = 2;

//TrackButton
const int NewButton = 3;
int NewButtonState = 0;
int LastButtonState = 0;
int WasButtonPressed = 0;

//LED switch array 

typedef struct 
{
  int UpPortR;
  int UpPortG;
  int DownPortR;
  int DownPortG;
  int UpState;
}Junction;
Junction SwitchArrayPort[9] = { /*9*/Junction{52, 51, 50, 49, HIGH}, /*8*/Junction{48, 47, 46, 45, HIGH}, /*7*/Junction{44, 43, 42, 41, HIGH},
                                /*6*/Junction{40, 39, 38, 37, HIGH}, /*5*/Junction{36, 35, 32, 33, HIGH}, /*4*/Junction{34, 31, 30, 29, HIGH}, 
                                /*3*/Junction{25, 26, 27, 28, HIGH}, /*2*/Junction{21, 53, 23, 24, HIGH}, /*1*/Junction{17, 18, 19, 20, HIGH}};

void setup()
{
  //setup
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(2,OUTPUT);
  Serial.begin(9600);
  Serial.setTimeout(5);

  //trackswitches
  //Junction
  pinMode(17,OUTPUT);
  pinMode(18,OUTPUT);
  pinMode(19,OUTPUT);
  pinMode(20,OUTPUT);
  //Junction
  pinMode(21,OUTPUT);
  pinMode(53,OUTPUT);
  pinMode(23,OUTPUT);
  pinMode(24,OUTPUT);
  //Junction
  pinMode(25,OUTPUT);
  pinMode(26,OUTPUT);
  pinMode(27,OUTPUT);
  pinMode(28,OUTPUT);
  //Junction
  pinMode(32,OUTPUT);
  pinMode(31,OUTPUT);
  pinMode(30,OUTPUT);
  pinMode(29,OUTPUT);
  //Junction
  pinMode(36,OUTPUT);
  pinMode(35,OUTPUT);
  pinMode(34,OUTPUT);
  pinMode(33,OUTPUT);
  //Junction
  pinMode(40,OUTPUT);
  pinMode(39,OUTPUT);
  pinMode(38,OUTPUT);
  pinMode(37,OUTPUT);
  //Junction
  pinMode(44,OUTPUT);
  pinMode(43,OUTPUT);
  pinMode(42,OUTPUT);
  pinMode(41,OUTPUT);
  //Junction
  pinMode(48,OUTPUT);
  pinMode(47,OUTPUT);
  pinMode(46,OUTPUT);
  pinMode(45,OUTPUT);
  //Junction
  pinMode(52,OUTPUT);
  pinMode(51,OUTPUT);
  pinMode(50,OUTPUT);
  pinMode(49,OUTPUT);


  //button pins
  pinMode(OutButt1, INPUT);
  pinMode(OutButt2, INPUT);

  //tempre pinsAaAZSAZXWQQ
  pinMode(OutButt3, INPUT);

  //dial
   pinMode (outputA,INPUT);
   pinMode (outputB,INPUT);
   // Reads the initial state of the outputA
   aLastState = digitalRead(outputA); 

   pinMode(NewButton, INPUT);

  reset();
}
void loop()
{
  Serial.flush();
  
  //dial
   aState = digitalRead(outputA); // Reads the "current" state of the outputA
   // If the previous and the current state of the outputA are different, that means a Pulse has occured
   if (aState != aLastState){     
     // If the outputB state is different to the outputA state, that means the encoder is rotating clockwise
     if (digitalRead(outputB) != aState) { 
       counter ++;
     } else {
       counter --;
     }

     if (counter == 18){
      counter = 0;
     }
     if (counter == -2){
      counter = 16;
     }
     
  digitalWrite(curCounter,LOW);
   curCounter = LEDarray[counter];
   if(curCounter != -1)
   {
    digitalWrite(curCounter,HIGH);
   }
   
     //Serial.print("Position: ");
     //Serial.println(counter);
     //Serial.println("\r\n");
   } 
   aLastState = aState; // Updates the previous state of the outputA with the current state

    //Serial.println("Dial:" + String(counter));

    NewButtonState = digitalRead(NewButton);
    //Serial.println(NewButtonState);
    if(NewButtonState != LastButtonState)
    {
      //remove this for hold to swap track
      if(NewButtonState == HIGH)
      {
        int CounterJunct = counter / 2;
        digitalWrite(SwitchArrayPort[CounterJunct].UpPortR,SwitchArrayPort[CounterJunct].UpState);
        digitalWrite(SwitchArrayPort[CounterJunct].UpPortG,!SwitchArrayPort[CounterJunct].UpState);
        digitalWrite(SwitchArrayPort[CounterJunct].DownPortR,!SwitchArrayPort[CounterJunct].UpState);
        digitalWrite(SwitchArrayPort[CounterJunct].DownPortG,SwitchArrayPort[CounterJunct].UpState);
        SwitchArrayPort[CounterJunct].UpState = !SwitchArrayPort[CounterJunct].UpState;
        //Serial.println("SWap to UP " + String(SwitchArrayPort[CounterJunct].UpState));
        WasButtonPressed = 1;
        delay(100);
      }
    }
    LastButtonState = NewButtonState;
    
  //in unreal?
  if (!Serial.available()) return;

  String str = Serial.readString();
  
  // command to send a float
  if (str == "float")
  {
    float fVal = 12.34f;
    byte* fBuffer = reinterpret_cast<byte*>(&fVal);
    Serial.write(fBuffer, 4);
  }

  // command to send an integer
  else if (str == "int")
  {
    long int lVal = 123456L;
    byte lBuffer[] = {
      byte(lVal & 0xff),
      byte(lVal >> 8 & 0xff),
      byte(lVal >> 16 & 0xff),
      byte(lVal >> 24 & 0xff)
    };
    Serial.write(lBuffer, 4);
  }

  // command to send a line
  else if (str == "lines")
  {
    Serial.println("This is a line.");
    Serial.println("This is another line");
  }
  
  else if (str == "temp")
  {
    String stringOne =  String(TempState1);
    Serial.println(stringOne);
  }
  else if (str == "Dial")
  {
    Serial.println(String(counter));
    delay(100);
    return;
  }
  else if(str == "Reset")
  {
    reset();
  }
  else if(str == "Toggle")
  {
    //int ToggleLight = Serial.read();
    
    Serial.println(" tog");
    delay(100);
    return;
  }
  else if(str == "x")
  {
    Serial.println(String(WasButtonPressed));
    WasButtonPressed = 0;
    delay(100);
    return;
  }
}

void reset()
{
  digitalWrite(2,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);


  for (int thisPin = 0; thisPin < 9; thisPin++) 
  {
    SwitchArrayPort[thisPin].UpState = HIGH;
    digitalWrite(SwitchArrayPort[thisPin].UpPortR, !SwitchArrayPort[thisPin].UpState);
    digitalWrite(SwitchArrayPort[thisPin].UpPortG, SwitchArrayPort[thisPin].UpState);
    digitalWrite(SwitchArrayPort[thisPin].DownPortR, SwitchArrayPort[thisPin].UpState);
    digitalWrite(SwitchArrayPort[thisPin].DownPortG, !SwitchArrayPort[thisPin].UpState);
  }
  

  counter = 0;
  curCounter = 2;
}
