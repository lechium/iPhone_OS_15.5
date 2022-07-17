//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, NSMutableArray, UIActivityIndicatorView, UIColor, UIImage, UIPDFAnnotationController, UIPDFDocument, UIPDFPage, UIPDFPageContentDelegate, UIPDFSearchHighlightsController, UIPDFSelectionController, UIPDFViewTouchHandler;
@protocol NSObject><UIPDFPageViewDelegate;

@interface UIPDFPageView : UIView
{
    UIPDFDocument *_document;	// 8 = 0x8
    unsigned long long _pageIndex;	// 16 = 0x10
    UIPDFViewTouchHandler *_touchHandler;	// 24 = 0x18
    struct CGAffineTransform _pageToViewTransform;	// 32 = 0x20
    struct CGAffineTransform _viewToPageTransform;	// 80 = 0x50
    struct CGRect _cropBox;	// 128 = 0x80
    double _margin;	// 160 = 0xa0
    _Bool _allowSelection;	// 168 = 0xa8
    UIPDFSelectionController *_selectionController;	// 176 = 0xb0
    id <NSObject><UIPDFPageViewDelegate> _delegate;	// 184 = 0xb8
    struct CGRect zoomRect;	// 192 = 0xc0
    _Bool _useBackingLayer;	// 224 = 0xe0
    CALayer *_backingLayer;	// 232 = 0xe8
    UIImage *_backgroundImage;	// 240 = 0xf0
    _Bool _backgroundIsScheduled;	// 248 = 0xf8
    unsigned long long _backgroundScheduleCount;	// 256 = 0x100
    _Bool _backgroundIsFullResolution;	// 264 = 0x108
    _Bool _boundsChanged;	// 265 = 0x109
    _Bool _useTiledContent;	// 266 = 0x10a
    _Bool _enableLightMemoryFootprint;	// 267 = 0x10b
    CALayer *_contentLayer;	// 272 = 0x110
    CALayer *_effectsLayer;	// 280 = 0x118
    UIPDFPageContentDelegate *_contentDelegate;	// 288 = 0x120
    UIPDFAnnotationController *_annotationController;	// 296 = 0x128
    _Bool _scalePageOnDraw;	// 304 = 0x130
    struct CGColor *_highLightColor;	// 312 = 0x138
    _Bool _animateSetFrame;	// 320 = 0x140
    UIActivityIndicatorView *_activityIndicator;	// 328 = 0x148
    _Bool _showActivityIndicator;	// 336 = 0x150
    UIColor *_backingLayerColor;	// 344 = 0x158
    struct os_unfair_lock_s _lock;	// 352 = 0x160
    NSMutableArray *_highlights;	// 360 = 0x168
    double _cachedScale;	// 368 = 0x170
    _Bool _allowHighlighting;	// 376 = 0x178
    UIPDFSearchHighlightsController *_searchHighlightController;	// 384 = 0x180
    NSMutableArray *_searchHiglightLayers;	// 392 = 0x188
    UIPDFPage *_page;	// 400 = 0x190
    _Bool showAnnotations;	// 408 = 0x198
    _Bool _allowTwoFingerSelection;	// 409 = 0x199
    _Bool _showTextAnnotations;	// 410 = 0x19a
    _Bool _showLinkAnnotationUnderline;	// 411 = 0x19b
}

@property(nonatomic) _Bool showLinkAnnotationUnderline; // @synthesize showLinkAnnotationUnderline=_showLinkAnnotationUnderline;
@property(nonatomic) _Bool showTextAnnotations; // @synthesize showTextAnnotations=_showTextAnnotations;
@property(nonatomic) _Bool allowTwoFingerSelection; // @synthesize allowTwoFingerSelection=_allowTwoFingerSelection;
@property(readonly, nonatomic) UIPDFAnnotationController *annotationController; // @synthesize annotationController=_annotationController;
@property(nonatomic) _Bool showActivityIndicator; // @synthesize showActivityIndicator=_showActivityIndicator;
@property(nonatomic) _Bool useBackingLayer; // @synthesize useBackingLayer=_useBackingLayer;
@property(nonatomic) _Bool showAnnotations; // @synthesize showAnnotations;
@property(retain, nonatomic) UIColor *backingLayerColor; // @synthesize backingLayerColor=_backingLayerColor;
@property(nonatomic) _Bool animateSetFrame; // @synthesize animateSetFrame=_animateSetFrame;
@property UIPDFSelectionController *selectionController; // @synthesize selectionController=_selectionController;
@property(nonatomic) _Bool allowSelection; // @synthesize allowSelection=_allowSelection;
@property(readonly, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(nonatomic) id <NSObject><UIPDFPageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(nonatomic) _Bool allowMenu; // @dynamic allowMenu;
- (void)suspendInstantTouchHighlighting;	// IMP=0x00000000000739a6
@property(nonatomic) _Bool allowHighlighting; // @dynamic allowHighlighting;
- (void)addWidgetToSelection;	// IMP=0x000000000007391d
- (id)searchHighlightSelectionAt:(struct CGPoint)arg1;	// IMP=0x0000000000073900
- (_Bool)hasSearchHighlights;	// IMP=0x00000000000738da
- (void)clearSearchHighlights;	// IMP=0x00000000000738bd
- (void)highlightSearchSelection:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000738a0
@property(readonly, nonatomic) CALayer *effectsLayer; // @synthesize effectsLayer=_effectsLayer;
- (void)showSelection;	// IMP=0x0000000000073796
- (void)hideSelection;	// IMP=0x0000000000073755
@property(readonly) struct CGColor *highLightColor;
- (void)clearSelection;	// IMP=0x00000000000736a8
- (void)displayContent;	// IMP=0x000000000007368b
- (struct CGRect)rectangleOfInterestAt:(struct CGPoint)arg1 kind:(int *)arg2;	// IMP=0x0000000000073156
- (struct CGRect)fitRect:(struct CGRect)arg1;	// IMP=0x0000000000073066
- (struct CGRect)fitWidth:(struct CGRect)arg1 atVertical:(double)arg2;	// IMP=0x0000000000072f65
- (struct CGRect)convertRectFromPDFPageSpace:(struct CGRect)arg1;	// IMP=0x0000000000072f0b
- (struct CGRect)convertRectToPDFPageSpace:(struct CGRect)arg1;	// IMP=0x0000000000072eb1
- (struct CGPoint)convertPointFromPDFPageSpace:(struct CGPoint)arg1;	// IMP=0x0000000000072e73
- (struct CGPoint)convertPointToPDFPageSpace:(struct CGPoint)arg1;	// IMP=0x0000000000072e35
- (void)setTransforms;	// IMP=0x0000000000072b2a
- (_Bool)willDoSomethingWithTap:(struct CGPoint)arg1;	// IMP=0x0000000000072a53
- (void)singleTapAt:(struct CGPoint)arg1;	// IMP=0x00000000000729b8
- (void)twoFingerDoubleTapAt:(struct CGPoint)arg1;	// IMP=0x0000000000072945
- (void)doubleTapAt:(struct CGPoint)arg1;	// IMP=0x0000000000072842
- (void)ignoreTouches:(_Bool)arg1;	// IMP=0x0000000000072815
- (void)drawAnnotations:(struct CGContext *)arg1;	// IMP=0x00000000000727ba
@property UIPDFPage *page; // @dynamic page;
- (void)addPage:(id)arg1;	// IMP=0x0000000000072480
- (void)layoutTextEffects;	// IMP=0x0000000000072463
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000072351
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000072068
- (id)receiveBackgroundImage:(id)arg1 info:(id)arg2;	// IMP=0x0000000000071e4d
- (void)enableLightMemoryFootprint;	// IMP=0x0000000000071db3
- (void)showContent;	// IMP=0x0000000000071b7a
- (void)stopActivityIndicator;	// IMP=0x0000000000071b0c
- (void)layoutSubviews;	// IMP=0x0000000000071843
- (id)createBackingLayer;	// IMP=0x0000000000071769
- (void)removeBackingLayer;	// IMP=0x000000000007174c
- (void)viewDidZoom:(id)arg1;	// IMP=0x00000000000716c6
- (void)didScroll:(id)arg1;	// IMP=0x00000000000715e8
- (void)scheduleBackgroundImage;	// IMP=0x00000000000712c1
@property(retain) UIImage *backgroundImage; // @dynamic backgroundImage;
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x00000000000711a9
- (void)setNeedsDisplay;	// IMP=0x0000000000071033
- (void)setSelectionNeedsDisplay;	// IMP=0x0000000000071016
@property(readonly, retain) UIPDFDocument *document; // @dynamic document;
@property(readonly) unsigned long long pageIndex; // @dynamic pageIndex;
- (void)setDrawingSurfaceLayer:(id)arg1;	// IMP=0x0000000000070f55
- (void)didReceiveMemoryWarning:(id)arg1;	// IMP=0x0000000000070ee6
- (void)dealloc;	// IMP=0x0000000000070ca6
- (id)initWithPageLimitedMemory:(id)arg1;	// IMP=0x0000000000070c39
- (id)initWithPage:(id)arg1 tiledContent:(_Bool)arg2;	// IMP=0x0000000000070bd8
- (id)initWithPage:(id)arg1;	// IMP=0x0000000000070b78
- (void)addLayers:(_Bool)arg1;	// IMP=0x0000000000070acc
- (id)init;	// IMP=0x00000000000707a0
- (struct CGPDFDictionary *)_annotForPoint:(struct CGPoint)arg1 rect:(struct CGRect *)arg2;	// IMP=0x0000000000073c11

@end
