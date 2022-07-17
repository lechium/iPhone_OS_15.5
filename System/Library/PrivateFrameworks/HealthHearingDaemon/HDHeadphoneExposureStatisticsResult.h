//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDHeadphoneAudioExposureBucketCollection, NSNumber;

@interface HDHeadphoneExposureStatisticsResult : NSObject
{
    _Bool _eligbleForUserNotification;	// 8 = 0x8
    _Bool _needsRebuildOnNextUnlock;	// 9 = 0x9
    HDHeadphoneAudioExposureBucketCollection *_cache;	// 16 = 0x10
    NSNumber *_prunedCount;	// 24 = 0x18
}

+ (id)resultWithCache:(id)arg1 eligbleForUserNotification:(_Bool)arg2;	// IMP=0x00000000000180b5
+ (id)resultWithCache:(id)arg1 prunedCount:(id)arg2;	// IMP=0x0000000000018047
+ (id)resultForAppendedSamplesDuringStartup;	// IMP=0x000000000001801e
- (void).cxx_destruct;	// IMP=0x00000000000182a5
@property(nonatomic) _Bool needsRebuildOnNextUnlock; // @synthesize needsRebuildOnNextUnlock=_needsRebuildOnNextUnlock;
@property(readonly, nonatomic) NSNumber *prunedCount; // @synthesize prunedCount=_prunedCount;
@property(readonly, nonatomic) _Bool eligbleForUserNotification; // @synthesize eligbleForUserNotification=_eligbleForUserNotification;
@property(readonly, nonatomic) HDHeadphoneAudioExposureBucketCollection *cache; // @synthesize cache=_cache;
- (id)_initWithCache:(id)arg1 eligbleForUserNotification:(_Bool)arg2 prunedCount:(id)arg3;	// IMP=0x00000000000181c5
- (id)copyWithEligbleForUserNotificationOverride:(_Bool)arg1;	// IMP=0x000000000001818c

@end
