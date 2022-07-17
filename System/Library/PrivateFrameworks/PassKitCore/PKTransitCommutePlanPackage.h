//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableDictionary;

@interface PKTransitCommutePlanPackage : NSObject <NSSecureCoding, NSCopying>
{
    NSArray *_transitCommutePlans;	// 8 = 0x8
    unsigned long long _transitCommutePlanType;	// 16 = 0x10
    NSMutableDictionary *_commutePlanLookupDictionary;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000038e469
- (void).cxx_destruct;	// IMP=0x000000000038e74a
@property(retain, nonatomic) NSMutableDictionary *commutePlanLookupDictionary; // @synthesize commutePlanLookupDictionary=_commutePlanLookupDictionary;
@property(nonatomic) unsigned long long transitCommutePlanType; // @synthesize transitCommutePlanType=_transitCommutePlanType;
@property(copy, nonatomic) NSArray *transitCommutePlans; // @synthesize transitCommutePlans=_transitCommutePlans;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000038e693
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000038e4f8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000038e471
- (id)planForIdentifier:(id)arg1;	// IMP=0x000000000038e453
- (id)initWithDictionary:(id)arg1 backFieldBuckets:(id)arg2 bundle:(id)arg3 privateBundle:(id)arg4;	// IMP=0x000000000038d6f5

@end
