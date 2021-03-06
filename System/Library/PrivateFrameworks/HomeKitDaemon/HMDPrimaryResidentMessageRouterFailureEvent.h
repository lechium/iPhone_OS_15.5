//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemon/HMMCoreAnalyticsLogging-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface HMDPrimaryResidentMessageRouterFailureEvent : HMMLogEvent <HMMCoreAnalyticsLogging>
{
    NSString *_messageName;	// 8 = 0x8
    NSNumber *_failureType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007bf74
@property(readonly, copy) NSNumber *failureType; // @synthesize failureType=_failureType;
@property(readonly, copy) NSString *messageName; // @synthesize messageName=_messageName;
- (id)attributeDescriptions;	// IMP=0x000000000007bda8
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;
- (id)initWithMessageName:(id)arg1 failureType:(long long)arg2;	// IMP=0x000000000007bc10

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end

