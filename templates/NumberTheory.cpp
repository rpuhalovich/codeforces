ll gcd(ll x, ll y) {
    if (x == 0) return y;
    if (y == 0) return x;
    return gcd(y, x % y);
}

bool isprime(ll n) {
    if (n < 2) return false;
    for (ll x = 2; x * x <= n; x++) {
        if (n % x == 0) return false;
    }
    return true;
}
