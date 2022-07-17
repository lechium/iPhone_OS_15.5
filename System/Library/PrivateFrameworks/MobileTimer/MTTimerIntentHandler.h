//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTTimerManagerIntentSupport, MTTimerManagerProviding;

@interface MTTimerIntentHandler : NSObject
{
    id <MTTimerManagerProviding> _timerManagerProvider;	// 8 = 0x8
    id <MTTimerManagerIntentSupport> _timerManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000091deb
@property(retain, nonatomic) id <MTTimerManagerIntentSupport> timerManager; // @synthesize timerManager=_timerManager;
@property(nonatomic) __weak id <MTTimerManagerProviding> timerManagerProvider; // @synthesize timerManagerProvider=_timerManagerProvider;
- (_Bool)_isDefaultTimer:(id)arg1;	// IMP=0x0000000000091d58
- (id)_alternateTimersForTargetTimerState:(long long)arg1 type:(long long)arg2 inTimers:(id)arg3 allowedTimerStates:(id)arg4;	// IMP=0x0000000000091b94
- (id)_onlyUnnamedTimerInTimers:(id)arg1 forTargetTimer:(id)arg2 allowMultiple:(_Bool)arg3;	// IMP=0x0000000000091a26
- (void)_genericallyResolveTargetTimer:(id)arg1 multiple:(_Bool)arg2 allowedTimerStatesForFollowup:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000090f07
- (void)_matchTimersFromIntentsTimer:(id)arg1 excludeStoppedTimers:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000009097b
- (id)_timerManager;	// IMP=0x00000000000908e2

@end
