#include <string>
#include <vector>

void triangular_number() {
    int n = 12;
    int tri = n * (n + 1) / 2;
    (void)tri;
}

void digit_product() {
    int n = 2345;
    int product = 1;
    while (n > 0) {
        product *= (n % 10);
        n /= 10;
    }
    (void)product;
}

void least_multiple() {
    int a = 6, b = 8;
    int x = a, y = b;
    while (y != 0) {
        int t = x % y;
        x = y;
        y = t;
    }
    int lcm = a / x * b;
    (void)lcm;
}

void swap_values() {
    int a = 5, b = 11;
    int tmp = a;
    a = b;
    b = tmp;
    (void)a;
    (void)b;
}

extern "C" int amber_maple();
extern "C" void prime_orbit();
extern "C" void cedar_beacon();
extern "C" void prime_meadow();
extern "C" void misty_ripple();

int main() {
    triangular_number();
    digit_product();
    least_multiple();
    swap_values();
    prime_orbit();
    cedar_beacon();
    prime_meadow();
    misty_ripple();
    return amber_maple();
}
