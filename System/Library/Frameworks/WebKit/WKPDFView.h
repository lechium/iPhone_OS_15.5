//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKit/PDFHostViewControllerDelegate-Protocol.h>
#import <WebKit/WKActionSheetAssistantDelegate-Protocol.h>
#import <WebKit/WKShareSheetDelegate-Protocol.h>
#import <WebKit/WKWebViewContentProvider-Protocol.h>
#import <WebKit/_WKWebViewPrintProvider-Protocol.h>

@class NSData, NSString, UIView;

__attribute__((visibility("hidden")))
@interface WKPDFView <_WKWebViewPrintProvider, PDFHostViewControllerDelegate, WKActionSheetAssistantDelegate, WKShareSheetDelegate, WKWebViewContentProvider>
{
    struct RetainPtr<WKActionSheetAssistant> _actionSheetAssistant;	// 8 = 0x8
    struct RetainPtr<NSData> _data;	// 16 = 0x10
    struct RetainPtr<CGPDFDocument *> _documentForPrinting;	// 24 = 0x18
    struct BlockPtr<void ()> _findCompletion;	// 32 = 0x20
    struct RetainPtr<NSString> _findString;	// 40 = 0x28
    unsigned long long _findStringCount;	// 48 = 0x30
    unsigned long long _findStringMaxCount;	// 56 = 0x38
    struct RetainPtr<UIView> _fixedOverlayView;	// 64 = 0x40
    struct optional<unsigned long> _focusedSearchResultIndex;	// 72 = 0x48
    long long _focusedSearchResultPendingOffset;	// 88 = 0x58
    struct RetainPtr<PDFHostViewController> _hostViewController;	// 96 = 0x60
    struct CGSize _overlaidAccessoryViewsInset;	// 104 = 0x68
    struct RetainPtr<UIView> _pageNumberIndicator;	// 120 = 0x78
    struct CString _passwordForPrinting;	// 128 = 0x80
    struct InteractionInformationAtPosition _positionInformation;	// 136 = 0x88
    struct RetainPtr<NSString> _suggestedFilename;	// 680 = 0x2a8
    struct WeakObjCPtr<WKWebView> _webView;	// 688 = 0x2b0
    struct RetainPtr<WKKeyboardScrollViewAnimator> _keyboardScrollingAnimator;	// 696 = 0x2b8
    struct RetainPtr<WKShareSheet> _shareSheet;	// 704 = 0x2c0
}

+ (_Bool)web_requiresCustomSnapshotting;	// IMP=0x00000000003eea0d
- (id).cxx_construct;	// IMP=0x00000000003efd42
- (void).cxx_destruct;	// IMP=0x00000000003efbb9
- (id)dataDetectionContextForActionSheetAssistant:(id)arg1 positionInformation:(const void *)arg2;	// IMP=0x00000000003efb4c
- (RetainPtr_f649c0c3)actionSheetAssistant:(id)arg1 decideActionsForElement:(id)arg2 defaultActions:(RetainPtr_f649c0c3)arg3;	// IMP=0x00000000003efa8a
- (_Bool)actionSheetAssistant:(id)arg1 shouldIncludeAppLinkActionsForElement:(id)arg2;	// IMP=0x00000000003efa2d
- (void)shareSheetDidDismiss:(id)arg1;	// IMP=0x00000000003ef9ea
- (void)actionSheetAssistant:(id)arg1 shareElementWithURL:(id)arg2 rect:(struct CGRect)arg3;	// IMP=0x00000000003ef6ff
- (void)actionSheetAssistant:(id)arg1 openElementAtLocation:(struct CGPoint)arg2;	// IMP=0x00000000003ef6b3
- (void)actionSheetAssistant:(id)arg1 performAction:(_Bool)arg2;	// IMP=0x00000000003ef5af
- (optional_4e703abe)positionInformationForActionSheetAssistant:(id)arg1;	// IMP=0x00000000003ef589
- (void)pdfHostViewControllerExtensionProcessDidCrash:(id)arg1;	// IMP=0x00000000003ef4b5
- (void)pdfHostViewController:(id)arg1 didLongPressPageIndex:(long long)arg2 atLocation:(struct CGPoint)arg3 withAnnotationRect:(struct CGRect)arg4;	// IMP=0x00000000003ef465
- (void)pdfHostViewController:(id)arg1 didLongPressURL:(id)arg2 atLocation:(struct CGPoint)arg3 withAnnotationRect:(struct CGRect)arg4;	// IMP=0x00000000003ef450
- (void)_showActionSheetForURL:(id)arg1 atLocation:(struct CGPoint)arg2 withAnnotationRect:(struct CGRect)arg3;	// IMP=0x00000000003ef12b
- (void)pdfHostViewController:(id)arg1 goToPageIndex:(long long)arg2 withViewFrustum:(struct CGRect)arg3;	// IMP=0x00000000003ef0ed
- (void)pdfHostViewController:(id)arg1 goToURL:(id)arg2;	// IMP=0x00000000003ef0d2
- (void)_goToURL:(id)arg1 atLocation:(struct CGPoint)arg2;	// IMP=0x00000000003eee99
- (id)_URLWithPageIndex:(long long)arg1;	// IMP=0x00000000003eee23
- (void)pdfHostViewController:(id)arg1 findStringUpdate:(unsigned long long)arg2 done:(_Bool)arg3;	// IMP=0x00000000003eed55
- (void)pdfHostViewController:(id)arg1 documentDidUnlockWithPassword:(id)arg2;	// IMP=0x00000000003eecd6
- (void)pdfHostViewController:(id)arg1 updatePageCount:(long long)arg2;	// IMP=0x00000000003eec86
@property(readonly, nonatomic) _Bool web_isBackground;
@property(readonly, nonatomic) NSString *web_suggestedFilename;
@property(readonly, nonatomic) NSData *web_dataRepresentation;
- (void)web_snapshotRectInContentViewCoordinates:(struct CGRect)arg1 snapshotWidth:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003eeb01
- (void)web_beginAnimatedResizeWithUpdates:(CDUnknownBlockType)arg1;	// IMP=0x00000000003eeab6
- (void)web_scrollViewDidZoom:(id)arg1;	// IMP=0x00000000003eea99
- (void)web_scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;	// IMP=0x00000000003eea7c
- (void)web_scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;	// IMP=0x00000000003eea5f
- (void)web_scrollViewDidScroll:(id)arg1;	// IMP=0x00000000003eea42
@property(readonly, nonatomic) UIView *web_contentView;
- (void)web_hideFindUI;	// IMP=0x00000000003ee9e9
- (void)web_findString:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;	// IMP=0x00000000003ee91b
- (void)_focusOnSearchResultWithOptions:(unsigned long long)arg1;	// IMP=0x00000000003ee73c
- (_Bool)_computeFocusedSearchResultIndexWithOptions:(unsigned long long)arg1 didWrapAround:(_Bool *)arg2;	// IMP=0x00000000003ee670
- (void)web_countStringMatches:(id)arg1 options:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;	// IMP=0x00000000003ee546
- (void)_findString:(id)arg1 withOptions:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000003ee46a
- (void)_resetFind;	// IMP=0x00000000003ee3a4
- (void)web_didSameDocumentNavigation:(unsigned int)arg1;	// IMP=0x00000000003ee34e
- (void)_scrollToURLFragment:(id)arg1;	// IMP=0x00000000003ee292
- (void)web_setFixedOverlayView:(id)arg1;	// IMP=0x00000000003ee24b
- (void)web_computedContentInsetDidChange;	// IMP=0x00000000003ee237
- (void)web_setOverlaidAccessoryViewsInset:(struct CGSize)arg1;	// IMP=0x00000000003ee20e
- (void)web_setMinimumSize:(struct CGSize)arg1;	// IMP=0x00000000003ee178
- (void)_updateLayoutAnimated:(_Bool)arg1;	// IMP=0x00000000003ee123
- (void)_movePageNumberIndicatorToPoint:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x00000000003ee012
- (struct CGPoint)_offsetForPageNumberIndicator;	// IMP=0x00000000003edf2f
- (void)web_setContentProviderData:(id)arg1 suggestedFilename:(id)arg2;	// IMP=0x00000000003edbee
- (id)web_initWithFrame:(struct CGRect)arg1 webView:(id)arg2 mimeType:(id)arg3;	// IMP=0x00000000003edaec
- (id)_contentView;	// IMP=0x00000000003edac2
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000003edaa5
- (_Bool)web_handleKeyEvent:(id)arg1;	// IMP=0x00000000003eda0a
- (void)dealloc;	// IMP=0x00000000003ed8f8
@property(readonly, nonatomic) struct CGPDFDocument *_wk_printedDocument;
- (unsigned long long)_wk_pageCountForPrintFormatter:(id)arg1;	// IMP=0x00000000003f0027
- (struct CGPDFDocument *)_ensureDocumentForPrinting;	// IMP=0x00000000003eff43

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

