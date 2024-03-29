/** ============================================================================
 *  @file   ring_io_config.h
 *
 *  @path   $(DSPLINK)/dsp/src/samples/ring_io/
 *
 *  @desc   Header file containing configuration for the RING_IO sample.
 *
 *  @ver    1.65.00.02
 *  ============================================================================
 *  Copyright (C) 2002-2009, Texas Instruments Incorporated -
 *  http://www.ti.com/
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *  
 *  *  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  
 *  *  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *  
 *  *  Neither the name of Texas Instruments Incorporated nor the names of
 *     its contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *  
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 *  THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 *  PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 *  CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 *  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 *  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 *  OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 *  WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 *  OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 *  EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *  ============================================================================
 */


#if !defined (RING_IO_CONFIG_)
#define RING_IO_CONFIG_


#if defined (__cplusplus)
extern "C" {
#endif /* defined (__cplusplus) */


/** ============================================================================
 *  @name   SAMPLE_POOL_ID
 *
 *  @desc   ID of the pool used for the sample.
 *  ============================================================================
 */
#define SAMPLE_POOL_ID        0u

/** ============================================================================
 *  @const  RING_IO_READER_NAME
 *
 *  @desc   Name of the RingIO used by the application in reader mode.
 *  ============================================================================
 */
#define RING_IO_READER_NAME1   "RINGIO1"
#define RING_IO_READER_NAME2   "RINGIO3"

/** ============================================================================
 *  @const  RING_IO_WRITER_NAME
 *
 *  @desc   Name of the RingIO used by the application in writer mode.
 *  ============================================================================
 */
#define RING_IO_WRITER_NAME1   "RINGIO2"
#define RING_IO_WRITER_NAME2   "RINGIO4"


#if defined (__cplusplus)
}
#endif /* defined (__cplusplus) */


#endif /* !defined (RING_IO_CONFIG_) */
