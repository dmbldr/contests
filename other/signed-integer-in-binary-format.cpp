/// Задание: не используя дополнительных библиотек c++ вывести знаковое целое число в бинарном виде
void bin_iter(int n)
{
  if (n >= 0) printf("0");
  else printf("1");
  for(int i = 1 << 30; i > 0; i /= 2)
  {
    (n & i) ? printf("1") : printf("0");
  }
}
