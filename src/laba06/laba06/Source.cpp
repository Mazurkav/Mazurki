#define N 15
int main()
{
	char aggregate = '_';
	char SIZE[N];
	char word[N] = "Ivanov";
	int spase_counter = 0;
	SIZE[N - 1] = '\0';
	for (int i = 0; i < N - 1; i++) {
		if (word[i] == '_')
			spase_counter++;
	}
	for (int i = 0; i < spase_counter / 2; i++) {
		SIZE[i] = aggregate;
	}
	for (int i = 0; i < N - spase_counter - 1; i++) {
		SIZE[i + spase_counter / 2] = word[i];
	}
	for (int i = N - spase_counter / 2 - 1; i < N - 1; i++) {
		SIZE[i] = aggregate;
	}
	return 0;
}