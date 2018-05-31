#include <stdio.h>
#include <math.h>

#define MAX_NUMBER 10

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

 /* 
  * 1º Case:
  *
  * 1 = 1/2 + 1/4 + ... + 1/(2^n), n -> infinity
  *
  * 2º Case:
  *
  * 2 = 2/2 + 2/4 + ... + 2/(2^n), n -> infinity
  *
  * n -> infinity (infinity = MAX_NUMBER = 1000)
  *
  * 2 = 2/(2^1) + 2/(2^2) + ... + 2/(2^n)
  *
  */

float zeno_paradox(float number) {
    float sum = 0;

    int i;
    int n = MAX_NUMBER * 1000;

    printf("%0.f = ", number);

    for (i = 1; i < n - 1; ++i) {
        printf("%0.f/%0.lf + ", number, pow(2, i));
        sum += number/(pow(2, i));

        if (i > 50)
            i = n - 1;
    }

    printf("%0.f/%0.lf", number, pow(2, n - 1));

    printf(" = %0.f\n", sum);

    return sum;
}

int main() {

    // So, lets start with a test:
    zeno_paradox(1);


    // You can answer me in Hangouts. What you think that will happen right now?

    // This is TDD. And we are using baby-steps.

    // Let's see if our first test will work.

    // The code worked. But and with the number two?

    zeno_paradox(2);

    // Didn't work.

    // Now it's your time. We will change the pilot of our PP (Pair Programming). Ok?

    // I'll commit this code. Ok? Answer me at Hangouts.

    zeno_paradox((float)pow(2, 10));
}
