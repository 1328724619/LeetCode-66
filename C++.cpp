class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        for(int i = digits.size() - 1; i >= 0; i--)     //loop from back to the beginning
        {
            if(digits[i] < 9)               //if the last digit is smaller than 9
            {
                digits[i]++;                //add 1 to the last digit
                
                return digits;              //after adding 1, return the value added
            }
            digits[i] = 0;                  //if the last digit is bigger than 9, then set it to 0
        }
        digits.insert(digits.begin(), 1);   //if the digit is bigger than 9, then insert 1 to the beginning of the result from digits[i] = 0; EX:digits[9]; output:[1,0];

        return digits;
    }
};
