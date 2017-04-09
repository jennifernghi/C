/*
 * convertToUpper.c
 *
 *  Created on: Apr 8, 2017
 *      Author: jennifernghinguyen
 */
void convertToUpper(char *sPtr){
	while(*sPtr != '\0'){
		*sPtr = toupper(*sPtr);
		++sPtr;
	}
}

