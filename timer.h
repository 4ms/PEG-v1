/*
Copyright (c) 2015 4ms Company

Author: Dan Green - danngreen1@gmail.com

LICENSE:

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

See http://creativecommons.org/licenses/MIT/ for more information.
*/


#ifndef TIMER_H_
#define TIMER_H_

#define MINTIME 1
#define TMROFFSET 0


void inittimer(void);
uint32_t gettmrms(void);

uint32_t get_tapouttmr(void);
uint32_t get_tapintmr(void);
uint32_t get_pingtmr(void);
uint32_t get_divpingtmr(void);
uint32_t get_eo1tmr(void);
uint32_t get_eo2tmr(void);

void reset_tapouttmr(void);
void reset_tapintmr(void);
void reset_pingtmr(void);
void reset_divpingtmr(void);
void reset_eo1tmr(void);
void reset_eo2tmr(void);

#endif /* TIMER_H_ */
