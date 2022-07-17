//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGJournalCalendarObserver-Protocol.h>

@class NSString, SGDCloudKitSync;

@interface SGDCloudKitSyncObserver : NSObject <SGJournalCalendarObserver>
{
    CDUnknownBlockType _cksGetter;	// 8 = 0x8
    SGDCloudKitSync *_cks;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000015bea8
- (void)cancelEvents:(id)arg1;	// IMP=0x000000000015bea2
- (void)addEvents:(id)arg1;	// IMP=0x000000000015be9c
- (void)calendarDeleted;	// IMP=0x000000000015be96
- (void)orphanEvent:(id)arg1;	// IMP=0x000000000015be90
- (void)rejectEventFromOtherDevice:(id)arg1;	// IMP=0x000000000015be2c
- (void)rejectEventFromThisDevice:(id)arg1;	// IMP=0x000000000015bd67
- (void)confirmEventFromOtherDevice:(id)arg1;	// IMP=0x000000000015bd03
- (void)confirmEventFromThisDevice:(id)arg1;	// IMP=0x000000000015bc3e
- (void)cancelEvent:(id)arg1;	// IMP=0x000000000015bc38
- (void)addEvent:(id)arg1;	// IMP=0x000000000015bc32
- (id)cloudKitSync;	// IMP=0x000000000015bbb1
- (id)initWithCloudKitSyncGetter:(CDUnknownBlockType)arg1;	// IMP=0x000000000015bb3e
- (id)init;	// IMP=0x000000000015bab7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
