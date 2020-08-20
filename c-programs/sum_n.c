int sum_n (int n) {
    int result = 0;

    while (n) {
        result = result + n;
        n--;
    }

    return result;
}

int main () {
    return sum_n(10);
}
