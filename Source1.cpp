int combination(int n,int r)
{
	if (n == r || r == 0)
		return 1;
	else
		return combination(n - 1, r - 1) + combination(n - 1, r);
}