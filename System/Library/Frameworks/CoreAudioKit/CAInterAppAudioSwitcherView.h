//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <CoreAudioKit/UIScrollViewDelegate-Protocol.h>

@class CAIAANodeContainer, CAIAANodeInfo, NSString, NSTimer, UIPageControl;

@interface CAInterAppAudioSwitcherView : UIView <UIScrollViewDelegate>
{
    struct OpaqueAudioComponentInstance *outputUnit;	// 8 = 0x8
    CAIAANodeContainer *nodeView;	// 16 = 0x10
    UIPageControl *pageControl;	// 24 = 0x18
    CAIAANodeInfo *info;	// 32 = 0x20
    NSTimer *refreshTimer;	// 40 = 0x28
    _Bool showingAppNames;	// 48 = 0x30
    _Bool isHostConnected;	// 49 = 0x31
}

- (double)contentWidth;	// IMP=0x000000000000471f
- (_Bool)isHostConnected;	// IMP=0x00000000000046b7
- (void)appHasGoneInBackground;	// IMP=0x0000000000004688
- (void)appHasGoneForeground;	// IMP=0x000000000000465a
- (void)nodePressed:(id)arg1;	// IMP=0x0000000000004609
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000458b
- (void)changePage:(id)arg1;	// IMP=0x00000000000044e1
- (void)layoutSubviews;	// IMP=0x00000000000042d7
- (void)updateNodeList;	// IMP=0x0000000000003f81
@property(getter=isShowingAppNames) _Bool showingAppNames;
- (void)setOutputAudioUnit:(struct OpaqueAudioComponentInstance *)arg1;	// IMP=0x0000000000003d25
- (void)didMoveToSuperview;	// IMP=0x0000000000003ce4
- (void)startTimer;	// IMP=0x0000000000003c7b
- (void)removeFromSuperview;	// IMP=0x0000000000003be2
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003b96
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000003b39
- (void)initialize;	// IMP=0x000000000000397d
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000000004805
- (void)updateInfo;	// IMP=0x0000000000004756
- (void)audioUnitPropertyChangedListener:(void *)arg1 unit:(struct OpaqueAudioComponentInstance *)arg2 propID:(unsigned int)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5;	// IMP=0x000000000000473c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

