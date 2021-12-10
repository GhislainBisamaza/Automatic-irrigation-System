
//this code are necessary to run soil moisture sensor
int ledgreen=11;
int ledred=12;
int sensor=2;
int relay=8;
int x;
int val1;

void setup(){
  Serial.begin(9600);
  pinMode(sensor,INPUT);
  pinMode(ledgreen,OUTPUT);
  pinMode(ledred,OUTPUT);
  pinMode(relay,OUTPUT); 
  x=digitalRead(sensor);
  
 Serial.println("AUTO IRRIGATION SYSTEM by BISAMAZA GHISLAIN"); 
}
void loop(){


   if(x == HIGH){
    digitalWrite(ledgreen,LOW);
    
    digitalWrite(relay,HIGH);
    
  digitalWrite(ledred,HIGH);
  delay(100);
  digitalWrite(ledred,LOW);
  delay(100);
    digitalWrite(ledred,HIGH);
  delay(100);
  digitalWrite(ledred,LOW);
  delay(100);
    digitalWrite(ledred,HIGH);
  delay(100);
  digitalWrite(ledred,LOW);
  delay(1);

  }
    if(x == LOW){
   
    digitalWrite(ledred,LOW);
    
    digitalWrite(relay,LOW);
     
    digitalWrite(ledgreen,HIGH);
   
    
    
    
 }
 
    val1 = digitalRead(sensor); //read  input value and store it in val
  {
  if (val1 != x) //button state has chanded
  {
    if (val1 == HIGH) // check if the button is pressed
    {
  Serial.println("");  				
  delay(200);
  Serial.println("");
  delay(200);
  Serial.print("");  	 
  Serial.println("");
  delay(200);
  Serial.println("IRRIGATION IS IN PROCESS CHECK IF THERE IS WATER IN THE RESERVOIR");
  			
  delay(100);
  Serial.write(26);  	
    }
        if (val1 == LOW) // check if the button is pressed
    {
  Serial.println("");  				
  delay(200);
  Serial.println("");
  delay(200);
  Serial.print("");  	 
  Serial.println("");
  delay(200);
  Serial.println(" IRRIGATION PROCESS IS FINISHED  ");
  Serial.println(" ....................................................................");			
  delay(100);
  Serial.write(26);  	
    }
    delay(1);
  }
 x = val1; // save the new state in our variable
  
  }
}

 
 
		  

