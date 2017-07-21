#include <stdio.h> 
#include <assert.h> 
#include <stdbool.h> 
#include <string.h>
#include <stdlib.h>

bool isPalindrome(const char * c) {

  if(c==NULL||strlen(c)==0)
	return false;
  
  int left=0, right = strlen(c)-1;
 

  while(left<right) {
    if(c[left]==c[right]||abs(c[left]-c[right])==32)
    {
      left++;
      right--; 
    }
    else
      return false;	
  }
   
  return true;

}


int main() {
	assert(isPalindrome("civic") == true);
	assert(isPalindrome("evitative") == true);
	assert(isPalindrome("radar") == true);
	assert(isPalindrome("stats") == true);
	assert(isPalindrome("abba") == true);
	assert(isPalindrome("aba") == true);
	assert(isPalindrome("aBa") == true);
	assert(isPalindrome("statss") == false);
	assert(isPalindrome("abracadabra") == false);
	printf("Lower case palindromes passed!\n");

	assert(isPalindrome("ABa") == true);
	assert(isPalindrome("cIviC") == true);
	printf("Upper/lower cases examples passed!\n");

	assert(isPalindrome("") == false);
	assert(isPalindrome(NULL) == false);
	printf("No string/empty string corner cases passed!\n");

	printf("Nailed it!! Congratulations!\n");

	return (0);
}
