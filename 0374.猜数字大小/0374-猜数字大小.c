/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

int guessNumber(int n){
	int left = 1;
    int right = n;
    int mid;
    
    while(left <= right)
    {
        mid = left + (right - left) / 2;
        if(0 == guess(mid))
        {
            return mid;
        }
        else if(1 == guess(mid))
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return 0;
}