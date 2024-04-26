#define A 2
#define B 3
#define C 4
#define D 5

void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
}

void awrite(int a, int b, int c, int d) {
  digitalWrite(A, a);
  digitalWrite(B, b);
  digitalWrite(C, c);
  digitalWrite(D, d);
}

void onestepf(int delay1) {
  awrite(1, 0, 0, 0);
  delay(delay1);
  awrite(1, 1, 0, 0);
  delay(delay1);
  awrite(0, 1, 0, 0);
  delay(delay1);
  awrite(0, 1, 1, 0);
  delay(delay1);
  awrite(0, 0, 1, 0);
  delay(delay1);
  awrite(0, 0, 1, 1);
  delay(delay1);
  awrite(0, 0, 0, 1);
  delay(delay1);
  awrite(1, 0, 0, 1);
  delay(delay1);
}

void onestepb(int delay1) {
  awrite(0, 0, 0, 1);
  delay(delay1);
  awrite(0, 0, 1, 1);
  delay(delay1);
  awrite(0, 0, 1, 0);
  delay(delay1);
  awrite(0, 1, 1, 0);
  delay(delay1);
  awrite(0, 1, 0, 0);
  delay(delay1);
  awrite(1, 1, 0, 0);
  delay(delay1);
  awrite(1, 0, 0, 0);
  delay(delay1);
  awrite(1, 0, 0, 1);
  delay(delay1);
}

void loop() {

  onestepf(1);
  
}
