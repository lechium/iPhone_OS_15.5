//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBHViewControllerTransitionAnimating-Protocol.h>
#import <SpringBoardHome/SBIconViewObserver-Protocol.h>

@class NSString, SBFTouchPassThroughView, SBHWidgetConfigurationTransformView, SBHWidgetSettings, UIView, UIViewFloatAnimatableProperty;

@interface SBHWidgetConfigurationFlipAnimator : NSObject <SBIconViewObserver, SBHViewControllerTransitionAnimating>
{
    SBHWidgetSettings *_widgetSettings;	// 8 = 0x8
    SBFTouchPassThroughView *_matchMoveView;	// 16 = 0x10
    SBHWidgetConfigurationTransformView *_sourceContainerView;	// 24 = 0x18
    UIView *_targetSuperview;	// 32 = 0x20
    long long _currentEndpoint;	// 40 = 0x28
    double _startingFlipFraction;	// 48 = 0x30
    double _endingFlipFraction;	// 56 = 0x38
    double _startingRotationAngle;	// 64 = 0x40
    double _endingRotationAngle;	// 72 = 0x48
    UIViewFloatAnimatableProperty *_flipAnimatableProperty;	// 80 = 0x50
    struct CGRect _sourceContentFrame;	// 88 = 0x58
    struct CGRect _targetContentFrame;	// 120 = 0x78
    struct CGRect _homeScreenContentFrame;	// 152 = 0x98
    struct CGRect _sourceContentFrameInMatchMoveViewSpace;	// 184 = 0xb8
    struct CGRect _targetContentFrameInMatchMoveViewSpace;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x00000000001f2222
@property(retain, nonatomic) UIViewFloatAnimatableProperty *flipAnimatableProperty; // @synthesize flipAnimatableProperty=_flipAnimatableProperty;
@property(nonatomic) double endingRotationAngle; // @synthesize endingRotationAngle=_endingRotationAngle;
@property(nonatomic) double startingRotationAngle; // @synthesize startingRotationAngle=_startingRotationAngle;
@property(nonatomic) double endingFlipFraction; // @synthesize endingFlipFraction=_endingFlipFraction;
@property(nonatomic) double startingFlipFraction; // @synthesize startingFlipFraction=_startingFlipFraction;
@property(nonatomic) long long currentEndpoint; // @synthesize currentEndpoint=_currentEndpoint;
@property(nonatomic) struct CGRect targetContentFrameInMatchMoveViewSpace; // @synthesize targetContentFrameInMatchMoveViewSpace=_targetContentFrameInMatchMoveViewSpace;
@property(nonatomic) struct CGRect sourceContentFrameInMatchMoveViewSpace; // @synthesize sourceContentFrameInMatchMoveViewSpace=_sourceContentFrameInMatchMoveViewSpace;
@property(nonatomic) struct CGRect homeScreenContentFrame; // @synthesize homeScreenContentFrame=_homeScreenContentFrame;
@property(nonatomic) struct CGRect targetContentFrame; // @synthesize targetContentFrame=_targetContentFrame;
@property(nonatomic) struct CGRect sourceContentFrame; // @synthesize sourceContentFrame=_sourceContentFrame;
@property(retain, nonatomic) UIView *targetSuperview; // @synthesize targetSuperview=_targetSuperview;
@property(retain, nonatomic) SBHWidgetConfigurationTransformView *sourceContainerView; // @synthesize sourceContainerView=_sourceContainerView;
@property(retain, nonatomic) SBFTouchPassThroughView *matchMoveView; // @synthesize matchMoveView=_matchMoveView;
@property(readonly, nonatomic) SBHWidgetSettings *widgetSettings; // @synthesize widgetSettings=_widgetSettings;
- (void)iconViewWasDiscarded:(id)arg1;	// IMP=0x00000000001f1fee
- (void)iconViewDidBecomeWindowless:(id)arg1;	// IMP=0x00000000001f1fac
- (void)iconViewWasRecycled:(id)arg1;	// IMP=0x00000000001f1f6a
- (void)_configureForEndpoint:(long long)arg1 context:(id)arg2 inMode:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001f16b8
- (void)finalizeAnimationAtEndpoint:(long long)arg1 withContext:(id)arg2;	// IMP=0x00000000001f1417
- (void)animateToEndpoint:(long long)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001f12b0
- (void)prepareToAnimateFromEndpoint:(long long)arg1 withContext:(id)arg2;	// IMP=0x00000000001efb91
- (void)dealloc;	// IMP=0x00000000001efb26
- (id)init;	// IMP=0x00000000001efa8a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

