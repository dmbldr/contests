/// Задание: написать функцию, удаляющую последовательно дублирующиеся символы в строке
void remove_dups(char* str)
{
    if(str[0] == '\0') return;
    int l = 0;
    int r = 0;
    while(str[r] != '\0')
    {
        if(str[l] != str[r])
        {
            ++l;
            str[l] = str[r];
        }
        ++r;
    }
    str[++l] = '\0';
}
