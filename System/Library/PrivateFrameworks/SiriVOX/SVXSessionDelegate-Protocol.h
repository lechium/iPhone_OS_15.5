//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriVOX/NSObject-Protocol.h>

@class AFXPCWrapper, NSError, NSUUID, SVXActivationContext, SVXDeactivationContext, SVXSession;

@protocol SVXSessionDelegate <NSObject>
- (void)sessionDidInvalidate:(SVXSession *)arg1;
- (void)session:(SVXSession *)arg1 audioSessionDidBecomeActive:(_Bool)arg2 activationContext:(SVXActivationContext *)arg3 deactivationContext:(SVXDeactivationContext *)arg4;
- (void)session:(SVXSession *)arg1 audioSessionWillBecomeActive:(_Bool)arg2 activationContext:(SVXActivationContext *)arg3 deactivationContext:(SVXDeactivationContext *)arg4;
- (void)session:(SVXSession *)arg1 didDeactivateWithContext:(SVXDeactivationContext *)arg2;
- (void)session:(SVXSession *)arg1 willDeactivateWithContext:(SVXDeactivationContext *)arg2;
- (void)session:(SVXSession *)arg1 didNotActivateWithContext:(SVXActivationContext *)arg2 error:(NSError *)arg3;
- (void)session:(SVXSession *)arg1 didActivateWithContext:(SVXActivationContext *)arg2;
- (void)session:(SVXSession *)arg1 willActivateWithContext:(SVXActivationContext *)arg2;
- (void)session:(SVXSession *)arg1 didResignActiveWithDeactivationContext:(SVXDeactivationContext *)arg2 activityUUID:(NSUUID *)arg3;
- (void)session:(SVXSession *)arg1 willResignActiveWithOptions:(unsigned long long)arg2 duration:(double)arg3 activityUUID:(NSUUID *)arg4;
- (void)session:(SVXSession *)arg1 didBecomeActiveWithActivationContext:(SVXActivationContext *)arg2 activityUUID:(NSUUID *)arg3;
- (void)session:(SVXSession *)arg1 willBecomeActiveWithActivationContext:(SVXActivationContext *)arg2 activityUUID:(NSUUID *)arg3;
- (void)session:(SVXSession *)arg1 didStopSoundWithID:(long long)arg2 error:(NSError *)arg3;
- (void)session:(SVXSession *)arg1 didStartSoundWithID:(long long)arg2;
- (void)session:(SVXSession *)arg1 willStartSoundWithID:(long long)arg2;
- (void)session:(SVXSession *)arg1 didEndUpdateAudioPowerWithType:(long long)arg2;
- (void)session:(SVXSession *)arg1 willBeginUpdateAudioPowerWithType:(long long)arg2 wrapper:(AFXPCWrapper *)arg3;
- (void)session:(SVXSession *)arg1 didChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)session:(SVXSession *)arg1 willChangeFromState:(long long)arg2 toState:(long long)arg3;
@end

