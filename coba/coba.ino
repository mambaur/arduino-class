long timeCounter; // milliseconds counter  
long timePassed; // The actual milliseconds time  
  
// We need a "loop" doing event 1 every 10 ms, one doing event 2 every 5 ms  
// and one doing event 3 every 25 ms  
long delay1 = 10;    // ms for cycle of event 1  
long delay2 = 5;     // ms for cycle of event 2  
long delay3 = 25;    // ms for cycle of event 3  
  
// Counters for the number of triggered events before the  
// corresponding event starts  
int countEvent1, countEvent2, countEvent3;  
  
int TRIGGER = 5; // ms to trigger the milliseconds timer  
  
int MAX1 = 2; // Number or triggered milliseconds to start event1  
int MAX2 = 1; // Number or triggered milliseconds to start event2  
int MAX3 = 5; // Number or triggered milliseconds to start event3  
  
// Initialisation  
void setup (){  
     timeCounter = millis(); // read the actual internal time  
     timePassed = 0; // we start with no time passed  
  
     countEvent1 = 0;  
     countEvent2 = 0;  
     countEvent3 = 0;  
}  
  
// Infinite cycle  
void loop() {  
  
     // Read the actual time  
     timePassed = millis() - timeCounter;  
     // The smallest unit of time that should trigger an event is for event 2 (5 ms)  
     // so our trigger should count this smaller unit  
  
     // Check if the time passed after last reading is the trigger time  
     if(timePassed >= TRIGGER) {  
          // It's time to manage the events  
          if(++countEvent1 == MAX1){  
               // Reset the trigger and start the event  
               event1();  
               countEvent1 = 0;  
          } // Event 1 ???  
            
          // It's time to manage the events  
          if(++countEvent1 == MAX2){  
               // Reset the trigger and start the event  
               event2();  
               countEvent2 = 0;  
          } // Event2 ???  
  
          // It's time to manage the events  
          if(++countEvent3 == MAX3){  
               // Reset the trigger and start the event  
               event3();  
               countEvent3 = 0;  
          } // Event3 ???  
  
     } // Trigger ??  
  
} // LOOP  
  
// ============ Event functions  
  
void event1() {  
digitalWrite (8,HIGH);
}  
  
void event2() {  
digitalWrite (8,HIGH);
}  
  
void event3() {  
digitalWrite (8,HIGH);
}  
