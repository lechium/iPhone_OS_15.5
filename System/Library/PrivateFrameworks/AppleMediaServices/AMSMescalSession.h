//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMescalFairPlay, AMSURLSession, NSData;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSMescalSession : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSData *_certificateData;	// 16 = 0x10
    AMSURLSession *_urlSession;	// 24 = 0x18
    AMSMescalFairPlay *_fairPlayContext;	// 32 = 0x20
    long long _mescalType;	// 40 = 0x28
}

+ (id)sessionWithType:(long long)arg1;	// IMP=0x000000000018d480
+ (id)primeSession;	// IMP=0x000000000018d416
+ (id)defaultSession;	// IMP=0x000000000018d3ac
- (void).cxx_destruct;	// IMP=0x0000000000190b71
- (_Bool)_verifyEntitlements;	// IMP=0x0000000000190b05
- (_Bool)_shouldRetryFairPlayForError:(id)arg1;	// IMP=0x0000000000190a76
- (void)_resetSession;	// IMP=0x0000000000190a4c
- (id)_postExchangeData:(id)arg1 bag:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000190593
- (id)_loadCertificateDataWithBag:(id)arg1 error:(id *)arg2;	// IMP=0x000000000019003d
- (id)_establishContextWithBag:(id)arg1 error:(id *)arg2;	// IMP=0x000000000018fa9b
- (id)_cachedCertPath;	// IMP=0x000000000018f95d
- (id)_cachedCertData;	// IMP=0x000000000018f452
- (_Bool)_cacheCertData:(id)arg1 expiration:(double)arg2;	// IMP=0x000000000018edc3
- (_Bool)verifyPrimeSignature:(id)arg1 error:(id *)arg2;	// IMP=0x000000000018ea36
- (_Bool)verifyData:(id)arg1 withSignature:(id)arg2 bag:(id)arg3 error:(id *)arg4;	// IMP=0x000000000018e304
- (id)signData:(id)arg1 bag:(id)arg2 error:(id *)arg3;	// IMP=0x000000000018dc52
- (id)primeSignatureForData:(id)arg1 bag:(id)arg2 error:(id *)arg3;	// IMP=0x000000000018d4c8
- (id)initWithType:(long long)arg1;	// IMP=0x000000000018d31a

@end
