int* prefixFunction(string s) {
    int size=s.size();
    int *p[s];
    int j = 0;
    for (int i = 1; i < size; i+=1) {
        while (j > 0 and s[j] != s[i])
            j = p[j-1];
        if (s[j] == s[i])
            j++;
        p[i] = j;
    }   
    return p;
}
