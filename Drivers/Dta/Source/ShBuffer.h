//#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#* ShBuffer.h *#*#*#*#*#*#*#*#* (C) 2011-2012 DekTec
//
// Dta driver - Dta Shared user-driver buffer routines used for High-Performance DMA
// buffers or IpRx/IpTx buffers
//

//-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.- License -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

// Copyright (C) 2011-2012 DekTec Digital Video B.V.
//
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
//  1. Redistributions of source code must retain the above copyright notice, this list
//     of conditions and the following disclaimer.
//  2. Redistributions in binary format must reproduce the above copyright notice, this
//     list of conditions and the following disclaimer in the documentation.
//  3. The source code may not be modified for the express purpose of enabling hardware
//     features for which no genuine license has been obtained.
//
// THIS SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
// INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
// PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL DEKTEC DIGITAL VIDEO BV, ITS AGENTS OR ITS EMPLOYEES BE LIABLE FOR
// ANY DIRECT, INDIRECT, CONSEQUENTIAL, INCIDENTAL, OR OTHER DAMAGES (INCLUDING DAMAGES
// FOR THE LOSS OF USE, INFORMATION, GOODWILL, PROFIT, WORK STOPPAGE, DATA, BUSINESS OR
// REVENUE) UNDER ANY CIRCUMSTANCES, OR UNDER ANY LEGAL THEORY, WHETHER IN CONTRACT, IN
// TORT, IN NEGLIGENCE, OR OTHERWISE, ARISING FROM THE USE OF, OR INABILITY TO USE THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.

#ifndef __SHBUFFER_H
#define __SHBUFFER_H

//-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.- Type definitions -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-
// DtaHpBuffer
struct _DtaShBuffer
{
    Bool  m_Initialised;
    DtFileObject  m_Owner;
    Int  m_Purpose;
    UInt8*  m_pBuffer;
    DtPageList  m_PageList;                  // Pagelist of user buffer (not used for DMA)
    DmaChannel*  m_pDmaCh;
};

//-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.- Public functions -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-
DtStatus  DtaShBufferClose(DtaShBuffer* pShBuffer);
DtStatus  DtaShBufferIoctl(DtaDeviceData* pDvcData, DtFileObject* pFile,
                                                                   DtIoctlObject* pIoctl);
#endif // __SHBUFFER_H
