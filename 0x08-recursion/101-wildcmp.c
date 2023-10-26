#include "main.h"

/**
 * move_past_star - iterates tlassak asterisk
 * @s2: tani string, imkan contain wildcard
 *
 * Return: pointer past star
 */

char *move_past_star(char *s2)
{

	if (*s2 == '*')
		return (move_past_star(s2 + 1));
	else
		return (s2);

}

/**
 * inception - makes magic a reality
 * @s1: owal string
 * @s2: laagbani string, imkkan contain wildcard
 *
 * Return: one ila identical, zero fihhalt false
 */

int inception(char *s1, char *s2)
{

	int ret = 0;

	if (*s1 == 0)
	return (0);
	if (*s1 == *s2)
		ret += wildcmp(s1 + 1, s2 + 1);
	ret += inception(s1 + 1, s2);
	return (ret);

}

/**
 * wildcmp - kikaran joj strings lexicographically
 * @s1: awal string
 * @s2: tani string, imkan contain wildcard
 *
 * Return: one ila identical, zero ila kkatae
 */

int wildcmp(char *s1, char *s2)
{

	int ret = 0;

	if (!*s1 && *s2 == '*' && !*move_past_star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = move_past_star(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			ret += wildcmp(s1 + 1, s2 + 1);
		ret += inception(s1, s2);
		return (!!ret);
	}
	return (0);

}
