/**Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.**/
void moveZeroes(int* nums, int numsSize) {
    int index=0;
    while(index<numsSize){
        if(nums[index]==0){
            int j;
            for( j=index+1;j<numsSize;j++){
                nums[j-1]=nums[j];
            }
            nums[j-1]=0;numsSize--;
        }
        else index++;
    }
    
}
