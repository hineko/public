a;
main ()
{
  int b = ++a + a, c = b + b, d = c + c, e = d + d, f = e + e, g = f + f, h =
    g + f + c, i = d + b + a, j = h + d;
  char s[] =
    { g + d, h + a, j, j, h + i, f, g + d + e - a, h + i, h + e - b, j, h,
    b + d, --a
  };
  puts (s);
}
