
  int tmp,y = 0;
  while(x != 0){
        tmp = y * 10 + x % 10;
        if(x>0&&(tmp/10 < y))  return 0;
        if(x<0&&(tmp/10 > y))  return 0;
        y = tmp;
        x /= 10;
    }
    return y;
