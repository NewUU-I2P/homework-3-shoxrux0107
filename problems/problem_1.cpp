float problemSolution1(float consumed_water) {
    float cost;
    // write your code here

    if (consumed_water >= 30) {
        cost = 13 + (30 * 0.4);
        consumed_water = consumed_water - 30;
    } else{
        cost = 13 + (consumed_water * 0.4);
        consumed_water = 0;
    }

    if (consumed_water >= 20) {
        cost = cost + (20 * 0.12);
        consumed_water = consumed_water - 20;
    } else{
        cost = cost + (consumed_water * 0.12);
        consumed_water = 0;
    }

    if (consumed_water >= 10) {
        cost = cost + (10 * 1.4);
        consumed_water = consumed_water - 10;
    } else{
        cost = cost + (consumed_water * 0.12);
        consumed_water = 0;
    }

    cost = cost + consumed_water * 1.5;

    return cost;
}
