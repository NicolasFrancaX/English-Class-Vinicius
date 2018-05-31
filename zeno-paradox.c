#include <stdio.h>
#include <math.h>

// I'll comment all the code right here and put in gist.github, ok?
//
// You can talk to me in chat at Hangouts. I'll listenig you.
//

// The Zeno's Paradox work like this:
//
// 1 = 1/2 + 1/4 + 1/8 + 1/16 + ...
//
// I'll show you this.

///float zeno-paradox(float number);

float zeno_paradox(float number) {
    for(int i = 0; i < 1000; i++) {
        pow(2,i);
    }

    return 1;
}

int main() {

    // So, lets start with a test:
    printf("1 = %.0f\n", zeno_paradox(1));


    // You can answer me in Hangouts. What you think that will happen right now?

    // This is TDD. And we are using baby-steps.

    // Let's see if our first test will work.

    // The code worked. But and with the number two?

    printf("2 = %.0f\n", zeno_paradox(2));

    // Didn't work.

    // Now it's your time. We will change the pilot of our PP (Pair Programming). Ok?

    // I'll commit this code. Ok? Answer me at Hangouts.

    // 
}
