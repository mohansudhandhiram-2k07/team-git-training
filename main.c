#include <stdio.h>

// ====================================================================
// TEAM EXERCISE: WAREHOUSE INVENTORY SYSTEM
// ====================================================================
// TRAINING GOAL: Code Reviews & Edge Cases!
// 
// COMPANY RULES FOR EVERYONE:
// 1. The inventory can NEVER go below 0 (No negative stock).
// 2. If it drops below 0, return 0.
// 3. The inventory can NEVER go above 200 (Maximum warehouse capacity).
// 4. If it goes over 200, return 200.
//
// REVIEWERS: Reject the PR if your teammate's code violates these rules!

// --- 1. Function Prototypes ---
// Teammates: Uncomment your prototype when it's your turn.
int mohan_receive_shipment(int stock, int amount);
// int nandhitha_fulfill_order(int stock, int amount);
 int nandhana_process_returns(int stock, int amount);
// int kumaar_damage_writeoff(int stock, int amount);
 int nandhitha_fulfill_order(int stock, int amount);
// int nandhana_process_returns(int stock, int amount);
int kumaar_damage_writeoff(int stock, int amount);
int naveen_store_transfer(int stock, int amount);

int main(void) {
    printf("=== Global Tech Warehouse System ===\n\n");
    
    int stock = 100; // Starting stock
    printf("Initial Stock: %d (Max Capacity: 200)\n\n", stock);

    // --- 2. Pipeline Execution ---
    // Teammates: Uncomment your section. 
    // Notice how EVERY transaction attempts to break the rules!

    // --- Mohan's Task ---
    stock = mohan_receive_shipment(stock, 150);
    printf("After Mohan's Shipment (+150): %d\n", stock);
    

    // --- Nandhitha's Task ---
    stock = nandhitha_fulfill_order(stock, 250); 
    printf("After Nandhitha's Order (-250): %d\n", stock);
    

    // --- Nandhana's Task ---  
    stock = nandhana_process_returns(stock, 500);
    printf("After Nandhana's Returns (+500): %d\n", stock);

<<<<<<< HEAD

    // result = naveen_mod(result, 7);
    // printf("After Naveen's Mod (%%7): %d\n", result);
=======
>>>>>>> bc7cb5bf1b509ad3df336f4bd3cedef295e4cb93

    // --- Kumaar's Task ---
    stock = kumaar_damage_writeoff(stock, 300);
    printf("After Kumaar's Write-off (-300): %d\n", stock);
    

    //--- Naveen's Task ---
    stock = naveen_store_transfer(stock, 250);
    printf("After Naveen's Transfer In (+250): %d\n", stock);
    

    printf("\n=== Final Warehouse Stock: %d ===\n", stock);
    return 0;
}

// --- 3. Function Definitions ---
// Teammates: Write your logic below. 

// Mohan
int mohan_receive_shipment(int stock, int amount) {
    
    return 0; 
}


// Nandhitha
int nandhitha_fulfill_order(int stock, int amount) {
    
    return 0;
}

// Nandhana
int nandhana_process_returns(int stock, int amount) {
    
    return 0;
}*/

<<<<<<< HEAD
int naveen_mod(int cv, int mv) {
    return cv % mv;m
=======
// Kumaar
int kumaar_damage_writeoff(int stock, int amount) {
     stock = stock - amount;
    if (stock < 0) {
        return 0;
    }
    return stock;
}

//Naveen
int naveen_store_transfer(int stock, int amount) {
    stock=stock-amount;

    return (stock<201)?stock:200;
>>>>>>> bc7cb5bf1b509ad3df336f4bd3cedef295e4cb93
}
