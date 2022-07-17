//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIDocumentPasswordViewDelegate-Protocol.h>
#import <UIKitCore/UIWebPDFViewDelegate-Protocol.h>
#import <UIKitCore/UIWebPDFViewPrivateDelegate-Protocol.h>
#import <UIKitCore/_UIRotatingAlertControllerDelegate-Protocol.h>
#import <UIKitCore/_UIWebDoubleTapDelegate-Protocol.h>
#import <UIKitCore/_UIWebRotationDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMapTable, NSString, UIColor, UIDocumentPasswordView, UIView, UIWebPDFLabelView, UIWebPDFView, WebPDFNSNumberFormatter, _UIHighlightView, _UIRotatingAlertController;
@protocol UIWebPDFViewHandlerDelegate;

@interface UIWebPDFViewHandler : NSObject <UIWebPDFViewPrivateDelegate, UIDocumentPasswordViewDelegate, _UIRotatingAlertControllerDelegate, UIWebPDFViewDelegate, _UIWebDoubleTapDelegate, _UIWebRotationDelegate>
{
    UIWebPDFView *_pdfView;	// 8 = 0x8
    _Bool _scalesPageToFit;	// 16 = 0x10
    double _initialZoomScale;	// 24 = 0x18
    NSObject<UIWebPDFViewHandlerDelegate> *_pdfHandlerDelegate;	// 32 = 0x20
    _UIHighlightView *_linkHighlightView;	// 40 = 0x28
    UIWebPDFLabelView *_pageLabelView;	// 48 = 0x30
    _Bool _showPageLabels;	// 56 = 0x38
    _Bool _showsShadowsForHTMLContent;	// 57 = 0x39
    _Bool _cachedScrollViewShadowsState;	// 58 = 0x3a
    UIDocumentPasswordView *_passwordEntryView;	// 64 = 0x40
    NSMapTable *_searchControllers;	// 72 = 0x48
    UIColor *_backgroundColorForUnRenderedContent;	// 80 = 0x50
    _Bool _hideActivityIndicatorForUnRenderedContent;	// 88 = 0x58
    _Bool _hidePageViewsUntilReadyToRender;	// 89 = 0x59
    WebPDFNSNumberFormatter *_labelViewFormatter;	// 96 = 0x60
    struct _PDFHistoryItem _pendingHistoryItemRestore;	// 104 = 0x68
    _UIRotatingAlertController *_linkActionSheet;	// 136 = 0x88
    NSDictionary *_linkActionInfo;	// 144 = 0x90
    NSArray *_linkActions;	// 152 = 0x98
    struct CGRect _rectOfInterest;	// 160 = 0xa0
    _Bool _rectOfInterestConsidersHeight;	// 192 = 0xc0
}

@property(nonatomic) _Bool hideActivityIndicatorForUnRenderedContent; // @synthesize hideActivityIndicatorForUnRenderedContent=_hideActivityIndicatorForUnRenderedContent;
@property(retain, nonatomic) UIColor *backgroundColorForUnRenderedContent; // @synthesize backgroundColorForUnRenderedContent=_backgroundColorForUnRenderedContent;
@property(nonatomic) _Bool hidePageViewsUntilReadyToRender; // @synthesize hidePageViewsUntilReadyToRender=_hidePageViewsUntilReadyToRender;
@property(nonatomic) NSObject<UIWebPDFViewHandlerDelegate> *pdfHandlerDelegate; // @synthesize pdfHandlerDelegate=_pdfHandlerDelegate;
@property(nonatomic) _Bool scalesPageToFit; // @synthesize scalesPageToFit=_scalesPageToFit;
@property(nonatomic) _Bool showPageLabels; // @synthesize showPageLabels=_showPageLabels;
- (void)rotateEnclosingScrollViewToFrame:(struct CGRect)arg1;	// IMP=0x000000000132fb90
- (unsigned long long)_verticalEdgeForContentOffsetInScrollView:(id)arg1;	// IMP=0x000000000132fb04
- (double)_pinValueForVerticalEdge:(unsigned long long)arg1 inScrollView:(id)arg2;	// IMP=0x000000000132fa4c
- (_Bool)considerHeightOfRectOfInterestForRotation;	// IMP=0x000000000132fa3a
- (struct CGRect)activeRectForRectOfInterest:(struct CGRect)arg1;	// IMP=0x000000000132fa1c
- (double)heightToKeepVisible;	// IMP=0x000000000132fa13
- (double)minimumVerticalContentOffset;	// IMP=0x000000000132fa0a
- (struct CGRect)rectOfInterestForRotation;	// IMP=0x000000000132f9ec
- (void)updateBoundariesOfScrollView:(id)arg1 withScales:(CDStruct_cf303044)arg2;	// IMP=0x000000000132f983
- (_Bool)considerHeightForDoubleTap;	// IMP=0x000000000132f977
- (CDStruct_cf303044)doubleTapScalesForSize:(struct CGSize)arg1;	// IMP=0x000000000132f907
- (struct CGRect)rectOfInterestForPoint:(struct CGPoint)arg1;	// IMP=0x000000000132f8e9
- (double)minimumScaleForSize:(struct CGSize)arg1;	// IMP=0x000000000132f8b6
- (struct CGRect)visibleContentRect;	// IMP=0x000000000132f87f
- (double)currentDocumentScale;	// IMP=0x000000000132f86d
- (double)zoomedDocumentScale;	// IMP=0x000000000132f83a
- (id)contentView;	// IMP=0x000000000132f830
- (id)enclosingScrollView;	// IMP=0x000000000132f81c
- (void)restoreStateFromHistoryItem:(id)arg1 forWebView:(id)arg2;	// IMP=0x000000000132f75e
- (void)restoreStateFromPendingHistoryItem;	// IMP=0x000000000132f6aa
- (void)saveStateToHistoryItem:(id)arg1 forWebView:(id)arg2;	// IMP=0x000000000132f604
- (CDStruct_cf303044)scalesForContainerSize:(struct CGSize)arg1;	// IMP=0x000000000132f4e6
- (void)revealSearchResult:(id)arg1 andZoomIn:(_Bool)arg2;	// IMP=0x000000000132f16e
- (void)_resultRects:(id)arg1 andResultViews:(id)arg2 forSearchResult:(id)arg3 inViewCoordinates:(id)arg4;	// IMP=0x000000000132ed03
- (void)handleScrollToAnchor:(id)arg1;	// IMP=0x000000000132ec4e
- (void)updatePageNumberLabelWithUserScrolling:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000132ea0e
- (id)_getLabelViewFormatter;	// IMP=0x000000000132e9dd
- (void)updateViewHierarchyForFirstNonEmptyLayoutInFrame:(id)arg1;	// IMP=0x000000000132e9cb
- (void)updateViewHierarchyForDocumentViewLoadComplete:(id)arg1;	// IMP=0x000000000132e99b
- (void)updateViewHierarchyForDocumentViewTabSwitch:(id)arg1;	// IMP=0x000000000132e971
- (void)updateViewHierarchyForDocumentViewTabSwitch:(id)arg1 restoringZoomScale:(double)arg2 andScrollPt:(struct CGPoint)arg3;	// IMP=0x000000000132e87c
- (void)updateViewHierarchyForDocumentViewNewLoad:(id)arg1;	// IMP=0x000000000132e801
- (void)removeViewFromSuperview;	// IMP=0x000000000132e7bc
@property(readonly, nonatomic) UIView *frontView;
@property(readonly, nonatomic) UIWebPDFView *pdfView;
- (void)ensureCorrectPagesAreInstalled:(_Bool)arg1;	// IMP=0x000000000132e754
- (void)didScroll:(id)arg1;	// IMP=0x000000000132e6f6
- (id)passwordForPDFView:(id)arg1;	// IMP=0x000000000132e67b
- (void)resetZoom:(id)arg1;	// IMP=0x000000000132e637
- (void)pdfView:(id)arg1 zoomToRect:(struct CGRect)arg2 forPoint:(struct CGPoint)arg3 considerHeight:(_Bool)arg4;	// IMP=0x000000000132e5e3
- (void)didDetermineDocumentBounds:(id)arg1;	// IMP=0x000000000132e422
- (void)_postdidDetermineDocumentBounds;	// IMP=0x000000000132e36a
- (void)_showPasswordEntryViewForFile:(id)arg1;	// IMP=0x000000000132e2a3
- (void)didEndEditingPassword:(id)arg1 inView:(id)arg2;	// IMP=0x000000000132e1a9
- (void)didBeginEditingPassword:(id)arg1 inView:(id)arg2;	// IMP=0x000000000132e151
- (void)_keyboardDidShow:(id)arg1;	// IMP=0x000000000132e12e
- (void)_adjustContentOffsetForKeyboardIfNeeded;	// IMP=0x000000000132ddbe
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;	// IMP=0x000000000132dd23
- (void)_showPasswordErrorAlert;	// IMP=0x000000000132dbb8
- (id)createPageLabel;	// IMP=0x000000000132db65
- (void)clearPageLabel;	// IMP=0x000000000132db32
- (struct CGRect)presentationRectInHostViewForSheet:(id)arg1;	// IMP=0x000000000132daff
- (struct CGRect)initialPresentationRectInHostViewForSheet:(id)arg1;	// IMP=0x000000000132da25
- (id)hostViewForSheet:(id)arg1;	// IMP=0x000000000132d94f
- (void)performAction:(id)arg1 fromAlertController:(id)arg2;	// IMP=0x000000000132d8e6
- (void)handleLongPressOnLink:(id)arg1 atPoint:(struct CGPoint)arg2 inRect:(struct CGRect)arg3 contentRect:(struct CGRect)arg4;	// IMP=0x000000000132d76d
- (void)_showLinkSheet:(id)arg1;	// IMP=0x000000000132d3c7
- (id)_actionsForInteractionInfo:(id)arg1;	// IMP=0x000000000132d146
- (id)_actionForType:(int)arg1 withActionInfo:(id)arg2;	// IMP=0x000000000132cb80
- (id)_actionForType:(int)arg1;	// IMP=0x000000000132cb6c
- (void)clearActionSheet;	// IMP=0x000000000132cb01
- (void)handleLinkClick:(id)arg1 inRect:(struct CGRect)arg2;	// IMP=0x000000000132cac1
- (void)_notifyDelegateDidClickLink:(id)arg1;	// IMP=0x000000000132ca72
- (void)_notifyDelegateWillClickLink:(id)arg1;	// IMP=0x000000000132ca23
- (void)_completeLinkClickWithURLString:(id)arg1;	// IMP=0x000000000132c9f2
- (void)_completeLinkClickWithURL:(id)arg1;	// IMP=0x000000000132c897
- (id)_absoluteUrlRelativeToDocumentURL:(id)arg1;	// IMP=0x000000000132c7ce
- (void)scrollToPageNumber:(long long)arg1 animate:(_Bool)arg2;	// IMP=0x000000000132c5c4
- (void)highlightRect:(struct CGRect)arg1;	// IMP=0x000000000132c45f
- (id)createLinkHighlight;	// IMP=0x000000000132c39b
- (void)clearLinkHighlight;	// IMP=0x000000000132c368
- (void)adjustZoomScalesForScrollView;	// IMP=0x000000000132c219
- (void)_adjustZoomScalesForScrollViewInternal:(id)arg1;	// IMP=0x000000000132bfa2
- (void)updateViewSettings;	// IMP=0x000000000132bdb8
- (void)_updateViewHierarchyForDocumentView:(id)arg1 ignoreIfSame:(_Bool)arg2;	// IMP=0x000000000132bd2e
- (void)_ensurePDFViewInHierarchyForWebDocView:(id)arg1;	// IMP=0x000000000132bbc3
- (void)_createPDFViewIfNeeded:(id)arg1;	// IMP=0x000000000132b9f5
- (void)_removePDFViewIfWebDocViewIsNotSamePDF:(id)arg1;	// IMP=0x000000000132b963
- (void)_removePDFViewIfWebDocViewIsNotPDF:(id)arg1;	// IMP=0x000000000132b928
- (void)_replacePDFViewIfPresentWithWebDocView:(id)arg1;	// IMP=0x000000000132b8b7
- (struct CGRect)_rectForPasswordView:(id)arg1;	// IMP=0x000000000132b81c
- (struct CGRect)_frameForDocumentBounds:(struct CGRect)arg1;	// IMP=0x000000000132b73c
- (struct CGRect)_rectForPdfView:(struct CGRect)arg1;	// IMP=0x000000000132b6b4
- (id)_getPDFDocumentViewForWebView:(id)arg1;	// IMP=0x000000000132b640
- (id)_scroller:(id)arg1;	// IMP=0x000000000132b608
- (void)clearAllViews;	// IMP=0x000000000132b547
- (void)didReceiveMemoryWarning:(id)arg1;	// IMP=0x000000000132b4d4
- (void)dealloc;	// IMP=0x000000000132b45b
- (id)init;	// IMP=0x000000000132b3a8
- (id)findOnPageHighlighter;	// IMP=0x000000000132b372
- (void)clearSearchControllerForHighlighter:(id)arg1;	// IMP=0x000000000132b30e
- (id)searchControllerForHighlighter:(id)arg1;	// IMP=0x000000000132b23c
- (void)_setSearchControllerDocumentToSearch:(id)arg1;	// IMP=0x000000000132b191

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
