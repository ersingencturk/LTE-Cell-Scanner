/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_PRACH_ConfigInfo_H_
#define	_PRACH_ConfigInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PRACH-ConfigInfo */
typedef struct PRACH_ConfigInfo {
	long	 prach_ConfigIndex;
	BOOLEAN_t	 highSpeedFlag;
	long	 zeroCorrelationZoneConfig;
	long	 prach_FreqOffset;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PRACH_ConfigInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PRACH_ConfigInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _PRACH_ConfigInfo_H_ */
#include <asn_internal.h>