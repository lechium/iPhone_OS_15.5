//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSArray;

@protocol PXFocusTimelineController <NSObject>
- (void)objectTrackingFinishedWithSuccess:(_Bool)arg1;
- (void)updateObjectTrackingProgressAtTime:(CDStruct_1b6d18a9)arg1 shouldStop:(_Bool *)arg2;
- (void)objectTrackingStartedAtTime:(CDStruct_1b6d18a9)arg1;
- (void)didUpdateFocusEventsWithTimes:(NSArray *)arg1;
- (void)updateFocusTimelineWithEvent:(CDStruct_1b6d18a9)arg1 userInitiated:(_Bool)arg2 shouldAnimate:(_Bool)arg3;
- (void)updateFocusTimelineWithTimeRange:(CDStruct_e83c9415)arg1;
- (void)updateFocusTimeline;
- (void)resetTimeline;
- (void)showFocusTimeline:(_Bool)arg1;
- (void)enableFocusTimeline:(_Bool)arg1;
@end

