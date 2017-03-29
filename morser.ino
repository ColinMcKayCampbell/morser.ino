//MORSER.INO
//ITU standard Morse code string translation for Arduino's built-in LED by Anfarwol (@adrianvert)

//Supported characters:
//English alphabet letters;
//numbers from 0 to 9;
//symbols ".", ",", "?", "'", "!", "/", "(", ")", ":", ";", "=", "+", "-", """ and "@".

int dot_length = 417;
String message = "SOS";

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  
}

void dot() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dot_length);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dot_length);
}

void dash() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(dot_length * 3);
  digitalWrite(LED_BUILTIN, LOW);
  delay(dot_length);
}

void space(){
	digitalWrite(LED_BUILTIN, LOW);
	delay(dot_length * 2);
}

void morse(String message) {
message.toLowerCase();

for (int it = 0; it < message_length; it++) {
		switch(message[it]){
			case ' ':
						digitalWrite(LED_BUILTIN, LOW);
						delay(dot_length * 2);
						break;

			case 'a':	dot(); dash(); space(); break;
						
			case 'b':	dash(); dot(); dot(); dot(); space(); break;

			case 'c':	dash(); dot(); dash(); dot(); space(); break;

			case 'd':	dash(); dot(); dot(); space(); break;

			case 'e':	dot(); space(); break;

			case 'f':	dot(); dot(); dash(); dot(); space(); break;

			case 'g':	dash(); dash(); dot(); space(); break;

			case 'h':	dot(); dot(); dot(); dot(); space(); break;

			case 'i':	dot(); dot(); space(); space(); break;

			case 'j':	dot(); dash(); dash(); dash(); space(); break;

			case 'k':	dash(); dot(); dash(); space(); break;

			case 'l':	dot(); dash(); dot(); dot(); space(); break;

			case 'm':	dash(); dash(); space(); break;

			case 'n':	dash(); dot(); space(); break;

			case 'o':	dash(); dash(); dash(); space(); break;

			case 'p':	dot(); dash(); dash(); dot(); space(); break;

			case 'q':	dash(); dash(); dot(); dash(); space(); break;

			case 'r':	dot(); dash(); dot(); space(); break;

			case 's':	dot(); dot(); dot(); space(); break;

			case 't':	dash(); space(); break;

			case 'u':	dot(); dot(); dash(); space(); break;

			case 'v':	dot(); dot(); dot(); dash(); space(); break;

			case 'w':	dot(); dash(); dash(); space(); break;

			case 'x':	dash(); dot(); dot(); dash(); space(); break;

			case 'y':	dash(); dot(); dash(); dash(); space(); break;

			case 'z':	dash(); dash(); dot(); dot(); space(); break;

			case '0':	dash(); dash(); dash(); dash(); dash(); space(); break;

			case '1':	dot(); dash(); dash(); dash(); dash(); space(); break;

			case '2':	dot(); dot(); dash(); dash(); dash(); space(); break;

			case '3':	dot(); dot(); dot(); dash(); dash(); space(); break;

			case '4':	dot(); dot(); dot(); dot(); dash(); space(); break;

			case '5':	dot(); dot(); dot(); dot(); dot(); space(); break;

			case '6':	dash(); dot(); dot(); dot(); dot(); space(); break;

			case '7':	dash(); dash(); dot(); dot(); dot(); space(); break;

			case '8':	dash(); dash(); dash(); dot(); dot(); space(); break;

			case '9':	dash(); dash(); dash(); dash(); dot(); space(); break;

			case '.':	dot(); dash(); dot(); dash(); dot(); dash(); space(); break;

			case ',':	dash(); dash(); dot(); dot(); dash(); dash(); space(); break;

			case '?':	dot(); dot(); dash(); dash(); dot(); dot(); space(); break;

			case '\'':	dot(); dash(); dash(); dash(); dash(); dot(); space(); break;

			case '!':	dash(); dot(); dash(); dot(); dash(); dash(); space(); break;

			case '/':	dash(); dot(); dot(); dash(); dot(); space(); break;

			case '(':	dash(); dot(); dash(); dash(); dot(); space(); break;

			case ')':	dash(); dot(); dash(); dash(); dot(); dash(); space(); break;

			case ':':	dash(); dash(); dash(); dot(); dot(); dot(); space; break;

			case ';':	dash(); dot(); dash(); dot(); dash(); dot(); space(); break;

			case '=':	dash(); dot(); dot(); dot(); dash(); space(); break;

			case '+':	dot(); dash(); dot(); dash(); dot(); space(); break;

			case '-':	dash(); dot(); dot(); dot(); dot(); dash(); space(); break;

			case '"':	dot(); dash(); dot(); dot(); dash(); dot(); space(); break;

			case '@':	dot(); dash(); dash(); dot(); dash(); dot(); space(); break;
			
			default: e(); e(); e(); e(); e(); e(); e(); e(); space();
		}
    }

	digitalWrite(LED_BUILTIN, LOW);
	delay(dot_length * 6);
	return;

}

void loop() {    
  morse(message);  
}
