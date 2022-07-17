//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ExposureNotification/NSCopying-Protocol.h>
#import <ExposureNotification/NSSecureCoding-Protocol.h>

@class ENRegion, NSDictionary, NSString, NSUUID;

@interface ENRemotePresentationRequest : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _testMode;	// 8 = 0x8
    long long _requestType;	// 16 = 0x10
    NSUUID *_receiptId;	// 24 = 0x18
    NSDictionary *_decisionInfo;	// 32 = 0x20
    ENRegion *_agencyRegion;	// 40 = 0x28
    NSString *_appBundleIdentifier;	// 48 = 0x30
}

+ (id)presentationRequestWithType:(long long)arg1;	// IMP=0x000000000002fd8d
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002fd85
- (void).cxx_destruct;	// IMP=0x0000000000030955
@property(nonatomic) _Bool testMode; // @synthesize testMode=_testMode;
@property(copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(copy, nonatomic) ENRegion *agencyRegion; // @synthesize agencyRegion=_agencyRegion;
@property(copy, nonatomic) NSDictionary *decisionInfo; // @synthesize decisionInfo=_decisionInfo;
@property(copy, nonatomic) NSUUID *receiptId; // @synthesize receiptId=_receiptId;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
- (void)preApprovalRequestCompletedWithDecision:(_Bool)arg1;	// IMP=0x000000000003077b
- (void)keyReleaseRequestCompletedWithDecision:(_Bool)arg1;	// IMP=0x000000000003062b
- (void)onboardingRequestCompletedWithDecision:(_Bool)arg1;	// IMP=0x00000000000304db
@property(readonly, copy, nonatomic) ENRegion *region;
- (id)description;	// IMP=0x00000000000303cc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000301f2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002ff7a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002fe1a

@end
