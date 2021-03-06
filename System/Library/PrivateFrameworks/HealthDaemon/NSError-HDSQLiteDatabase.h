//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class NSDate, NSDictionary, NSString;

@interface NSError (HDSQLiteDatabase)
+ (id)hk_errorWithCodableError:(id)arg1;	// IMP=0x00000000000682e3
- (id)hd_failingSQLStatement;	// IMP=0x0000000000096ed5
- (_Bool)hd_isConstraintViolation;	// IMP=0x0000000000041b97
- (_Bool)hd_isNotADatabaseError;	// IMP=0x0000000000096eaf
- (_Bool)hd_isDatabaseCorruptionError;	// IMP=0x0000000000096e97
- (int)hd_sqliteExtendedErrorCode;	// IMP=0x0000000000096d09
- (id)hk_codableError;	// IMP=0x0000000000069fc9
- (id)hd_persistentMessage;	// IMP=0x0000000000377b99
- (double)hd_cloudKitRetryDelay;	// IMP=0x00000000004ae4bb
- (void)hd_enumerateCloudKitPartialErrorsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000004ae2a5
- (id)hd_errorForAnalytics;	// IMP=0x00000000004adf63
- (id)hd_errorSurfacingFatalCloudKitPartialFailureForAnalytics;	// IMP=0x00000000004add0e
- (id)hd_errorSurfacingFatalCloudKitPartialFailure;	// IMP=0x00000000004ada8f
- (_Bool)hd_isCorruptionError;	// IMP=0x00000000004ad984
- (id)hd_errorStrippingCloudKitPartialFailuresWithShouldIgnoreBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000004ad4b3
- (id)hd_errorStrippingExpectedCloudKitPartialFailures;	// IMP=0x00000000004ad3fe
- (_Bool)hd_shouldPreventCloudKitCacheUpdate;	// IMP=0x00000000004ad1a2
- (_Bool)hd_isManateeIdentityLossError;	// IMP=0x00000000004acf46
- (id)hd_cloudKitErrorRequiringUserAction;	// IMP=0x00000000004ac7f8
- (_Bool)hd_isResponseTimeout;	// IMP=0x000000000061465b
@property(readonly, nonatomic, getter=hd_isFromRequest) _Bool hd_fromRequest;
@property(readonly, nonatomic) NSDictionary *hd_persistentUserInfo;
@property(readonly, nonatomic) NSString *hd_messageIDSDeviceIdentifier;
@property(readonly, nonatomic) NSString *hd_messageIDSIdentifier;
@property(readonly, nonatomic) NSDate *hd_messageSent;
@property(readonly, nonatomic) unsigned short hd_messageID;
@end

