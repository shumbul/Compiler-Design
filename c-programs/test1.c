
int f(int a)
{
	if(a==1)return 1;
	if(a==0)return 1;
	return f(a-1)+f(a-2);
}
void main()
{
	if(f(6) != 13)
		printf("FAIL\n");
	else
		printf("PASS\n");
}
