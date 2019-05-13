int photosensor = A0;
int value; 

void setup() {
}

void loop() {
    
    value = analogRead(photosensor);
    
    if (value > 50)
    {
        Particle.publish("light", "bright");
    }
    else
    {
        Particle.publish("light", "dark");
    }
    
    delay(3000);               // Wait for 3 seconds
}