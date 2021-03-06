//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMFLogging-Protocol.h>

@class NSString;

@interface HMHomePersonManager <HMFLogging>
{
}

+ (id)logCategory;	// IMP=0x0000000000071d39
+ (id)personManagerUUIDFromHomeUUID:(id)arg1;	// IMP=0x0000000000071c5e
- (id)logIdentifier;	// IMP=0x0000000000071e93
- (id)initWithHome:(id)arg1;	// IMP=0x0000000000071da0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

