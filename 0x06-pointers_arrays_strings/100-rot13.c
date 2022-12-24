#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string pointer
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i, j;
	char input[] = {A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z, a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z};
	char output[] = {N, O, P, Q, R, S, T, U, V, W, X, Y, Z, A, B, C, D, E, F, G, H, I, J, K, L, M, n, o, p, q, r, s, t, u, v, w, x, y, z, a, b, c, d, e, f, g, h, i, j, k, l, m};

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == input[j])
			{
				s[i] = output[j];
			}
		}
		i++;
	}
	return (s);
}
