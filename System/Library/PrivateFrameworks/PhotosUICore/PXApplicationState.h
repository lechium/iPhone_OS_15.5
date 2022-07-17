//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, UIApplication;

@interface PXApplicationState
{
    NSMutableSet *_disabledIdleTimerTokens;	// 8 = 0x8
    _Bool _isHidden;	// 16 = 0x10
    UIApplication *_application;	// 24 = 0x18
}

+ (id)sharedState;	// IMP=0x00000000003829c7
- (void).cxx_destruct;	// IMP=0x00000000003826bd
@property(readonly, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
- (_Bool)isDisablingIdleTimerForReasons:(id *)arg1;	// IMP=0x0000000000382481
- (void)endDisablingIdleTimer:(id)arg1;	// IMP=0x00000000003822c8
- (id)beginDisablingIdleTimerForReason:(id)arg1;	// IMP=0x00000000003820ca
- (void)_sceneDidActivate:(id)arg1;	// IMP=0x000000000038200d
- (void)_sceneWillDeactivate:(id)arg1;	// IMP=0x0000000000381f4d
- (void)_appDidUnhide:(id)arg1;	// IMP=0x0000000000381f39
- (void)_appDidHide:(id)arg1;	// IMP=0x0000000000381f22
- (void)setIsHidden:(_Bool)arg1;	// IMP=0x0000000000381ec4
- (id)initWithApplication:(id)arg1 isExtension:(_Bool)arg2;	// IMP=0x0000000000381c74
- (id)initWithApplication:(id)arg1;	// IMP=0x0000000000381c60
- (id)init;	// IMP=0x0000000000381be6

@end
