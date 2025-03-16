#include <stdio.h>

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

// Expose function to WASM
int main() {
    return 0;  // Required for WebAssembly compilation
}
