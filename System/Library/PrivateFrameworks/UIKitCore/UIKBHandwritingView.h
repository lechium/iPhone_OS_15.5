//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSMutableArray, NSMutableSet, NSString, UIBezierPath, UIDelayedAction, UIKBHandwritingBezierPathPointFIFO, UIKBHandwritingBoxcarFilterPointFIFO, UIKBHandwritingInputSpeedModel, UIKBHandwritingQuadCurvePointFIFO, UIKBHandwritingStrokePointFIFO, UIKBHandwritingStrokeView, UIView;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingView <UIGestureRecognizerDelegate>
{
    _Bool _initialPointPosted;	// 80 = 0x50
    double _inkWidth;	// 88 = 0x58
    struct CGColor *_inkColor;	// 96 = 0x60
    struct CGImage *_inkMask;	// 104 = 0x68
    NSMutableArray *_interpolatedPoints;	// 112 = 0x70
    UIBezierPath *_currentPath;	// 120 = 0x78
    NSMutableArray *_currentPoints;	// 128 = 0x80
    UIKBHandwritingStrokePointFIFO *_strokeFIFO;	// 136 = 0x88
    UIKBHandwritingBoxcarFilterPointFIFO *_smoothingFIFO;	// 144 = 0x90
    UIKBHandwritingQuadCurvePointFIFO *_interpolatingFIFO;	// 152 = 0x98
    UIKBHandwritingBezierPathPointFIFO *_bezierPathFIFO;	// 160 = 0xa0
    UIKBHandwritingStrokeView *_strokeView;	// 168 = 0xa8
    UIView *_snapshotView;	// 176 = 0xb0
    NSMutableSet *_activeTouches;	// 184 = 0xb8
    double _pageOffset;	// 192 = 0xc0
    UIDelayedAction *_nextPageTimer;	// 200 = 0xc8
    UIKBHandwritingInputSpeedModel *_inputSpeedModel;	// 208 = 0xd0
    CDStruct_23d8ee2f _previousPoint;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x0000000000959db3
@property(retain, nonatomic) UIKBHandwritingInputSpeedModel *inputSpeedModel; // @synthesize inputSpeedModel=_inputSpeedModel;
@property(retain, nonatomic) UIDelayedAction *nextPageTimer; // @synthesize nextPageTimer=_nextPageTimer;
@property(nonatomic) double pageOffset; // @synthesize pageOffset=_pageOffset;
@property(nonatomic) CDStruct_19cde01f previousPoint; // @synthesize previousPoint=_previousPoint;
@property(nonatomic) _Bool initialPointPosted; // @synthesize initialPointPosted=_initialPointPosted;
@property(retain, nonatomic) NSMutableSet *activeTouches; // @synthesize activeTouches=_activeTouches;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) UIKBHandwritingStrokeView *strokeView; // @synthesize strokeView=_strokeView;
@property(retain, nonatomic) UIKBHandwritingBezierPathPointFIFO *bezierPathFIFO; // @synthesize bezierPathFIFO=_bezierPathFIFO;
@property(retain, nonatomic) UIKBHandwritingQuadCurvePointFIFO *interpolatingFIFO; // @synthesize interpolatingFIFO=_interpolatingFIFO;
@property(retain, nonatomic) UIKBHandwritingBoxcarFilterPointFIFO *smoothingFIFO; // @synthesize smoothingFIFO=_smoothingFIFO;
@property(retain, nonatomic) UIKBHandwritingStrokePointFIFO *strokeFIFO; // @synthesize strokeFIFO=_strokeFIFO;
@property(retain, nonatomic) NSMutableArray *currentPoints; // @synthesize currentPoints=_currentPoints;
@property(retain, nonatomic) UIBezierPath *currentPath; // @synthesize currentPath=_currentPath;
@property(retain, nonatomic) NSMutableArray *interpolatedPoints; // @synthesize interpolatedPoints=_interpolatedPoints;
@property(nonatomic) struct CGImage *inkMask; // @synthesize inkMask=_inkMask;
@property(nonatomic) struct CGColor *inkColor; // @synthesize inkColor=_inkColor;
@property(nonatomic) double inkWidth; // @synthesize inkWidth=_inkWidth;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000959802
- (_Bool)cancelTouchTracking;	// IMP=0x000000000095967a
- (void)clearTouches;	// IMP=0x0000000000959629
- (_Bool)shouldAllowSelectionGestures:(_Bool)arg1;	// IMP=0x000000000095934d
- (unsigned long long)numberOfStrokes;	// IMP=0x00000000009592bc
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009591f2
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000095915b
- (_Bool)endStrokeWithTouches:(id)arg1 event:(id)arg2;	// IMP=0x0000000000958a59
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000958551
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000095834c
- (void)addInkPoint:(struct CGPoint)arg1 value:(double)arg2;	// IMP=0x0000000000958206
- (void)send;	// IMP=0x00000000009580bd
- (void)deleteStrokesAtIndexes:(id)arg1;	// IMP=0x000000000095767c
- (void)clearAndNotify:(_Bool)arg1;	// IMP=0x000000000095737c
- (void)updateInkColor;	// IMP=0x0000000000957208
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;	// IMP=0x00000000009571d8
- (void)setRenderConfig:(id)arg1;	// IMP=0x0000000000957086
- (_Bool)shouldCache;	// IMP=0x000000000095707e
- (void)startFadeOutAnimation;	// IMP=0x0000000000956e15
- (void)didMoveToWindow;	// IMP=0x0000000000956da7
- (void)pageOffsetTimerFired;	// IMP=0x0000000000956921
- (void)cancelPageOffsetTimer;	// IMP=0x0000000000956882
- (void)touchPageOffsetTimer;	// IMP=0x00000000009564ab
- (void)log;	// IMP=0x0000000000955fa0
- (void)dealloc;	// IMP=0x0000000000955f15
- (void)layoutSubviews;	// IMP=0x0000000000955d1b
- (void)displayLayer:(id)arg1;	// IMP=0x0000000000955caa
- (id)layerForRenderFlags:(long long)arg1;	// IMP=0x000000000095599a
- (void)recreateInkMaskIfNeeded;	// IMP=0x0000000000954d99
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;	// IMP=0x0000000000953b5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

