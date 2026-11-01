const int LIM = 1000000;

vector<int> spf(LIM + 1);

void sieve() {
    for (int i = 0; i <= LIM; i++)
        spf[i] = i;

    for (int i = 2; i * i <= LIM; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j <= LIM; j += i) {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

vector<int> prime_factors(int n) {
    vector<int> pf;

    while (n > 1) {
        pf.pb(spf[n]);
        n /= spf[n];
    }

    return pf;
}