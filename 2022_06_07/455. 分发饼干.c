int cmp(const void* e1, const void* e2){
    return *(int*)e1 > *(int*)e2;
}
int findContentChildren(int* g, int gSize, int* s, int sSize){
    qsort(g, gSize, sizeof(int), cmp);
    qsort(s, sSize, sizeof(int), cmp);
    int ans = 0;
    int gi = 0, si = 0;
    while(gi < gSize && si < sSize){
        if( g[gi] <= s[si]){
            gi++;
            ans++;
        }
        si++;
    }
    return ans;
}