## Exibir recursivo

```c
void exibir (int n)
{
	if (n>0)
	{
		exibir(n-1);
		printf(%d, n);
	}
}
// exibir(10)
//vai exibir 10,9,8...1

void exibir (int n)
{
	if (n>0)
	{
		printf(%d, n);
		exibir(n-1);
	}
}
//exibir (10)
//vai exibir de 1,2,3...10
```
