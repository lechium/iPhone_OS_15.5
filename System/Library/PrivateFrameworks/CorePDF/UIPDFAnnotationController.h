//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CorePDF/UIGestureRecognizerDelegate-Protocol.h>

@class CALayer, NSString, UIColor, UIPDFAnnotation, UIPDFMarkupAnnotation, UIPDFPageView;
@protocol NSObject><UIPDFAnnotationControllerDelegate;

@interface UIPDFAnnotationController : NSObject <UIGestureRecognizerDelegate>
{
    UIPDFPageView *_pageView;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    struct CGPoint _startPoint;	// 24 = 0x18
    _Bool _moving;	// 40 = 0x28
    UIPDFMarkupAnnotation *_currentAnnotation;	// 48 = 0x30
    CDStruct_627e0f85 _initialRange;	// 56 = 0x38
    _Bool _tracking;	// 72 = 0x48
    CALayer *_drawingSurface;	// 80 = 0x50
    id <NSObject><UIPDFAnnotationControllerDelegate> _delegate;	// 88 = 0x58
    struct CGSize _cachedMarginNoteSize;	// 96 = 0x60
    _Bool makeUnderlineAnnotation;	// 112 = 0x70
    _Bool _allowEditing;	// 113 = 0x71
    UIColor *_currentColor;	// 120 = 0x78
}

+ (struct CGImage *)newMaskImage:(struct CGPDFPage *)arg1 size:(struct CGSize)arg2;	// IMP=0x0000000000082e6d
+ (id)newAnnotation:(struct CGPDFDictionary *)arg1 type:(const char *)arg2;	// IMP=0x000000000007fdec
+ (_Bool)pageHasAnnotations:(id)arg1;	// IMP=0x000000000007fd9e
@property(nonatomic) UIColor *currentColor; // @synthesize currentColor=_currentColor;
@property(nonatomic) _Bool allowEditing; // @synthesize allowEditing=_allowEditing;
@property(readonly, nonatomic) UIPDFPageView *pageView; // @synthesize pageView=_pageView;
@property(readonly, nonatomic) _Bool tracking; // @synthesize tracking=_tracking;
@property(nonatomic) id <NSObject><UIPDFAnnotationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CALayer *drawingSurface; // @synthesize drawingSurface=_drawingSurface;
@property(nonatomic) _Bool makeUnderlineAnnotation; // @synthesize makeUnderlineAnnotation;
@property(retain, nonatomic) UIPDFAnnotation *currentAnnotation; // @synthesize currentAnnotation=_currentAnnotation;
- (id)marginNoteImage:(id)arg1;	// IMP=0x00000000000830a3
- (struct CGSize)marginNoteImageSize;	// IMP=0x0000000000083022
- (struct CGImage *)underlineImageFor:(struct CGRect)arg1;	// IMP=0x0000000000082fe1
- (struct CGImage *)newHighlightMaskImageFor:(struct CGRect)arg1;	// IMP=0x0000000000082fa0
- (void)copyAttributesOf:(id)arg1 to:(id)arg2;	// IMP=0x0000000000082e10
- (id)annotatePageSelection;	// IMP=0x0000000000082d21
- (_Bool)willDoSomethingWithTap:(struct CGPoint)arg1;	// IMP=0x0000000000082cf6
- (_Bool)annotationLongPressRecognized:(id)arg1;	// IMP=0x0000000000082ce4
- (_Bool)annotationSingleTapRecognized:(id)arg1;	// IMP=0x0000000000082bb0
- (_Bool)annotationBriefPressRecognized:(id)arg1;	// IMP=0x0000000000082b0f
- (id)linkAnnotationAt:(struct CGPoint)arg1;	// IMP=0x0000000000082a92
- (id)annotationAt:(struct CGPoint)arg1;	// IMP=0x0000000000082a37
- (_Bool)linkAnnotationShouldBegin:(id)arg1;	// IMP=0x0000000000082992
- (_Bool)isLinkAnnotationAt:(struct CGPoint)arg1;	// IMP=0x0000000000082979
- (id)_linkAnnotationViewAt:(struct CGPoint)arg1;	// IMP=0x00000000000828fc
- (void)didEndTrackingAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000000828f6
- (void)endTrackingAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000008280c
- (void)tracking:(struct CGPoint)arg1;	// IMP=0x0000000000082552
- (void)startTracking:(struct CGPoint)arg1;	// IMP=0x00000000000824f3
- (_Bool)willTrackAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000008246f
- (void)_initialRange:(struct CGPoint)arg1;	// IMP=0x00000000000823c3
- (_Bool)trackMoved:(struct CGPoint)arg1;	// IMP=0x000000000008237a
- (_Bool)madeInstantAnnotation;	// IMP=0x000000000008236c
- (void)mergeSelectionOfAnnotation:(id)arg1;	// IMP=0x0000000000081b83
- (_Bool)isSelection:(struct CGPDFSelection *)arg1 equalTo:(struct CGPDFSelection *)arg2;	// IMP=0x0000000000081abc
- (_Bool)intersects:(struct CGPDFSelection *)arg1 with:(struct CGPDFSelection *)arg2;	// IMP=0x0000000000081a16
- (void)annotationTapRecognized:(id)arg1;	// IMP=0x0000000000081911
- (void)linkPressRecognized:(id)arg1;	// IMP=0x000000000008186b
- (void)resetBeingPressedForRecognizer:(id)arg1 withDelegate:(id)arg2 withAnnotation:(id)arg3;	// IMP=0x00000000000817e4
- (void)doubleTapRecognized:(id)arg1;	// IMP=0x0000000000081749
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000000815f6
- (void)unlock;	// IMP=0x00000000000815e8
- (void)lock;	// IMP=0x00000000000815da
- (void)drawAnnotations:(struct CGContext *)arg1;	// IMP=0x00000000000812e3
- (void)setNeedsDisplay;	// IMP=0x0000000000081152
- (void)setView:(id)arg1;	// IMP=0x0000000000081120
- (void)layoutAnnotationViews:(id)arg1;	// IMP=0x0000000000080d51
- (void)_addAnnotationViewFor:(id)arg1;	// IMP=0x0000000000080a8e
- (void)_addLinkAnnotationViewFor:(id)arg1;	// IMP=0x0000000000080963
- (void)_addRecognizers:(id)arg1;	// IMP=0x00000000000807d5
- (void)hostViewDidScroll;	// IMP=0x00000000000807cf
- (void)setSurfacePosition:(id)arg1;	// IMP=0x000000000008052b
- (void)addDrawingSurface:(id)arg1 view:(id)arg2;	// IMP=0x00000000000804a5
- (struct CGRect)convertRect:(struct CGRect)arg1 toSurfaceLayer:(id)arg2;	// IMP=0x000000000008037c
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toSurfaceLayer:(id)arg2;	// IMP=0x00000000000802e2
- (void)addLinkAnnotationViews;	// IMP=0x00000000000800e5
- (_Bool)willHandleTouchGestureAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000008007f
- (void)addAnnotation:(id)arg1;	// IMP=0x000000000008005c
- (void)dealloc;	// IMP=0x0000000000080021
- (id)initWithPageView:(id)arg1;	// IMP=0x000000000007ffb3
- (id)init;	// IMP=0x000000000007ff6d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

