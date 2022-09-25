int extended_gcd(int a, int b, int *x, int *y){
    if (a == 0){
        *x = 0;
        *y = 1;
        return b;
    }
    int x1, y1;
    int gcd = extended_gcd(b%a, a, &x1, &y1);
    *x = y1 - (b/a) * x1;
    *y = x1;
    return gcd;
}
bool linear_diophantine(int a, int b, int c, int *x, int *y){
    int x0, y0;
    int g = extended_gcd(abs(a), abs(b), &x0, &y0);
    if(c%g) return false;

    *x = x0 * (c/g);
    *y = y0 * (c/g);

    if(a<0)*x=-*x;
    if(b<0)*y=-*y;

    return true;
}