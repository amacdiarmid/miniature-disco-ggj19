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

//int LEDarray[18] ={-1, 24, -1, 6, -1, 7, -1, 8, -1, 9, -1, 10, -1, 11, -1, 12, -1, 13};
int LEDarray[18] ={24, -1, 6, -1, 7, -1, 8, -1, 9, -1, 10, -1, 11, -1, 12, -1, 13,-1};
int curCounter = 24;

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
  pinMode(24,OUTPUT);
  Serial.begin(9600);
  Serial.setTimeout(5);

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

     
  digitalWrite(24,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
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
  }
}