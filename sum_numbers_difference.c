int get_sum(int a , int b) {
    
    int d;
    int sum = 0;
    
    if (a < b) {
      for (d = a; d <= b; d ++) {
        sum += d;
      }
    } else {
      for (d = b; d <= a; d ++) {
        sum += d;
      }
    }
    return sum;
}