int sv[MAXN];
void sieve(){
	memset(sv,-1,sizeof(sv));
	forr(i,2,MAXN)if(sv[i]<0)for(ll j=1LL*i*i;j<MAXN;j+=i)sv[j]=i;
}
