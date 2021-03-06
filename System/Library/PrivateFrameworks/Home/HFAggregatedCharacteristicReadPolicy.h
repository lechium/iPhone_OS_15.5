//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFCharacteristicReadPolicy-Protocol.h>
#import <Home/NSCopying-Protocol.h>
#import <Home/NSMutableCopying-Protocol.h>

@class NSArray, NSString;

@interface HFAggregatedCharacteristicReadPolicy : NSObject <HFCharacteristicReadPolicy, NSCopying, NSMutableCopying>
{
    NSArray *_policies;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000013c181
@property(readonly, nonatomic) NSArray *policies; // @synthesize policies=_policies;
- (unsigned long long)evaluateWithCharacteristic:(id)arg1 traits:(out id *)arg2;	// IMP=0x000000000013be1a
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013bd14
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013bd09
- (id)initWithPolicies:(id)arg1;	// IMP=0x000000000013bc9e
- (id)init;	// IMP=0x000000000013bbe9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

