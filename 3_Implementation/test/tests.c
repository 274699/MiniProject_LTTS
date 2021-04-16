
#include "unity.h"
#include "fun.h"


/* Modify these two lines according  the project */

#define PROJECT_NAME    "SNAKE"

void test_checkinput(void);  // to check the input function


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_checkinput);
 
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}


/**
 * @brief To check the Test cases
 * 
 */
void test_checkdraw(void){
  int flag= 2;
  int gameover = 1;
  int pause=1;
  TEST_ASSERT_EQUAL(1,checkresult(flag, gameover, pause));
  
  
}

