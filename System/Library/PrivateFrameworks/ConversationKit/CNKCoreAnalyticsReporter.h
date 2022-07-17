//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CNKCoreAnalyticsReporter : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x000000000014eece
- (void).cxx_destruct;	// IMP=0x000000000014f901
- (id)init;	// IMP=0x000000000014f883
- (void)reportIncompatibilityTypeInvalidWithRecipientCount:(long long)arg1 reason:(long long)arg2;	// IMP=0x000000000014f487
- (void)reportIncompatibilityTypeWebWithRecipientCount:(long long)arg1 reason:(long long)arg2;	// IMP=0x000000000014f3ed
- (void)reportIncompatibilityTypeLegacyWithRecipientCount:(long long)arg1 reason:(long long)arg2;	// IMP=0x000000000014f39b
- (void)reportIncompatibilityTypeNoneWithRecipientCount:(long long)arg1 reason:(long long)arg2;	// IMP=0x000000000014f344
- (void)reportCanceledSOSCountdownToNotify:(double)arg1;	// IMP=0x000000000014f1b4
- (void)reportCanceledSOSCountdownToCall:(double)arg1;	// IMP=0x000000000014f15f

@end
