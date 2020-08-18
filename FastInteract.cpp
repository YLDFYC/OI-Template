//:~ @author RLDF
//the display type is int
inline int read() {
    int X = 0;
    bool flag = 1;
    char ch = getchar();
    while (!isdigit(ch)) {
        if (ch == '-')
            flag = 0;
        ch = getchar();
    }
    while (isdigit(ch)) {
        X = (X << 1) + (X << 3) + ch ^ 15;
        ch = getchar();
    }
    return flag ? X : ~(X - 1);
}

inline void write(int X) {
    if (X < 0) {
        putchar('-');
        X = ~(X - 1);
    }
    int s[20], top = 0;
    for (; X; s[++top] = X % 10, X /= 10)
        ;
    if (!top)
        s[++top] = 0;
    while (top)
        putchar(s[top--] + '0');
}
