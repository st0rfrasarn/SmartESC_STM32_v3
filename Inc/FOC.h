/*
 * FOC.h
 *
 *  Created on: 25.01.2019
 *      Author: stancecoke
 */

#ifndef FOC_H_
#define FOC_H_

#include <arm_math.h>

void FOC_calculation(int16_t int16_i_as, int16_t int16_i_bs, q31_t q31_teta, int16_t int16_i_q_target);

// Maximum Voltage applying, a little less than 2^15
#define _U_MAX	2048L
// Square Root of 3
#define _SQRT3	1.73205081
// Pi divided by 3






//globals
extern q31_t temp1;
extern q31_t temp2;
extern q31_t temp3;



#endif /* FOC_H_ */
