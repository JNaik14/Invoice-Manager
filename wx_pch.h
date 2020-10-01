/***************************************************************
 * Name:      wx_pch.h
 * Purpose:   Header to create Pre-Compiled Header (PCH)
 * Author:    Jugal Naik (jugalnaik14@gmail.com)
 * Created:   2020-09-16
 * Copyright: Jugal Naik (jugal.tk)
 * License:
 **************************************************************/

#ifndef WX_PCH_H_INCLUDED
#define WX_PCH_H_INCLUDED

// basic wxWidgets headers
#include <wx/wxprec.h>

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#ifdef WX_PRECOMP
#include "wx/pdfdoc.h"
#endif // WX_PRECOMP

#endif // WX_PCH_H_INCLUDED
