//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSSecureCoding-Protocol.h>

@class NSOrderedSet, NSString;

@interface FCBundleSubscription : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isPurchaser;	// 8 = 0x8
    _Bool _isAmplifyUser;	// 9 = 0x9
    NSString *_bundlePurchaseID;	// 16 = 0x10
    NSOrderedSet *_bundleChannelIDs;	// 24 = 0x18
    NSString *_bundleChannelIDsVersion;	// 32 = 0x20
    NSString *_servicesBundlePurchaseID;	// 40 = 0x28
    unsigned long long _unprotectedSubscriptionState;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001384bd
+ (id)subscriptionWithSubscriptionState:(unsigned long long)arg1 bundleChannelIDs:(id)arg2;	// IMP=0x000000000013804f
- (void).cxx_destruct;	// IMP=0x0000000000138dce
@property(nonatomic) unsigned long long unprotectedSubscriptionState; // @synthesize unprotectedSubscriptionState=_unprotectedSubscriptionState;
@property(copy, nonatomic) NSString *servicesBundlePurchaseID; // @synthesize servicesBundlePurchaseID=_servicesBundlePurchaseID;
@property(nonatomic) _Bool isAmplifyUser; // @synthesize isAmplifyUser=_isAmplifyUser;
@property(nonatomic) _Bool isPurchaser; // @synthesize isPurchaser=_isPurchaser;
@property(copy, nonatomic) NSString *bundleChannelIDsVersion; // @synthesize bundleChannelIDsVersion=_bundleChannelIDsVersion;
@property(copy, nonatomic) NSOrderedSet *bundleChannelIDs; // @synthesize bundleChannelIDs=_bundleChannelIDs;
@property(copy, nonatomic) NSString *bundlePurchaseID; // @synthesize bundlePurchaseID=_bundlePurchaseID;
- (unsigned long long)hash;	// IMP=0x0000000000138bc8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013891e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000138776
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001384c5
- (id)debugDescription;	// IMP=0x0000000000138377
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001380ed
- (_Bool)containsTagID:(id)arg1;	// IMP=0x0000000000137fd8
@property(readonly, nonatomic) _Bool isSubscribed;
@property(readonly, nonatomic) _Bool isServicesBundleUser;
@property(readonly, nonatomic) unsigned long long subscriptionState;
- (id)initWithBundlePurchaseID:(id)arg1 bundleChannelIDs:(id)arg2 bundleChannelIDsVersion:(id)arg3 inTrialPeriod:(_Bool)arg4 isPurchaser:(_Bool)arg5 servicesBundlePurchaseID:(id)arg6 isAmplifyUser:(_Bool)arg7;	// IMP=0x0000000000137e31
- (_Bool)containsHeadline:(id)arg1;	// IMP=0x0000000000002db5

@end
