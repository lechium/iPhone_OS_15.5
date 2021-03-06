//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface CrossFadeView : UIView
{
    _Bool _scaleSize;	// 8 = 0x8
    UIView *_startView;	// 16 = 0x10
    UIView *_endView;	// 24 = 0x18
    struct CGRect _startFrame;	// 32 = 0x20
    struct CGRect _endFrame;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000002b9de
@property(nonatomic) _Bool scaleSize; // @synthesize scaleSize=_scaleSize;
@property(readonly, nonatomic) struct CGRect endFrame; // @synthesize endFrame=_endFrame;
@property(readonly, nonatomic) struct CGRect startFrame; // @synthesize startFrame=_startFrame;
@property(readonly, nonatomic) UIView *endView; // @synthesize endView=_endView;
@property(readonly, nonatomic) UIView *startView; // @synthesize startView=_startView;
- (id)description;	// IMP=0x000000000002b7ba
- (void)haltAnimation;	// IMP=0x000000000002b4fe
- (void)setToEndState;	// IMP=0x000000000002b400
- (void)setToStartState;	// IMP=0x000000000002b18d
- (void)springAnimateToEndStateWithTimingFunction:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b053
- (void)springAnimateToEndStateWithTimingFunction:(int)arg1;	// IMP=0x000000000002b03f
- (void)springAnimateToStartStateWithTimingFunction:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002aef7
- (void)springAnimateToStartStateWithTimingFunction:(int)arg1;	// IMP=0x000000000002aee3
- (void)animateToEndStateWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002add4
- (void)animateToStartStateWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002acc5
- (void)setEndView:(id)arg1;	// IMP=0x000000000002abbb
- (void)setStartView:(id)arg1;	// IMP=0x000000000002aab1
- (id)initWithStartView:(id)arg1 endView:(id)arg2 startFrame:(struct CGRect)arg3 endFrame:(struct CGRect)arg4;	// IMP=0x000000000002a9da
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002a98a

@end

