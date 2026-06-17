#include <stdio.h>

// --- 1. Function Prototypes ---
// Teammates: Uncomment your specific prototype when it's your turn.
int mohan_add(int current_value, int add_val);
int nandhitha_sub(int current_value, int sub_val);
 int nandhana_mul(int current_value, int mul_val);
// int kumaar_div(int current_value, int div_val);
// int naveen_mod(int current_value, int mod_val);

int main(void) {
    printf("--- Initiating the Math Pipeline ---\n\n");

    // We start with a base value of 10
    int result = 10; 
    printf("Initial Base Value: %d\n", result);

    // Mohan's Step (Addition)
    result = mohan_add(result, 15);
    printf("After Mohan's Add (+15): %d\n", result);

    // --- 2. Pipeline Execution ---
    // Teammates: Uncomment your step, make sure you use the 'result' 
    // from the previous person, and save it back to 'result'.

    result = nandhitha_sub(result, 5);
    printf("After Nandhitha's Sub (-5): %d\n", result);

    result = nandhana_mul(result, 2);
    printf("After Nandhana's Mul (*2): %d\n", result);

    // result = kumaar_div(result, 4);
    // printf("After Kumaar's Div (/4): %d\n", result);

    // result = naveen_mod(result, 7);
    // printf("After Naveen's Mod (%%7): %d\n", result);

    printf("\n--- Final Pipeline Output: %d ---\n", result);
    return 0;
}

// --- 3. Function Definitions ---

// The initial example
 int mohan_add(int current_value, int add_val) {
    return current_value + add_val;
}

// Teammates: Define your functions below!
// They should look very similar to Mohan's function above.


int nandhitha_sub(int current_value, int sub_val) {
    return current_value - sub_value;
}



int nandhana_mul(int current_value, int mul_val) {
    return current_value * mul_val;
}


/*
int kumaar_div(int current_value, int div_val) {
    // Write your logic here
}
*/

/*
int naveen_mod(int current_value, int mod_val) {
    // Write your logic here
}
*/