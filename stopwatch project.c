 #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int seconds = 0, minutes = 0, hours = 0;
  char stop;
  
  while (1) {
    // increment seconds every second
    seconds++;
    if (seconds == 60) {
      // increment minutes and reset seconds
      minutes++;
      seconds = 0;
    }
    if (minutes == 60) {
      // increment hours and reset minutes
      hours++;
      minutes = 0;
    }
    // display current time every second
    printf("%02d:%02d:%02d\n", hours, minutes, seconds);
    sleep(1); // delay for 1 second   
 if (kbhit()) { // check if a key has been pressed
      stop = getchar(); // get the key that was pressed
      if (stop == ' ') { // stop the stopwatch if space bar is pressed
        break;
      }
    }
  }
  // display the total elapsed time
  printf("Total elapsed time: %02d:%02d:%02d\n", hours, minutes, seconds);
  return 0;
}
