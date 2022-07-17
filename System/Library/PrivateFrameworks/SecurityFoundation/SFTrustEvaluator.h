//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class NSArray, SFRevocationPolicy, SFTrustPolicy;

@interface SFTrustEvaluator : NSObject <NSCopying, NSSecureCoding>
{
    id _trustEvaluatorInternal;	// 8 = 0x8
    _Bool _allowCertificateFetching;	// 16 = 0x10
    _Bool _trustSystemAnchorCertificates;	// 17 = 0x11
    SFTrustPolicy *_trustPolicy;	// 24 = 0x18
    SFRevocationPolicy *_revocationPolicy;	// 32 = 0x20
    NSArray *_applicationAnchorCertificates;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000f3e0
- (void).cxx_destruct;	// IMP=0x000000000000f6be
@property(nonatomic) _Bool trustSystemAnchorCertificates; // @synthesize trustSystemAnchorCertificates=_trustSystemAnchorCertificates;
@property(nonatomic) _Bool allowCertificateFetching; // @synthesize allowCertificateFetching=_allowCertificateFetching;
@property(copy, nonatomic) NSArray *applicationAnchorCertificates; // @synthesize applicationAnchorCertificates=_applicationAnchorCertificates;
@property(copy, nonatomic) SFRevocationPolicy *revocationPolicy; // @synthesize revocationPolicy=_revocationPolicy;
@property(copy, nonatomic) SFTrustPolicy *trustPolicy; // @synthesize trustPolicy=_trustPolicy;
- (void)evaluateCertificateChain:(id)arg1 forDate:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000f649
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000f5de
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000f5d8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000f5a9
- (id)initWithTrustPolicy:(id)arg1 revocationPolicy:(id)arg2 applicationAnchorCertificates:(id)arg3 allowCertificateFetching:(_Bool)arg4 trustSystemAnchorCertificates:(_Bool)arg5;	// IMP=0x000000000000f4bb
- (id)initWithTrustPolicy:(id)arg1 revocationPolicy:(id)arg2;	// IMP=0x000000000000f48c
- (id)initWithTrustPolicy:(id)arg1;	// IMP=0x000000000000f428
- (id)init;	// IMP=0x000000000000f3e8

@end
