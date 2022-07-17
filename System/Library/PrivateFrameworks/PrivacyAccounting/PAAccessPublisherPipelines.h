//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PAAccessPublisherPipelines : NSObject
{
}

+ (double)nextStartTimeForEndTime:(double)arg1 iteration:(double)arg2;	// IMP=0x0000000000010f0e
+ (id)findBeginningForPartialAccessRecord:(id)arg1 iteration:(double)arg2 nextStartTime:(CDUnknownBlockType)arg3 endTime:(double)arg4 accessPublisher:(CDUnknownBlockType)arg5;	// IMP=0x00000000000108a3
+ (id)completeAccessRecordFromPartialAccessRecord:(id)arg1 nextStartTime:(CDUnknownBlockType)arg2 accessPublisher:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010694
+ (id)completeAccessRecordFromPartialAccessRecord:(id)arg1 nextAccessPublisher:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010580
+ (id)coalesceAccessRecordsFromPublisher:(id)arg1 withCoalescingWindowDuration:(double)arg2 reversed:(_Bool)arg3;	// IMP=0x00000000000100c6
+ (id)ongoingAccessRecordsFromPublisher:(id)arg1;	// IMP=0x000000000000fbe8
+ (id)accessRecordsFromPublisher:(id)arg1 reversed:(_Bool)arg2;	// IMP=0x000000000000f336
+ (id)accessRecordsFromPublisher:(id)arg1;	// IMP=0x000000000000f322
+ (id)accessPublisherWithoutUnknownCategoryAccesses:(id)arg1;	// IMP=0x000000000000f260
+ (id)accessPublisherWithoutOutOfProcessPickerAccesses:(id)arg1;	// IMP=0x000000000000f1bd
+ (id)accessPublisherWithoutHiddenOrMissingApps:(id)arg1 withBundleLookup:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ee58
+ (id)accessPublisherWithoutHiddenOrMissingApps:(id)arg1;	// IMP=0x000000000000edcc

@end
