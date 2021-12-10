
//this code are necessary to run soil moisture sensor
int ledgreen=11;
int ledred=12;
int sensor=2;
int relay=10;
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
  Serial.println(" Irrigation is in process check if there water in reservoir ");
  			
  delay(100);
  Serial.write(26);  	
    }
    delay(1);
  }
 x = val1; // save the new state in our variable
  
  }
}

 
 
		  

