/**
 * cap_string - capitalizes all characters in a string
 * @s: the pointer to the string to be capitalized
 *
 * Return: the sentence with all words capitalized
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i != 0)
		{
			if (s[i-1] == '\n' || s[i-1] == ' ' || s[i-1] == '\t' || s[i-1] == ',' || s[i-1] == ';' || s[i-1] == '.' || s[i-1] == '!' || s[i-1] == '?' || s[i-1] == '(' || s[i-1] == ')' || s[i-1] == '{' || s[i-1] == '}')
				if (s[i] >= 'a' && s[i] <= 'z')
					s[i] = s[i] - 32;
		}
		if (i == 0)
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
	}

	return (s);
}
