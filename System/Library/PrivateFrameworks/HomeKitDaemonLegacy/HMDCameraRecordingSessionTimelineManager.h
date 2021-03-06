//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSDate, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDCameraRecordingSessionTimelineManager : HMFObject <HMFLogging>
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    double _fragmentDuration;	// 16 = 0x10
    NSDate *_fragmentCreationReferenceDate;	// 24 = 0x18
    NSMutableArray *_motionActiveDateIntervals;	// 32 = 0x20
    NSMutableArray *_doorbellActiveDateIntervals;	// 40 = 0x28
    NSString *_logIdentifier;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x000000000047fa63
- (void).cxx_destruct;	// IMP=0x000000000047f9ff
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly) NSMutableArray *doorbellActiveDateIntervals; // @synthesize doorbellActiveDateIntervals=_doorbellActiveDateIntervals;
@property(readonly) NSMutableArray *motionActiveDateIntervals; // @synthesize motionActiveDateIntervals=_motionActiveDateIntervals;
@property(readonly, copy) NSDate *fragmentCreationReferenceDate; // @synthesize fragmentCreationReferenceDate=_fragmentCreationReferenceDate;
@property(readonly) double fragmentDuration; // @synthesize fragmentDuration=_fragmentDuration;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)attributeDescriptions;	// IMP=0x000000000047f7f3
- (_Bool)isMotionTriggerActiveAtAnyTimeAfterOffset:(double)arg1;	// IMP=0x000000000047f6b7
- (_Bool)isDoorbellTriggerActiveAtAnyTimeAfterOffset:(double)arg1;	// IMP=0x000000000047f57b
- (void)handleDoorbellDidActivateAtDate:(id)arg1;	// IMP=0x000000000047f207
- (void)handleMotionActive:(_Bool)arg1 didChangeAtDate:(id)arg2;	// IMP=0x000000000047ed14
- (_Bool)isDoorbellTriggerActiveAtAnyTimeAfterOffset:(double)arg1 forDuration:(double)arg2;	// IMP=0x000000000047eaf3
- (_Bool)isMotionTriggerActiveAtAnyTimeAfterOffset:(double)arg1 forDuration:(double)arg2;	// IMP=0x000000000047e8d2
- (id)creationDateForFragmentAtTimeOffset:(double)arg1;	// IMP=0x000000000047e83b
- (id)initWithWorkQueue:(id)arg1 fragmentDuration:(double)arg2 fragmentCreationReferenceDate:(id)arg3 logIdentifier:(id)arg4;	// IMP=0x000000000047e6b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

