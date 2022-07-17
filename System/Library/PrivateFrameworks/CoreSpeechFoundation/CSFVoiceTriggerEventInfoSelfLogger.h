//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSFVoiceTriggerEventInfoSelfLogger : NSObject
{
}

+ (id)sharedLogger;	// IMP=0x00000000000105aa
- (void)logTwoShotDetectedWithMHUUID:(id)arg1;	// IMP=0x0000000000010777
- (void)logTwoShotStartEventWithPromptType:(unsigned int)arg1 withMHUUID:(id)arg2;	// IMP=0x000000000001074b
- (void)logTwoShotEndEventWithSuppresedAlert:(_Bool)arg1 withTimedOut:(_Bool)arg2 withMHUUID:(id)arg3;	// IMP=0x000000000001071f
- (void)logCancelledEventWithMHUUID:(id)arg1;	// IMP=0x00000000000106f3
- (void)logRejectEventWithVTEI:(id)arg1 withMHUUID:(id)arg2 withSecondPassResult:(unsigned long long)arg3;	// IMP=0x00000000000106b7
- (void)logTriggerEventWithVTEI:(id)arg1 withMHUUID:(id)arg2;	// IMP=0x000000000001067b
- (void)logStartEventWithFirstPassStartedInfo:(id)arg1 withMHUUID:(id)arg2;	// IMP=0x000000000001063f
- (void)fetchAndClearCachedVoiceTriggerEventsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010639

@end
