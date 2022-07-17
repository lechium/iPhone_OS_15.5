//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBar;

@interface UIStatusBar_Modern
{
    _UIStatusBar *_statusBar;	// 8 = 0x8
}

+ (id)sensorActivityIndicator;	// IMP=0x0000000000e76896
+ (void)setSensorActivityIndicator:(id)arg1;	// IMP=0x0000000000e7687d
+ (long long)_defaultStyleForRequestedStyle:(long long)arg1 styleOverrides:(unsigned long long)arg2 activeStyleOverride:(unsigned long long *)arg3;	// IMP=0x0000000000e75346
+ (double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(_Bool)arg3 inWindow:(id)arg4 isAzulBLinked:(_Bool)arg5;	// IMP=0x0000000000e752c0
+ (Class)_implementationClass;	// IMP=0x0000000000e75098
- (void).cxx_destruct;	// IMP=0x0000000000e76f84
@property(retain, nonatomic) _UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000e76f42
- (void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(long long)arg3;	// IMP=0x0000000000e76f2e
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const CDStruct_e9def42b *)arg2 withActions:(int)arg3;	// IMP=0x0000000000e76eca
- (void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(unsigned long long)arg2;	// IMP=0x0000000000e76dd0
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const CDStruct_e9def42b *)arg2 withActions:(int)arg3;	// IMP=0x0000000000e76d6c
- (void)forceUpdateData:(_Bool)arg1;	// IMP=0x0000000000e76c39
- (void)forceUpdate:(_Bool)arg1;	// IMP=0x0000000000e76ba9
- (void)layoutSubviews;	// IMP=0x0000000000e76b52
- (struct CGRect)frameForPartWithIdentifier:(id)arg1;	// IMP=0x0000000000e76adf
- (id)enabledPartIdentifiers;	// IMP=0x0000000000e76ac2
- (void)setEnabledPartIdentifiers:(id)arg1;	// IMP=0x0000000000e76aa5
- (double)alphaForPartWithIdentifier:(id)arg1;	// IMP=0x0000000000e76a88
- (void)setAlpha:(double)arg1 forPartWithIdentifier:(id)arg2;	// IMP=0x0000000000e76a6b
- (struct UIOffset)offsetForPartWithIdentifier:(id)arg1;	// IMP=0x0000000000e76a4e
- (void)setOffset:(struct UIOffset)arg1 forPartWithIdentifier:(id)arg2;	// IMP=0x0000000000e76a31
- (id)actionForPartWithIdentifier:(id)arg1;	// IMP=0x0000000000e76a14
- (void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2;	// IMP=0x0000000000e769f7
- (void)jiggleLockIcon;	// IMP=0x0000000000e76905
- (void)setOrientation:(long long)arg1;	// IMP=0x0000000000e768af
- (void)setMode:(long long)arg1;	// IMP=0x0000000000e76827
- (double)defaultDoubleHeight;	// IMP=0x0000000000e7681e
- (void)setAvoidanceFrame:(struct CGRect)arg1;	// IMP=0x0000000000e767b0
- (void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2;	// IMP=0x0000000000e766ef
- (void)setForegroundAlpha:(double)arg1 animationParameters:(id)arg2;	// IMP=0x0000000000e7660c
- (void)setForegroundColor:(id)arg1 animationParameters:(id)arg2;	// IMP=0x0000000000e7654f
- (void)setStyleRequest:(id)arg1 animationParameters:(id)arg2;	// IMP=0x0000000000e76465
- (long long)currentStyle;	// IMP=0x0000000000e7642d
- (void)_requestStyle:(long long)arg1 partStyles:(id)arg2 animationParameters:(id)arg3 forced:(_Bool)arg4;	// IMP=0x0000000000e76379
- (void)_requestStyle:(long long)arg1 partStyles:(id)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 animationParameters:(id)arg5 forced:(_Bool)arg6;	// IMP=0x0000000000e7604a
- (void)_updateWithData:(id)arg1 force:(_Bool)arg2;	// IMP=0x0000000000e75e70
- (unsigned long long)_implicitStyleOverrideForStyle:(long long)arg1;	// IMP=0x0000000000e75c49
- (id)_effectiveDataFromData:(id)arg1 activeOverride:(unsigned long long)arg2 canUpdateBackgroundActivity:(_Bool)arg3;	// IMP=0x0000000000e755e4
- (long long)_effectiveStyleFromStyle:(long long)arg1;	// IMP=0x0000000000e75500
- (id)_dataFromLegacyData:(const CDStruct_e9def42b *)arg1;	// IMP=0x0000000000e753b0
- (void)_updateSemanticContentAttributeFromLegacyData:(const CDStruct_e9def42b *)arg1;	// IMP=0x0000000000e75380
- (id)_initWithFrame:(struct CGRect)arg1 showForegroundView:(_Bool)arg2 wantsServer:(_Bool)arg3 inProcessStateProvider:(id)arg4;	// IMP=0x0000000000e750a1

@end
