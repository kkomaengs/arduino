int R=3;
int G=5;
int B=9;

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}
// the loop function runs over and over again forever
void loop() {
  
  setColor(255, 0, 0); delay(1000);  // red
  setColor(0,204, 0); delay(1000);  //green
  setColor(0, 0, 204); delay(1000);  //blue
  }

  void setColor(int red, int green, int blue)
    {analogWrite(R, red);
    analogWrite(G, green);
    analogWrite(B, blue);
    }
