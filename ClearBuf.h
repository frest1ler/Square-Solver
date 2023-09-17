void Clear_Buffer ();

void Clear_Buffer()
{
	char clear = 0;    // TODO: NOT CLEAR

	do
	{
        clear = getchar();
	} while (clear != '\n' && clear != EOF);
}
