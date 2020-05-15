void moveZeroes(int* nums, int numsSize){
    int i, j=1;
    for (i=0; i+j<numsSize; i++){
        if(nums[i]==0){
            if(nums[i+j]==0){
                j=j+1;
                i=i-1;
            }
            else{
                nums[i]=nums[i+j];
                nums[i+j]=0;
            }
        }
    }
}
