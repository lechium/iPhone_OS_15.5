//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

#import <AVKit/AVPlaybackContentContainer-Protocol.h>
#import <AVKit/UIScrollViewDelegate-Protocol.h>

@class AVPlaybackContentContainerView, NSString, NSValue;
@protocol AVPlaybackContentTransitioningViewDelegate;

__attribute__((visibility("hidden")))
@interface AVPlaybackContentTransitioningView : UIScrollView <UIScrollViewDelegate, AVPlaybackContentContainer>
{
    _Bool _playingOnSecondScreen;	// 8 = 0x8
    _Bool _transitionInteractive;	// 9 = 0x9
    AVPlaybackContentContainerView *_activeContentView;	// 16 = 0x10
    long long _transitionState;	// 24 = 0x18
    long long _transitionDirection;	// 32 = 0x20
    double _transitionProgress;	// 40 = 0x28
    id <AVPlaybackContentTransitioningViewDelegate> _contentTransitioningDelegate;	// 48 = 0x30
    AVPlaybackContentContainerView *_incomingContentView;	// 56 = 0x38
    NSValue *_targetContentOffset;	// 64 = 0x40
    NSString *_stateDescription;	// 72 = 0x48
    long long _boundsOrContentSizeAdjustmentCount;	// 80 = 0x50
    struct CGRect _frameForActiveContentView;	// 88 = 0x58
    struct CGRect _frameForTransitioningContentView;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000006a19f
@property(nonatomic) long long boundsOrContentSizeAdjustmentCount; // @synthesize boundsOrContentSizeAdjustmentCount=_boundsOrContentSizeAdjustmentCount;
@property(nonatomic) struct CGRect frameForTransitioningContentView; // @synthesize frameForTransitioningContentView=_frameForTransitioningContentView;
@property(nonatomic) struct CGRect frameForActiveContentView; // @synthesize frameForActiveContentView=_frameForActiveContentView;
@property(copy, nonatomic) NSString *stateDescription; // @synthesize stateDescription=_stateDescription;
@property(retain, nonatomic) NSValue *targetContentOffset; // @synthesize targetContentOffset=_targetContentOffset;
@property(nonatomic, getter=isTransitionInteractive) _Bool transitionInteractive; // @synthesize transitionInteractive=_transitionInteractive;
@property(readonly, nonatomic) AVPlaybackContentContainerView *incomingContentView; // @synthesize incomingContentView=_incomingContentView;
@property(nonatomic) __weak id <AVPlaybackContentTransitioningViewDelegate> contentTransitioningDelegate; // @synthesize contentTransitioningDelegate=_contentTransitioningDelegate;
@property(readonly, nonatomic) double transitionProgress; // @synthesize transitionProgress=_transitionProgress;
@property(readonly, nonatomic) long long transitionDirection; // @synthesize transitionDirection=_transitionDirection;
@property(readonly, nonatomic) long long transitionState; // @synthesize transitionState=_transitionState;
@property(readonly, nonatomic) AVPlaybackContentContainerView *activeContentView; // @synthesize activeContentView=_activeContentView;
@property(nonatomic, getter=isPlayingOnSecondScreen) _Bool playingOnSecondScreen; // @synthesize playingOnSecondScreen=_playingOnSecondScreen;
- (id)_makeStateDescription;	// IMP=0x0000000000069f3c
- (id)_descriptionForState:(long long)arg1;	// IMP=0x0000000000069ebe
- (_Bool)_canTransitionFromState:(long long)arg1 toState:(long long)arg2;	// IMP=0x0000000000069c2c
- (struct CGRect)_frameExcludingTransitioningContent;	// IMP=0x0000000000069b1b
- (struct CGRect)_frameExcludingActiveContent;	// IMP=0x0000000000069a0a
- (void)_ensureContentViews;	// IMP=0x0000000000069818
- (void)_updateSizeAndContentFrame;	// IMP=0x0000000000069376
- (_Bool)_isAdjustingBoundsOrContentSize;	// IMP=0x000000000006935d
- (void)_performBoundsOrContentSizeAdjustment:(CDUnknownBlockType)arg1;	// IMP=0x00000000000692e0
- (void)_updateTransitionStateIfPossible;	// IMP=0x0000000000069054
- (void)performTransition:(long long)arg1;	// IMP=0x0000000000068e30
- (void)_setTransitionState:(id)arg1 transitionDirection:(id)arg2 transitionProgress:(id)arg3;	// IMP=0x000000000006781c
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000000067802
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000000677d0
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000000006779b
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000000006763f
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000006762d
@property(nonatomic) _Bool canShowStatusBarBackgroundGradientWhenStatusBarVisible;
- (void)setVideoGravity:(long long)arg1 removingAllSubayerTransformAnimations:(_Bool)arg2;	// IMP=0x00000000000674ca
@property(nonatomic) struct CGRect videoContentFrame;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000067374
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000000672a3
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000067274
- (id)initWithFrame:(struct CGRect)arg1 activeContentView:(id)arg2;	// IMP=0x000000000006704b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
