/*
 * [Warning!] This file is auto-generated by pika compiler.
 * Do not edit it manually.
 * The source code is *.pyi file.
 * More details: 
 * English Doc:
 * https://pikadoc-en.readthedocs.io/en/latest/PikaScript%20%E6%A8%A1%E5%9D%97%E6%A6%82%E8%BF%B0.html
 * Chinese Doc:
 * http://pikapython.com/doc/PikaScript%20%E6%A8%A1%E5%9D%97%E6%A6%82%E8%BF%B0.html
 */

#ifndef __PikaStdDevice__H
#define __PikaStdDevice__H
#include <stdio.h>
#include <stdlib.h>
#include "PikaObj.h"

PikaObj *New_PikaStdDevice(Args *args);

Arg* PikaStdDevice_ADC(PikaObj *self);
Arg* PikaStdDevice_BaseDev(PikaObj *self);
Arg* PikaStdDevice_CAN(PikaObj *self);
Arg* PikaStdDevice_DAC(PikaObj *self);
Arg* PikaStdDevice_GPIO(PikaObj *self);
Arg* PikaStdDevice_IIC(PikaObj *self);
Arg* PikaStdDevice_PWM(PikaObj *self);
Arg* PikaStdDevice_SPI(PikaObj *self);
PikaObj* PikaStdDevice_Time(PikaObj *self);
Arg* PikaStdDevice_Timer(PikaObj *self);
Arg* PikaStdDevice_UART(PikaObj *self);

#endif