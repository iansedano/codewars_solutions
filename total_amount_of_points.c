int points(const char* const games[10]) {

    int i;
    char game[3];
    int inc;
    int sum = 0;

    for (i = 0; i < 10; i++) {
    
    
        char game[] = *games[i];

        if (game[0] > game[2]) {

            sum += 3;

        } else if (game[0] == game[2]) {

            sum += 1;
        }
    
    }

    return sum;

}