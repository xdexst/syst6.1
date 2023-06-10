int main() {
	int const N=20;
	int f1=1;
	int f2=1;
	int temp=0;
	int i;
	int v[N];
	v[0]=f1;
	v[1]=f2;
	for (int i=2; i<N; i++) {
		temp=f2;
		f2=f1+f2;
		f1=temp;
		v[i]=f2;
	}
	for  (int i=0; i<N; i++) {
		printf("v[%d] = %d\n", i, v[i]);
	}
	return 0;
}
