  
void setup() 
{
    
}
 
void loop() 
{
    
  int moist; //create a variable moist
  moist = analogRead(0); //Analog 0 to read data and store in moist
 
  String moisture = (String(moist)); //create a string called moisture to get value from moist
  Particle.publish("moisture", moisture, PRIVATE); //public it to Particle Web IDE console
  delay(30000); //delays for 30 seconds to catch new data 
  
}
