//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemonLegacy/HMMCoreAnalyticsLogging-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface HMDAppleMediaAccessoryMatchingIdentifierEvent : HMMLogEvent <HMMCoreAnalyticsLogging>
{
    NSNumber *_matchingIdentifiersCount;	// 8 = 0x8
    NSNumber *_expectedRemovalCount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006531d
@property(readonly, copy) NSNumber *expectedRemovalCount; // @synthesize expectedRemovalCount=_expectedRemovalCount;
@property(readonly, copy) NSNumber *matchingIdentifiersCount; // @synthesize matchingIdentifiersCount=_matchingIdentifiersCount;
- (id)attributeDescriptions;	// IMP=0x00000000000651c5
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;
- (id)initWithMatchingIdentifiersCount:(long long)arg1;	// IMP=0x000000000006501e

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end
