//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsToday/NTSourceAvailabilityEntry-Protocol.h>

@class NSString;

@interface NTNoContentSourceAvailabilityEntry : NSObject <NTSourceAvailabilityEntry>
{
    CDUnknownBlockType availabilityChangedNotificationBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000002bb6
@property(copy, nonatomic) CDUnknownBlockType availabilityChangedNotificationBlock; // @synthesize availabilityChangedNotificationBlock;
@property(readonly, nonatomic, getter=isLikelyAvailable) _Bool likelyAvailable;
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
@property(readonly, nonatomic) Class todayResultsFetchDescriptorClass;
- (id)init;	// IMP=0x0000000000002b43

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
