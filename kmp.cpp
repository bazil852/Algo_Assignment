Function KMP_Search( char* pattern, char* text)
	{
		int m= lengthofstring(pattern);
		int n= lengthofstring(text);
		int lps[m];
		computelps(pattern,m,lps);
		int i=0;
		int j=0;
		while (i<n){
			if(pattern[j]==txt[i]){
				j+=1;
				i+=1;
				if (j==m){
					print<<"Pattern at index " << i-j<<endl;
					j=lps[j-1];
					else if (i<n and pattern[j] != text[i]){
			if(j isnot equal to 0)
				j=lps[j-1];	
			else 
				i+=1;
}
}
}
}
	void computelpsarray(char* pattern, int m, int* lps)
{
	int length;
	lps[0]=0;
	int i=1;
	while (i<m)
{	if (pattern[i] ==pat[length]){
	length+=1;
	lps[i]=length;
	i+=1;	
	}
	else {
		if(length is not equal to 0){
			length=lps[lenght-1];
}
	else{
		lps[i]=0;
		i+=1;
}
	}
}
