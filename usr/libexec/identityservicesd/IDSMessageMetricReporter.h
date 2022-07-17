//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSMessageMetricReporter : NSObject
{
}

+ (_Bool)_shouldIgnoreAutoBugCaptureForLegacyFailure:(id)arg1;	// IMP=0x0040000000056e50
+ (_Bool)_shouldIgnoreMPError:(id)arg1;	// IMP=0x0010000000056dc0
+ (_Bool)_shouldIgnoreAutoBugCaptureForECFailure:(id)arg1;	// IMP=0x0010000000056c40
+ (void)noteKeyGenerationForMetric;	// IMP=0x0010000000056b70
+ (id)errorToReportForLegacyError:(id)arg1;	// IMP=0x0010000000056710
+ (id)errorToReportForECError:(id)arg1;	// IMP=0x00100000000562b0
+ (void)reportMessageMetricWithMetadata:(id)arg1 ECSuccess:(id)arg2 legacySuccess:(id)arg3 command:(id)arg4 decryptedEqual:(_Bool)arg5 triedLastResort:(_Bool)arg6 ECError:(id)arg7 legacyError:(id)arg8 fromDestination:(id)arg9;	// IMP=0x0010000000054c40
+ (void)reportEncryptionSideMetricWithEndpoint:(id)arg1 ECSuccess:(id)arg2 legacySuccess:(id)arg3 ECError:(id)arg4 legacyError:(id)arg5;	// IMP=0x00100000000546e0
+ (id)messageMetadataWithEndpoint:(id)arg1 ECSuccess:(id)arg2 legacySuccess:(id)arg3 ECError:(id)arg4 legacyError:(id)arg5;	// IMP=0x0010000000054510
+ (id)_metadataWithEndpoint:(id)arg1 ECSuccess:(id)arg2 legacySuccess:(id)arg3 ECError:(id)arg4 legacyError:(id)arg5;	// IMP=0x00100000000540c0

@end
