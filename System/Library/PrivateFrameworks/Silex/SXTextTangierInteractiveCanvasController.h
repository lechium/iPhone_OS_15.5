//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/TSWPInteractiveCanvasController.h>

@class UIScrollView;
@protocol SXTextTangierInteractiveCanvasControllerDataSource;

@interface SXTextTangierInteractiveCanvasController : TSWPInteractiveCanvasController
{
    _Bool _forceLayoutAndRenderOnThread;	// 618 = 0x26a
    _Bool _isSelecting;	// 619 = 0x26b
    _Bool _startedEditing;	// 620 = 0x26c
    _Bool _isScrolling;	// 621 = 0x26d
    _Bool _mightScrollToTop;	// 622 = 0x26e
    UIScrollView *_scrollView;	// 624 = 0x270
    id <SXTextTangierInteractiveCanvasControllerDataSource> _dataSource;	// 632 = 0x278
}

+ (void)createCanvasWithDelegate:(id)arg1 outICC:(id *)arg2 outLayerHost:(id *)arg3 iccClass:(Class)arg4 layerHostClass:(Class)arg5;	// IMP=0x00000000000c928d
- (void).cxx_destruct;	// IMP=0x00000000000c9faf
@property(nonatomic) _Bool mightScrollToTop; // @synthesize mightScrollToTop=_mightScrollToTop;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(nonatomic) _Bool startedEditing; // @synthesize startedEditing=_startedEditing;
@property(nonatomic) _Bool isSelecting; // @synthesize isSelecting=_isSelecting;
@property(nonatomic) _Bool forceLayoutAndRenderOnThread; // @synthesize forceLayoutAndRenderOnThread=_forceLayoutAndRenderOnThread;
@property(nonatomic) __weak id <SXTextTangierInteractiveCanvasControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)teardown;	// IMP=0x00000000000c9e7a
- (void)endUISession;	// IMP=0x00000000000c9e36
- (_Bool)p_shouldLayoutAndRenderOnThreadForcePendingLayout:(_Bool)arg1;	// IMP=0x00000000000c9e24
- (_Bool)p_currentlyScrolling;	// IMP=0x00000000000c9db2
- (id)hitRep:(struct CGPoint)arg1 withGesture:(id)arg2 passingTest:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c9cb6
- (id)closestRepToPoint:(struct CGPoint)arg1 forStorage:(id)arg2;	// IMP=0x00000000000c9979
- (id)i_topLevelLayersForTiling;	// IMP=0x00000000000c98ac
- (id)topLevelRepsForHitTesting;	// IMP=0x00000000000c97df
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000000000c975f
- (void)scrollViewDidScrollToTop:(id)arg1;	// IMP=0x00000000000c96df
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000000c965f
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;	// IMP=0x00000000000c9623
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000000000c9532
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000000c944c
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000000c93c9
- (void)didBeginEditingText;	// IMP=0x00000000000c93b2
- (void)setSelection:(id)arg1 onModel:(id)arg2 withFlags:(unsigned long long)arg3;	// IMP=0x00000000000c92aa

@end

