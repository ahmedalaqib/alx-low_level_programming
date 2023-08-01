/**
 * set_string - Set the value of a pointer to a char
 * @s: The address of the pointer
 * @to: A pointer to the value to be set in s
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
