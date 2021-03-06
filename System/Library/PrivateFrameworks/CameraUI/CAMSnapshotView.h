//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <CameraUI/_UIBasicAnimationFactory-Protocol.h>

@class NSString, UIVisualEffectView;

@interface CAMSnapshotView : UIView <_UIBasicAnimationFactory>
{
    _Bool _blurred;	// 8 = 0x8
    _Bool _dimmed;	// 9 = 0x9
    _Bool __supportsBlur;	// 10 = 0xa
    UIView *_snapshotView;	// 16 = 0x10
    long long _desiredAspectRatio;	// 24 = 0x18
    UIView *__lowQualityBlurView;	// 32 = 0x20
    UIView *__dimmingView;	// 40 = 0x28
    UIVisualEffectView *__blurView;	// 48 = 0x30
    long long __blurStyleForEffectAnimationFactory;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000136767
@property(nonatomic, setter=_setBlurStyleForEffectAnimationFactory:) long long _blurStyleForEffectAnimationFactory; // @synthesize _blurStyleForEffectAnimationFactory=__blurStyleForEffectAnimationFactory;
@property(retain, nonatomic, setter=_setBlurView:) UIVisualEffectView *_blurView; // @synthesize _blurView=__blurView;
@property(readonly, nonatomic) UIView *_dimmingView; // @synthesize _dimmingView=__dimmingView;
@property(readonly, nonatomic) UIView *_lowQualityBlurView; // @synthesize _lowQualityBlurView=__lowQualityBlurView;
@property(readonly, nonatomic) _Bool _supportsBlur; // @synthesize _supportsBlur=__supportsBlur;
@property(nonatomic) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(nonatomic) _Bool blurred; // @synthesize blurred=_blurred;
@property(readonly, nonatomic) long long desiredAspectRatio; // @synthesize desiredAspectRatio=_desiredAspectRatio;
@property(readonly, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
- (void)prepareForResumingUsingCrossfade;	// IMP=0x0000000000067a3c
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x0000000000066041
- (void)_removeAnimationOnView:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000067760
- (void)removeInflightBlurAnimations;	// IMP=0x00000000000673ae
- (void)_removeSnapshotDimAnimated:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000013646e
- (void)_applySnapshotDimAnimated:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000013629a
- (void)_setupDimOnSnapshot;	// IMP=0x00000000001361ac
- (void)_removeLowQualityBlurForStyle:(long long)arg1 animated:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000135ee9
- (void)_applyLowQualityBlurForStyle:(long long)arg1 animated:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000135c6a
- (void)_prepareForApplyingLowQualityBlurForStyle:(long long)arg1 applying:(_Bool)arg2 opacityAmount:(double *)arg3 opacityDuration:(double *)arg4 opacityDelay:(double *)arg5 opacityTimingFunction:(id *)arg6 targetView:(id *)arg7;	// IMP=0x0000000000135a50
- (void)_setupLowQualityBlurOnSnapshot;	// IMP=0x0000000000135951
- (void)_removeSnapshotBlurForStyle:(long long)arg1 animated:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000135554
- (void)_applySnapshotBlurForStyle:(long long)arg1 animated:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000065c64
- (double)_resumeFadeInDuration;	// IMP=0x000000000013548c
- (void)_prepareForApplyingBlurForStyle:(long long)arg1 applying:(_Bool)arg2 inputRadiusAmount:(double *)arg3 inputRadiusDuration:(double *)arg4 inputRadiusDelay:(double *)arg5 inputRadiusTimingFunction:(id *)arg6 opacityAmount:(double *)arg7 opacityDuration:(double *)arg8 opacityDelay:(double *)arg9 opacityTimingFunction:(id *)arg10;	// IMP=0x000000000013517e
- (void)fadeOutAnimatedWithStyle:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000135164
- (void)setDimmed:(_Bool)arg1 animated:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000001350fc
- (void)setBlurred:(_Bool)arg1 animated:(_Bool)arg2 style:(long long)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000065b8c
- (id)initWithView:(id)arg1 desiredAspectRatio:(long long)arg2;	// IMP=0x0000000000065817

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

