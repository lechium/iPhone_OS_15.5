//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PDFKit/PDFPasswordViewControllerDelegate-Protocol.h>
#import <PDFKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSString, PDFDestination, PDFDocument, PDFPage, PDFSelection, PDFViewPrivate, UIColor;
@protocol PDFViewDelegate;

@interface PDFView : UIView <PDFPasswordViewControllerDelegate, UIGestureRecognizerDelegate>
{
    PDFViewPrivate *_private;	// 8 = 0x8
}

+ (void)EnableAnnotationKit;	// IMP=0x00000000000bfea6
- (void).cxx_destruct;	// IMP=0x00000000000c0728
- (double)mainScreenScale;	// IMP=0x00000000000c06d1
- (struct CGRect)mainScreenBounds;	// IMP=0x00000000000c0672
- (struct CGRect)extendedRootViewBounds;	// IMP=0x00000000000c060d
- (_Bool)flipsTileContents;	// IMP=0x00000000000c0605
- (struct CGRect)convertRootViewRect:(struct CGRect)arg1 toPageLayer:(id)arg2;	// IMP=0x00000000000c03e3
- (struct CGRect)convertRectToRootView:(struct CGRect)arg1 fromPageLayer:(id)arg2;	// IMP=0x00000000000c016f
- (double)targetBackingScaleFactor;	// IMP=0x00000000000c0154
- (struct CGRect)rootViewBounds;	// IMP=0x00000000000c005b
- (void)updatePDFViewLayout:(struct CGRect)arg1 scrollViewFrame:(struct CGRect)arg2 zoomScale:(double)arg3;	// IMP=0x00000000000bffcf
- (struct CGSize)pdfDocumentViewSize;	// IMP=0x00000000000bff66
- (double)extensionViewZoomScale;	// IMP=0x00000000000bff4d
- (struct CGRect)extensionViewBoundsInDocument;	// IMP=0x00000000000bff24
- (void)setScrollViewScrollEnabled:(_Bool)arg1;	// IMP=0x00000000000bfed4
- (void)setIsUsingPDFExtensionView:(_Bool)arg1;	// IMP=0x00000000000bfeb0
- (void)setShowsScrollIndicators:(_Bool)arg1;	// IMP=0x00000000000bfe77
- (_Bool)showsScrollIndicators;	// IMP=0x00000000000bfe60
- (void)callPageVisibilityDelegateMethodForOverlayAdaptorOnly:(int)arg1 forPageView:(id)arg2 atPageIndex:(unsigned long long)arg3;	// IMP=0x00000000000bfd5d
- (void)performOverlayAdaptorPageVisibilityTrueUpAfterSettingDocument;	// IMP=0x00000000000bfb24
- (void)callPageVisibilityDelegateMethod:(int)arg1 forPageView:(id)arg2 atPageIndex:(unsigned long long)arg3;	// IMP=0x00000000000bf58c
- (void)setNewPageVisibilityDelegate:(id)arg1 withOldDelegate:(id)arg2;	// IMP=0x00000000000bf07c
- (void)setAkAnnotationEditingEnabled:(_Bool)arg1;	// IMP=0x00000000000bef49
- (_Bool)akAnnotationEditingEnabled;	// IMP=0x00000000000beefc
- (id)akRedoToolbarItem;	// IMP=0x00000000000bee9e
- (id)akUndoToolbarItem;	// IMP=0x00000000000bee40
- (id)akToolbarViewItemTintColor;	// IMP=0x00000000000bedcc
- (void)setAkToolbarViewItemTintColor:(id)arg1;	// IMP=0x00000000000bed46
- (id)akToolbarViewTintColor;	// IMP=0x00000000000becd2
- (void)setAkToolbarViewTintColor:(id)arg1;	// IMP=0x00000000000bec4c
- (id)akToolbarView;	// IMP=0x00000000000beb99
- (id)_getDocumentAKController;	// IMP=0x00000000000beb27
- (void)startEditingTextWidgetAnnotation:(id)arg1;	// IMP=0x00000000000beb21
- (void)setForcesTopAlignment:(_Bool)arg1;	// IMP=0x00000000000beae4
@property(nonatomic, setter=enablePageShadows:) _Bool pageShadowsEnabled;
- (double)defaultGutterWidth;	// IMP=0x00000000000bea8e
- (double)gutterWidth;	// IMP=0x00000000000bea78
- (void)setGutterWidth:(double)arg1;	// IMP=0x00000000000be984
- (_Bool)isOverLinkAnnotation:(struct CGPoint)arg1;	// IMP=0x00000000000be864
- (_Bool)PDFKitHandleBackTabInTextWidget:(id)arg1;	// IMP=0x00000000000be83b
- (_Bool)PDFKitHandleTabInTextWidget:(id)arg1;	// IMP=0x00000000000be815
- (_Bool)handleBackTabInTextWidget:(id)arg1;	// IMP=0x00000000000be7ec
- (_Bool)handleTabInTextWidget:(id)arg1;	// IMP=0x00000000000be7c6
- (void)interactWithAnnotation:(id)arg1;	// IMP=0x00000000000be7a5
- (void)addMarkupWithStyle:(unsigned long long)arg1 fromSelection:(id)arg2;	// IMP=0x00000000000be77e
- (_Bool)isUpdatingSelectionMarkups;	// IMP=0x00000000000be75d
- (unsigned long long)activeMarkupStyle;	// IMP=0x00000000000be745
- (void)setActiveMarkupStyle:(unsigned long long)arg1;	// IMP=0x00000000000be72d
- (void)_tileRefresh;	// IMP=0x00000000000be5c6
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;	// IMP=0x00000000000be574
- (void)setNeedsDisplay;	// IMP=0x00000000000be533
- (void)highlightPDFRedactions:(_Bool)arg1;	// IMP=0x00000000000be297
- (void)internalForceAnnotationRefresh;	// IMP=0x00000000000be0b5
- (void)internalForceTileRefresh;	// IMP=0x00000000000bdf8d
- (void)forceTileRefresh;	// IMP=0x00000000000bded7
- (void)setEnableTileUpdates:(_Bool)arg1;	// IMP=0x00000000000bdd80
- (id)parentViewController;	// IMP=0x00000000000bdd08
- (id)doubleTapGestureRecognizer;	// IMP=0x00000000000bdcec
- (id)tapGestureRecognizer;	// IMP=0x00000000000bdcd0
- (id)longPressGestureRecognizer;	// IMP=0x00000000000bdcb4
- (void)removeControlForAnnotation:(id)arg1;	// IMP=0x00000000000bdc93
- (void)setActiveAnnotation:(id)arg1;	// IMP=0x00000000000bdc72
- (id)activeAnnotation;	// IMP=0x00000000000bdc51
- (id)pageViewForPageAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000bd9d2
- (id)documentScrollView;	// IMP=0x00000000000bd9b9
- (void)_updateBookmarksForPages;	// IMP=0x00000000000bd8be
- (void)setDisplaysBookmarksForPages:(_Bool)arg1;	// IMP=0x00000000000bd891
- (_Bool)displaysBookmarksForPages;	// IMP=0x00000000000bd87a
- (id)pageColor;	// IMP=0x00000000000bd856
- (void)setPageColor:(id)arg1;	// IMP=0x00000000000bd832
- (double)lineWidthThreshold;	// IMP=0x00000000000bd80e
- (void)setLineWidthThreshold:(double)arg1;	// IMP=0x00000000000bd7ea
@property(nonatomic) _Bool displaysRTL;
- (void)setScaleFactor:(double)arg1 anchorPoint:(struct CGPoint)arg2;	// IMP=0x00000000000bd2ae
- (double)autoScaleFactor;	// IMP=0x00000000000bd225
- (_Bool)isRectVisible:(struct CGRect)arg1 onPage:(id)arg2;	// IMP=0x00000000000bcfbe
- (void)goToPageNoPush:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000bcdf0
- (void)goToPageNoPush:(id)arg1;	// IMP=0x00000000000bcddc
- (void)goToDestinationNoPush:(id)arg1;	// IMP=0x00000000000bc8a4
- (void)pushDestination:(id)arg1;	// IMP=0x00000000000bc761
- (id)previousPage;	// IMP=0x00000000000bc639
- (id)nextPage;	// IMP=0x00000000000bc505
- (id)akOverlayAdaptor;	// IMP=0x00000000000bc4da
- (id)renderingProperties;	// IMP=0x00000000000bc4be
- (void)_updateAnnotations;	// IMP=0x00000000000bc0c1
- (void)hintScrollDirectionHorizontal:(unsigned long long)arg1 andVertical:(unsigned long long)arg2;	// IMP=0x00000000000bc09e
- (void)documentWasUnlocked;	// IMP=0x00000000000bbf72
- (void)_findVisiblePages;	// IMP=0x00000000000bb90e
- (struct CGPoint)_scrollOriginForPageTopLeft:(id)arg1;	// IMP=0x00000000000bb6ed
- (void)_scrollByPage:(_Bool)arg1;	// IMP=0x00000000000bb532
- (void)_scrollHorizontalBy:(double)arg1;	// IMP=0x00000000000bb463
- (void)_scrollVerticalBy:(double)arg1;	// IMP=0x00000000000bb1a6
- (void)constrainedScrollToPoint:(struct CGPoint)arg1;	// IMP=0x00000000000bb023
- (_Bool)focusOnColumnAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000000baa8a
- (struct CGRect)visibleRectForPageView:(id)arg1;	// IMP=0x00000000000ba8df
- (void)positionInternalViews:(id)arg1;	// IMP=0x00000000000ba567
- (void)_resizeDisplayView:(id)arg1;	// IMP=0x00000000000ba416
- (struct CGSize)pageViewSizeForPage:(id)arg1;	// IMP=0x00000000000ba2ea
- (void)_updateCurrentPageUsingViewCenter;	// IMP=0x00000000000ba166
- (void)windowDidResignKey:(id)arg1;	// IMP=0x00000000000ba160
- (void)windowDidBecomeKey:(id)arg1;	// IMP=0x00000000000ba15a
- (void)pdfViewDidChangePage:(id)arg1;	// IMP=0x00000000000ba148
- (void)pdfViewDidChangeScale:(id)arg1;	// IMP=0x00000000000ba136
- (void)scrollViewSaysPageMayHaveChanged:(id)arg1;	// IMP=0x00000000000ba0ba
- (id)determineCurrentPage;	// IMP=0x00000000000b9fd7
- (void)_syncPageIndexToScrollView;	// IMP=0x00000000000b9d9c
- (void)syncPageIndexToScrollView;	// IMP=0x00000000000b9d78
- (void)_reflectNewPageOn;	// IMP=0x00000000000b98ca
- (void)_selfDidResize:(id)arg1;	// IMP=0x00000000000b98c4
@property(nonatomic) double minScaleFactor;
@property(nonatomic) double maxScaleFactor;
- (void)_internalSetScaleFactor:(double)arg1;	// IMP=0x00000000000b959f
- (void)_internalSetAutoScaleFactor;	// IMP=0x00000000000b9446
- (unsigned long long)lastPageIndex;	// IMP=0x00000000000b9418
- (void)endPDFViewRotation;	// IMP=0x00000000000b9102
- (void)beginPDFViewRotation;	// IMP=0x00000000000b8ef7
- (double)_unboundAutoScaleFactorForPageWithSize:(struct CGSize)arg1;	// IMP=0x00000000000b8c88
- (double)_unboundAutoScaleFactorForPage:(id)arg1;	// IMP=0x00000000000b8bd2
- (double)autoScaleFactorForPageWithSize:(struct CGSize)arg1;	// IMP=0x00000000000b8ba1
- (double)autoScaleFactorForPage:(id)arg1;	// IMP=0x00000000000b8b70
- (double)_pageViewHeight:(id)arg1;	// IMP=0x00000000000b8a34
- (struct CGRect)normalizedPageBounds:(id)arg1;	// IMP=0x00000000000b892a
- (id)PDFLayout;	// IMP=0x00000000000b890e
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;	// IMP=0x00000000000b81c7
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;	// IMP=0x00000000000b8153
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;	// IMP=0x00000000000b80b4
- (id)_dragItemsAtLocationInView:(struct CGPoint)arg1;	// IMP=0x00000000000b7c8e
- (_Bool)_shouldHandleAnnotationAtLocation:(struct CGPoint)arg1 forGestureType:(unsigned long long)arg2;	// IMP=0x00000000000b78ea
- (id)hitTestForSubviewsOfView:(id)arg1 atLocation:(struct CGPoint)arg2 withEvent:(id)arg3;	// IMP=0x00000000000b7633
- (id)pointerRegionForLocation:(struct CGPoint)arg1;	// IMP=0x00000000000b72b3
- (unsigned long long)typeForGestureRecognizer:(id)arg1;	// IMP=0x00000000000b7232
- (void)handleGesture:(unsigned long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3 locationOfFirstTouch:(struct CGPoint)arg4 isIndirectTouch:(_Bool)arg5;	// IMP=0x00000000000b713e
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000000b6f07
- (_Bool)shouldAcceptTouch:(id)arg1 ofGestureRecognizer:(id)arg2;	// IMP=0x00000000000b6d8c
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000000b6d15
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000000b6d0d
- (void)addGestureRecognizer:(id)arg1;	// IMP=0x00000000000b6bf1
- (void)gestureInit;	// IMP=0x00000000000b6993
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00000000000b67dc
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000000b67d4
- (_Bool)userDidEnterPassword:(id)arg1 forPasswordViewController:(id)arg2;	// IMP=0x00000000000b65ca
- (void)_updatePasswordView;	// IMP=0x00000000000b655d
- (void)_removePasswordView;	// IMP=0x00000000000b64f4
- (void)_setupPasswordView;	// IMP=0x00000000000b6378
- (struct CGAffineTransform)_transformFromPageViewToPage:(id)arg1;	// IMP=0x00000000000b631c
- (struct CGAffineTransform)_transformFromPageToPageView:(id)arg1;	// IMP=0x00000000000b5df6
- (void)dealloc;	// IMP=0x00000000000b5d1c
- (void)_commonInit;	// IMP=0x00000000000b58e4
- (void)removeFromSuperview;	// IMP=0x00000000000b58a6
- (void)layoutSubviews;	// IMP=0x00000000000b5673
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000000b52c7
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000000b512e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000b50d1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b50a2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b489b
- (void)drawAccessibilityNodeType:(int)arg1 enableDrawing:(_Bool)arg2;	// IMP=0x00000000000b4895
- (_Bool)isDrawingAccessibilityNodeType:(int)arg1;	// IMP=0x00000000000b487a
- (void)colorWidgetBackgrounds:(_Bool)arg1;	// IMP=0x00000000000b473c
- (id)viewForPage:(id)arg1;	// IMP=0x00000000000b469f
- (void)PDFViewWillClickOnLink:(id)arg1 withURL:(id)arg2;	// IMP=0x00000000000b4499
- (double)PDFViewWillChangeScaleFactor:(id)arg1 toScale:(double)arg2;	// IMP=0x00000000000b442f
@property(nonatomic) _Bool enableDataDetectors;
- (void)setBackgroundImage:(id)arg1 forPage:(id)arg2;	// IMP=0x00000000000b431f
- (_Bool)backgroundImagesEnabled;	// IMP=0x00000000000b42fb
- (void)enableBackgroundImages:(_Bool)arg1;	// IMP=0x00000000000b425b
- (id)visiblePageViews;	// IMP=0x00000000000b41d4
@property(readonly, nonatomic) NSArray *visiblePages;
- (struct CGSize)rowSizeForPage:(id)arg1;	// IMP=0x00000000000b3cf5
- (void)annotationsChangedOnPage:(id)arg1;	// IMP=0x00000000000b3c3f
- (void)layoutDocumentView;	// IMP=0x00000000000b3a40
@property(readonly, nonatomic) UIView *documentView;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromPage:(id)arg2;	// IMP=0x00000000000b390f
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromPage:(id)arg2;	// IMP=0x00000000000b3721
- (struct CGRect)convertRect:(struct CGRect)arg1 toPage:(id)arg2;	// IMP=0x00000000000b3631
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toPage:(id)arg2;	// IMP=0x00000000000b3451
- (id)pageForPoint:(struct CGPoint)arg1 nearest:(_Bool)arg2;	// IMP=0x00000000000b3155
- (void)copy:(id)arg1;	// IMP=0x00000000000b2dfd
- (void)drawPagePost:(id)arg1 toContext:(struct CGContext *)arg2;	// IMP=0x00000000000b2df7
- (void)drawPage:(id)arg1 toContext:(struct CGContext *)arg2;	// IMP=0x00000000000b2d96
- (void)takePasswordFrom:(id)arg1;	// IMP=0x00000000000b2c95
@property(copy, nonatomic) NSArray *highlightedSelections;
- (void)scrollSelectionToVisible:(id)arg1;	// IMP=0x00000000000b2642
- (void)delete:(id)arg1;	// IMP=0x00000000000b2621
- (void)showMarkupMenu:(id)arg1;	// IMP=0x00000000000b2600
- (void)highlight:(id)arg1;	// IMP=0x00000000000b25df
- (void)_lookup:(id)arg1;	// IMP=0x00000000000b2354
- (void)selectAll:(id)arg1;	// IMP=0x00000000000b22a6
- (void)clearSelection;	// IMP=0x00000000000b21c6
- (void)setCurrentSelection:(id)arg1 animate:(_Bool)arg2;	// IMP=0x00000000000b20b1
- (void)setCurrentSelection:(id)arg1 updateTextInput:(_Bool)arg2;	// IMP=0x00000000000b1994
@property(retain, nonatomic) PDFSelection *currentSelection;
- (void)performAction:(id)arg1;	// IMP=0x00000000000b118f
- (void)performBeep;	// IMP=0x00000000000b1189
- (long long)areaOfInterestForPoint:(struct CGPoint)arg1;	// IMP=0x00000000000b0cad
- (long long)areaOfInterestForMouse:(id)arg1;	// IMP=0x00000000000b0ca5
@property(readonly, nonatomic) double scaleFactorForSizeToFit;
@property(nonatomic) _Bool autoScales;
@property(readonly, nonatomic) _Bool canZoomOut;
- (void)zoomOut:(id)arg1;	// IMP=0x00000000000b0a9c
@property(readonly, nonatomic) _Bool canZoomIn;
- (void)zoomIn:(id)arg1;	// IMP=0x00000000000b099d
- (void)_doNotQueryScaleFactor;	// IMP=0x00000000000b0997
@property(nonatomic) double scaleFactor;
@property(nonatomic) __weak id <PDFViewDelegate> delegate;
- (void)_releaseDocumentViewController;	// IMP=0x00000000000b0670
- (void)_setupDocumentViewController;	// IMP=0x00000000000b03fe
- (void)_releaseScrollView;	// IMP=0x00000000000b034e
- (void)_setupScrollView;	// IMP=0x00000000000b004f
- (void)usePageViewController:(_Bool)arg1 withViewOptions:(id)arg2;	// IMP=0x00000000000affb6
- (id)documentViewController;	// IMP=0x00000000000aff9a
@property(readonly, nonatomic) _Bool isUsingPageViewController;
@property(nonatomic) long long interpolationQuality;
@property(retain, nonatomic) UIColor *backgroundColor;
- (void)takeBackgroundColorFrom:(id)arg1;	// IMP=0x00000000000afec8
- (double)greekingThreshold;	// IMP=0x00000000000afea4
- (void)setGreekingThreshold:(double)arg1;	// IMP=0x00000000000afe80
- (_Bool)shouldAntiAlias;	// IMP=0x00000000000afe5c
- (void)setShouldAntiAlias:(_Bool)arg1;	// IMP=0x00000000000afe38
@property(nonatomic) _Bool displaysAsBook;
@property(nonatomic) long long displayBox;
- (struct UIEdgeInsets)documentMargins;	// IMP=0x00000000000afd04
- (void)setDocumentMargins:(struct UIEdgeInsets)arg1;	// IMP=0x00000000000afcd4
@property(nonatomic) struct UIEdgeInsets pageBreakMargins;
@property(nonatomic) _Bool displaysPageBreaks;
@property(nonatomic) long long displayDirection;
@property(nonatomic) long long displayMode;
- (void)goToRect:(struct CGRect)arg1 onPage:(id)arg2;	// IMP=0x00000000000af86a
- (void)goToSelection:(id)arg1;	// IMP=0x00000000000af777
- (void)goToDestination:(id)arg1;	// IMP=0x00000000000af6d6
@property(readonly, nonatomic) PDFDestination *currentDestination;
- (void)_goToPage:(id)arg1 animated:(_Bool)arg2 withBackgroundUpdate:(_Bool)arg3;	// IMP=0x00000000000af328
- (void)goToPageWithoutBackgroundUpdate:(id)arg1;	// IMP=0x00000000000af311
- (void)goToPage:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000af2f9
- (void)goToPage:(id)arg1;	// IMP=0x00000000000af2df
@property(readonly, nonatomic) PDFPage *currentPage;
- (void)goForward:(id)arg1;	// IMP=0x00000000000af130
@property(readonly, nonatomic) _Bool canGoForward;
- (void)goBack:(id)arg1;	// IMP=0x00000000000aef45
@property(readonly, nonatomic) _Bool canGoBack;
- (void)goToPreviousPage:(id)arg1;	// IMP=0x00000000000aee72
@property(readonly, nonatomic) _Bool canGoToPreviousPage;
- (void)goToNextPage:(id)arg1;	// IMP=0x00000000000aed22
@property(readonly, nonatomic) _Bool canGoToNextPage;
- (void)goToLastPage:(id)arg1;	// IMP=0x00000000000aeb43
@property(readonly, nonatomic) _Bool canGoToLastPage;
- (void)goToFirstPage:(id)arg1;	// IMP=0x00000000000aea42
@property(readonly, nonatomic) _Bool canGoToFirstPage;
- (void)_releaseDocument;	// IMP=0x00000000000ae93a
- (void)setDocument:(id)arg1 waitDuration:(double)arg2;	// IMP=0x00000000000ae01a
- (void)setDocument:(id)arg1 withInitialPageIndex:(unsigned long long)arg2;	// IMP=0x00000000000adf13
@property(retain, nonatomic) PDFDocument *document;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
