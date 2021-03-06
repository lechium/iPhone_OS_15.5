//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileTimer/NSObject-Protocol.h>

@class INResetTimerIntent;

@protocol INResetTimerIntentHandling <NSObject>
- (void)handleResetTimer:(INResetTimerIntent *)arg1 completion:(void (^)(INResetTimerIntentResponse *))arg2;

@optional
- (void)resolveResetMultipleForResetTimer:(INResetTimerIntent *)arg1 withCompletion:(void (^)(INBooleanResolutionResult *))arg2;
- (void)resolveTargetTimerForResetTimer:(INResetTimerIntent *)arg1 withCompletion:(void (^)(INTimerResolutionResult *))arg2;
- (void)confirmResetTimer:(INResetTimerIntent *)arg1 completion:(void (^)(INResetTimerIntentResponse *))arg2;
@end

