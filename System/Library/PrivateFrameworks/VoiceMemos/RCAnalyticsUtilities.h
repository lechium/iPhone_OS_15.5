//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RCAnalyticsUtilities : NSObject
{
}

+ (void)sendDidOpenShareMemoController;	// IMP=0x000000000002582e
+ (void)sendReceivedSharedRecording;	// IMP=0x0000000000025804
+ (void)sendDidShareRecording;	// IMP=0x00000000000257da
+ (void)sendDidTrimVoiceMemo;	// IMP=0x00000000000257b0
+ (void)sendRecordingsCount:(long long)arg1;	// IMP=0x00000000000256d8
+ (void)sendNewRecordingDuration:(double)arg1;	// IMP=0x0000000000025602
+ (void)sendDidCaptureModifyExistingRecording;	// IMP=0x00000000000255d8
+ (void)sendDidCaptureNewRecording;	// IMP=0x00000000000255ae
+ (void)sendDidPlaybackVoiceMemo;	// IMP=0x000000000002541e

@end
