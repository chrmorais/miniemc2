/********************************************************************
* Description: cms_aup.hh
*
*   Derived from a work by Fred Proctor & Will Shackleford
*
* Author:
* License: LGPL Version 2
* System: Linux
*    
* Copyright (c) 2004 All rights reserved.
*
* Last change: 
* $Revision: 1.4 $
* $Author: paul_c $
* $Date: 2005/06/26 17:53:35 $
********************************************************************/
#ifndef CMS_AUP_HH
#define CMS_AUP_HH

#include "cms_up.hh"		/* class CMS_UPDATER */

class CMS_ASCII_UPDATER:public CMS_UPDATER {
  public:
    CMS_STATUS update(bool &x);
    CMS_STATUS update(char &x);
    CMS_STATUS update(unsigned char &x);
    CMS_STATUS update(short int &x);
    CMS_STATUS update(unsigned short int &x);
    CMS_STATUS update(int &x);
    CMS_STATUS update(unsigned int &x);
    CMS_STATUS update(long int &x);
    CMS_STATUS update(unsigned long int &x);
    CMS_STATUS update(float &x);
    CMS_STATUS update(double &x);
    CMS_STATUS update(long double &x);
    CMS_STATUS update(char *x, unsigned int len);
    CMS_STATUS update(unsigned char *x, unsigned int len);
    CMS_STATUS update(short *x, unsigned int len);
    CMS_STATUS update(unsigned short *x, unsigned int len);
    CMS_STATUS update(int *x, unsigned int len);
    CMS_STATUS update(unsigned int *x, unsigned int len);
    CMS_STATUS update(long *x, unsigned int len);
    CMS_STATUS update(unsigned long *x, unsigned int len);
    CMS_STATUS update(float *x, unsigned int len);
    CMS_STATUS update(double *x, unsigned int len);
    CMS_STATUS update(long double *x, unsigned int len);
    int set_mode(CMS_UPDATER_MODE);
    void rewind();
    int get_encoded_msg_size();
  protected:
    int check_pointer(char *, long);
      CMS_ASCII_UPDATER(CMS *);
      virtual ~ CMS_ASCII_UPDATER();
    friend class CMS;
    char *begin_current_string;
    char *end_current_string;
    long max_length_current_string;
    long length_current_string;
    int warning_count;
    int warning_count_max;
};

#endif
