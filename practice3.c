/*@
  requires \valid(i) && \valid(j);
  requires (*i == 0 && *j == -2);
  assigns *i, *j;
  ensures *i * *j == 6;
*/
void ejercicio(int *i, int *j) {
    *j = 3;  // -2 + 3 = 1
    *i = 2;  // 0 + 2 = 2
}