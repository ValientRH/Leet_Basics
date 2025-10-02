class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int total = numBottles;
        int empty = numBottles;
        int newBottles = 0;
        while (empty>=numExchange){
                newBottles++;
                empty-=numExchange;
                numExchange++;
                empty++;
            }
        
        return total+newBottles;
    }
};