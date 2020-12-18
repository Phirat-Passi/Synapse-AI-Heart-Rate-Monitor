#include "arm_math.h"

/**    
 * @ingroup groupMath    
 */

/**    
 * @addtogroup negate    
 * @{    
 */

/**    
 * @brief  Negates the elements of a Q7 vector.    
 * @param[in]  *pSrc points to the input vector    
 * @param[out]  *pDst points to the output vector    
 * @param[in]  blockSize number of samples in the vector    
 * @return none.    
 *    
 * <b>Scaling and Overflow Behavior:</b>    
 * \par    
 * The function uses saturating arithmetic.    
 * The Q7 value -1 (0x80) will be saturated to the maximum allowable positive value 0x7F.    
 */

void arm_negate_q7(
  q7_t * pSrc,
  q7_t * pDst,
  uint32_t blockSize)
{
  uint32_t blkCnt;                               /* loop counter */
  q7_t in;

#ifndef ARM_MATH_CM0

/* Run the below code for Cortex-M4 and Cortex-M3 */
  q31_t input;                                   /* Input values1-4 */
  q31_t zero = 0x00000000;


  /*loop Unrolling */
  blkCnt = blockSize >> 2u;

  /* First part of the processing with loop unrolling.  Compute 4 outputs at a time.    
   ** a second loop below computes the remaining 1 to 3 samples. */
  while(blkCnt > 0u)
  {
    /* C = -A */
    /* Read four inputs */
    input = *__SIMD32(pSrc)++;

    /* Store the Negated results in the destination buffer in a single cycle by packing the results */
    *__SIMD32(pDst)++ = __QSUB8(zero, input);

    /* Decrement the loop counter */
    blkCnt--;
  }

  /* If the blockSize is not a multiple of 4, compute any remaining output samples here.    
   ** No loop unrolling is used. */
  blkCnt = blockSize % 0x4u;

#else

  /* Run the below code for Cortex-M0 */

  /* Initialize blkCnt with number of samples */
  blkCnt = blockSize;

#endif /* #ifndef ARM_MATH_CM0 */

  while(blkCnt > 0u)
  {
    /* C = -A */
    /* Negate and then store the results in the destination buffer. */ \
      in = *pSrc++;
    *pDst++ = (in == (q7_t) 0x80) ? 0x7f : -in;

    /* Decrement the loop counter */
    blkCnt--;
  }
}

/**    
 * @} end of negate group    
 */
