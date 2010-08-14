/* CRYPTO.H     (c) Copyright Jan Jaeger, 2000-2009                  */
/*              Cryptographic instructions                           */

// $Id$
//
// $Log$
// Revision 1.11  2007/06/23 00:04:05  ivan
// Update copyright notices to include current year (2007)
//
// Revision 1.10  2006/12/08 09:43:19  jj
// Add CVS message log
//

#if defined(_FEATURE_MESSAGE_SECURITY_ASSIST)

#ifndef _CRYPTO_C_
#ifndef _HENGINE_DLL_
#define CRY_DLL_IMPORT DLL_IMPORT
#else   /* _HDASD_DLL_ */
#define CRY_DLL_IMPORT extern
#endif  /* _HDASD_DLL_ */
#else
#define CRY_DLL_IMPORT DLL_EXPORT
#endif

CRY_DLL_IMPORT void (ATTR_REGPARM(2) *ARCH_DEP(cipher_message                      ))(BYTE*, REGS*);
CRY_DLL_IMPORT void (ATTR_REGPARM(2) *ARCH_DEP(cipher_message_with_chaining        ))(BYTE*, REGS*);
CRY_DLL_IMPORT void (ATTR_REGPARM(2) *ARCH_DEP(compute_intermediate_message_digest ))(BYTE*, REGS*);
CRY_DLL_IMPORT void (ATTR_REGPARM(2) *ARCH_DEP(compute_last_message_digest         ))(BYTE*, REGS*);
CRY_DLL_IMPORT void (ATTR_REGPARM(2) *ARCH_DEP(compute_message_authentication_code ))(BYTE*, REGS*);

#ifdef FEATURE_MESSAGE_SECURITY_ASSIST_EXTENSION_3
CRY_DLL_IMPORT void (ATTR_REGPARM(2) *ARCH_DEP(perform_cryptographic_key_management))(BYTE*, REGS*);
#endif

#ifdef FEATURE_MESSAGE_SECURITY_ASSIST_EXTENSION_4
CRY_DLL_IMPORT void (ATTR_REGPARM(2) *ARCH_DEP(cipher_message_with_cipher_feedback ))(BYTE*, REGS*);
CRY_DLL_IMPORT void (ATTR_REGPARM(2) *ARCH_DEP(cipher_message_with_counter         ))(BYTE*, REGS*);
CRY_DLL_IMPORT void (ATTR_REGPARM(2) *ARCH_DEP(cipher_message_with_output_feedback ))(BYTE*, REGS*);
CRY_DLL_IMPORT void (ATTR_REGPARM(2) *ARCH_DEP(perform_cryptographic_computation   ))(BYTE*, REGS*);
#endif

#endif /*defined(_FEATURE_MESSAGE_SECURITY_ASSIST)*/
