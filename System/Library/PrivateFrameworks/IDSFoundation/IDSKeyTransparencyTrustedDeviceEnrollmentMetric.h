//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTRTCMetric-Protocol.h>

@class NSDictionary, NSString;

@interface IDSKeyTransparencyTrustedDeviceEnrollmentMetric : NSObject <CUTRTCMetric>
{
    _Bool _cloudKitSuccess;	// 8 = 0x8
    _Bool _accountKeySuccess;	// 9 = 0x9
    unsigned long long _keyTransparencyVersion;	// 16 = 0x10
    NSString *_cloudKitErrorDomain;	// 24 = 0x18
    long long _cloudKitErrorCode;	// 32 = 0x20
    NSString *_cloudKitUnderlyingErrorDomain;	// 40 = 0x28
    long long _cloudKitUnderlyingErrorCode;	// 48 = 0x30
    double _cloudKitOperationTimeInterval;	// 56 = 0x38
    NSString *_accountKeyErrorDomain;	// 64 = 0x40
    long long _accountKeyErrorCode;	// 72 = 0x48
    NSString *_accountKeyUnderlyingErrorDomain;	// 80 = 0x50
    long long _accountKeyUnderlyingErrorCode;	// 88 = 0x58
    double _accountKeyOperationTimeInterval;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000012fefc
@property(readonly, nonatomic) double accountKeyOperationTimeInterval; // @synthesize accountKeyOperationTimeInterval=_accountKeyOperationTimeInterval;
@property(readonly, nonatomic) long long accountKeyUnderlyingErrorCode; // @synthesize accountKeyUnderlyingErrorCode=_accountKeyUnderlyingErrorCode;
@property(readonly, nonatomic) NSString *accountKeyUnderlyingErrorDomain; // @synthesize accountKeyUnderlyingErrorDomain=_accountKeyUnderlyingErrorDomain;
@property(readonly, nonatomic) long long accountKeyErrorCode; // @synthesize accountKeyErrorCode=_accountKeyErrorCode;
@property(readonly, nonatomic) NSString *accountKeyErrorDomain; // @synthesize accountKeyErrorDomain=_accountKeyErrorDomain;
@property(readonly, nonatomic) _Bool accountKeySuccess; // @synthesize accountKeySuccess=_accountKeySuccess;
@property(readonly, nonatomic) double cloudKitOperationTimeInterval; // @synthesize cloudKitOperationTimeInterval=_cloudKitOperationTimeInterval;
@property(readonly, nonatomic) long long cloudKitUnderlyingErrorCode; // @synthesize cloudKitUnderlyingErrorCode=_cloudKitUnderlyingErrorCode;
@property(readonly, nonatomic) NSString *cloudKitUnderlyingErrorDomain; // @synthesize cloudKitUnderlyingErrorDomain=_cloudKitUnderlyingErrorDomain;
@property(readonly, nonatomic) long long cloudKitErrorCode; // @synthesize cloudKitErrorCode=_cloudKitErrorCode;
@property(readonly, nonatomic) NSString *cloudKitErrorDomain; // @synthesize cloudKitErrorDomain=_cloudKitErrorDomain;
@property(readonly, nonatomic) _Bool cloudKitSuccess; // @synthesize cloudKitSuccess=_cloudKitSuccess;
@property(readonly, nonatomic) unsigned long long keyTransparencyVersion; // @synthesize keyTransparencyVersion=_keyTransparencyVersion;
@property(readonly) unsigned short rtcType;
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSString *name;
@property(readonly, copy) NSString *description;
- (id)initWithKeyTransparencyVersion:(unsigned long long)arg1 cloudKitSuccess:(_Bool)arg2 cloudKitErrorDomain:(id)arg3 cloudKitErrorCode:(long long)arg4 cloudKitUnderlyingErrorDomain:(id)arg5 cloudKitUnderlyingErrorCode:(long long)arg6 cloudKitOperationTimeInterval:(double)arg7 accountKeySuccess:(_Bool)arg8 accountKeyErrorDomain:(id)arg9 accountKeyErrorCode:(long long)arg10 accountKeyUnderlyingErrorDomain:(id)arg11 accountKeyUnderlyingErrorCode:(long long)arg12 accountKeyOperationTimeInterval:(double)arg13;	// IMP=0x000000000012f663

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

