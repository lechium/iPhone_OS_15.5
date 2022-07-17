//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDisplayAnnotationController, NSString;
@protocol OS_dispatch_queue;

@interface BKTouchAnnotationController : NSObject
{
    _Bool _shouldVisualizeTouches;	// 8 = 0x8
    _Bool _shouldVisualizeHitTestRegions;	// 9 = 0x9
    BKDisplayAnnotationController *_displayAnnotationController;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
}

+ (id)workQueue;	// IMP=0x00200000000267ae
- (void).cxx_destruct;	// IMP=0x0020000000025ca6
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) BKDisplayAnnotationController *displayAnnotationController; // @synthesize displayAnnotationController=_displayAnnotationController;
- (void)_queue_touchWasSoftCanceled:(unsigned int)arg1;	// IMP=0x0010000000025a78
- (void)_queue_touchWasHardCanceled:(unsigned int)arg1;	// IMP=0x00100000000259bc
- (void)_queue_setCenter:(struct CGPoint)arg1 forTouchIdentifier:(unsigned int)arg2;	// IMP=0x0010000000025866
- (id)_keyPathForTouchIdentifier:(unsigned int)arg1;	// IMP=0x0010000000025842
- (int)_pidForClientPort:(unsigned int)arg1;	// IMP=0x00100000000257c9
- (id)_stringDescribingContextID:(unsigned int)arg1 clientPort:(unsigned int)arg2;	// IMP=0x00100000000256af
- (id)_stringDescribingPID:(int)arg1;	// IMP=0x001000000002559a
- (id)_stringByRemovingPrefix:(id)arg1 fromString:(id)arg2;	// IMP=0x00100000000254df
- (void)_queue_annotateTouch:(unsigned int)arg1 withString:(id)arg2 uniqueIdentifier:(id)arg3 fromPID:(int)arg4;	// IMP=0x0010000000025228
- (void)_queue_annotateTouch:(unsigned int)arg1 withUniqueString:(id)arg2;	// IMP=0x001000000002520d
- (void)hitTestRegionsDidChange:(id)arg1;	// IMP=0x0010000000025182
- (void)touchDidFinishProcessingTouchCollection;	// IMP=0x001000000002517c
- (void)touchWillStartProcessingTouchCollection;	// IMP=0x0010000000025176
- (void)touchDidSoftCancel:(unsigned int)arg1;	// IMP=0x0010000000025128
- (void)touch:(unsigned int)arg1 didAlwaysRouteToContext:(unsigned int)arg2 clientPort:(unsigned int)arg3;	// IMP=0x00100000000250d3
- (void)touchDidHIDCancel:(unsigned int)arg1;	// IMP=0x0010000000025085
- (void)touch:(unsigned int)arg1 pathIndex:(long long)arg2 upAtPoint:(struct CGPoint)arg3;	// IMP=0x0010000000025037
- (void)touch:(unsigned int)arg1 didMoveToPoint:(struct CGPoint)arg2 eventMask:(unsigned int)arg3;	// IMP=0x0010000000024fdf
- (void)touchDidDetach:(unsigned int)arg1;	// IMP=0x0010000000024f91
- (void)touch:(unsigned int)arg1 didHitTestToContextID:(unsigned int)arg2 clientPort:(unsigned int)arg3 hostingChainIndex:(long long)arg4;	// IMP=0x0010000000024f38
- (void)touch:(unsigned int)arg1 pathIndex:(long long)arg2 downAtPoint:(struct CGPoint)arg3 eventMask:(unsigned int)arg4 transducerType:(unsigned int)arg5;	// IMP=0x0010000000024edc
- (void)annotateTouch:(unsigned int)arg1 withString:(id)arg2 uniqueIdentifier:(id)arg3 fromPID:(int)arg4;	// IMP=0x0010000000024e0f
- (void)annotateTouch:(unsigned int)arg1 withString:(id)arg2 uniqueIdentifier:(id)arg3;	// IMP=0x0010000000024d4f
- (void)annotateTouch:(unsigned int)arg1 withUniqueString:(id)arg2;	// IMP=0x0010000000024cb8
@property _Bool shouldVisualizeHitTestRegions;
@property _Bool shouldVisualizeTouches;
- (id)initWithDisplayUUID:(id)arg1;	// IMP=0x0010000000024a29

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
