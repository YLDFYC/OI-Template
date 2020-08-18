//:~ @author RLDF
template<typename T> inline T power(T a, T b, T p) {
    T res(1);
    for (; b; b >>= 1) {
        if (b & 1)
            res = res * a % p;
        a = a * a % p;
    }
    return res;
}
