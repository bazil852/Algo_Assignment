const int PatBase= 227;
const int PatMax = 1000000;
//This is the function to create the rolling hash function.
int rolling_Hash(const string& s){
         int rolling = 0:
        int size=s.size();
        for (int i = 0; i < size; i+=1) {
            rolling = rolling* PatBase + s[i];
             rolling %= PatMax;
   }
   return r;
}

//The main rabin karp Function:
int rabin_karp(const string& n, const string& hstack) {
   int h1 = hash(n);
   int h2 = 0;
   int power = 1;
   for (int i = 0; i < n.size(); i++)
      power = (power * P_B) % P_M;
   for (int i = 0; i < hstack.size(); i++) {
      h2 = h2*P_B + hstack[i];
      h2 %= P_M;
      if (i >= n.size()) {
         h2 -= power * hstack[i-n.size()] % P_M;
         if (h2 < 0)
            h2 += P_M;
      }
      if (i >= n.size()-1 && h1 == h2)
         return i - (n.size()-1);
   }
   return -1;
