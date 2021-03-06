//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AFUISiriTapPanDismissalPolicyManagerDelegate;

@interface AFUISiriTapPanDismissalPolicyManager : NSObject
{
    _Bool _shouldDismissForTapsAndPans;	// 8 = 0x8
    _Bool _idleAndQuiet;	// 9 = 0x9
    _Bool _dimmingLayerVisible;	// 10 = 0xa
    long long _dismissalPolicy;	// 16 = 0x10
    id <AFUISiriTapPanDismissalPolicyManagerDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000028f44
@property(nonatomic, getter=_delegate, setter=_setDelegate:) __weak id <AFUISiriTapPanDismissalPolicyManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=_dismissalPolicy, setter=_setDismissalPolicy:) long long dismissalPolicy; // @synthesize dismissalPolicy=_dismissalPolicy;
@property(nonatomic, getter=_dimmingLayerVisible, setter=_setDimmingLayerVisible:) _Bool dimmingLayerVisible; // @synthesize dimmingLayerVisible=_dimmingLayerVisible;
@property(nonatomic, getter=_idleAndQuiet, setter=_setIdleAndQuiet:) _Bool idleAndQuiet; // @synthesize idleAndQuiet=_idleAndQuiet;
@property(nonatomic, getter=_shouldDismissForTapsAndPans, setter=_setShouldDismissForTapsAndPans:) _Bool shouldDismissForTapsAndPans; // @synthesize shouldDismissForTapsAndPans=_shouldDismissForTapsAndPans;
- (void)_updateDelegateOfPolicyChange;	// IMP=0x0000000000028e77
- (void)_setShouldDismissForTapsAndPans:(_Bool)arg1 shouldDelayDelegateUpdate:(_Bool)arg2;	// IMP=0x0000000000028cbd
- (void)_dismissalPolicyForPassThroughUnlessDimmed:(_Bool)arg1 forSessionState:(long long)arg2;	// IMP=0x0000000000028bc7
- (void)_dismissalPolicyForPassThroughAlways:(_Bool)arg1 forSessionState:(long long)arg2;	// IMP=0x0000000000028b07
- (void)invalidate;	// IMP=0x0000000000028a8c
- (void)dimmingLayerVisibilityDidChange:(_Bool)arg1 forSessionState:(long long)arg2;	// IMP=0x0000000000028923
- (void)idleAndQuietDidChange:(_Bool)arg1 forSessionState:(long long)arg2;	// IMP=0x0000000000028789
- (void)idleAndQuietDidChange:(_Bool)arg1 forSessionState:(long long)arg2 dimmingLayerVisible:(_Bool)arg3;	// IMP=0x0000000000028609
- (id)initWithPolicy:(long long)arg1 delegate:(id)arg2;	// IMP=0x0000000000028573

@end

