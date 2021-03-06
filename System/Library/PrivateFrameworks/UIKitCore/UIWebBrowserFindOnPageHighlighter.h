//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIWebFindOnPageHighlighter-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIView, UIWebBrowserView, UIWebPDFViewHandler;
@protocol UIWebFindOnPageHighlighterDelegate;

__attribute__((visibility("hidden")))
@interface UIWebBrowserFindOnPageHighlighter : NSObject <UIWebFindOnPageHighlighter>
{
    NSMutableArray *_highlightBubbleViews;	// 8 = 0x8
    NSArray *_pdfHighlightViews;	// 16 = 0x10
    UIView *_highlightHostView;	// 24 = 0x18
    UIWebBrowserView *_browserView;	// 32 = 0x20
    UIWebPDFViewHandler *_pdfHandler;	// 40 = 0x28
    _Bool _zoomToHighlightSelection;	// 48 = 0x30
    id <UIWebFindOnPageHighlighterDelegate> _delegate;	// 56 = 0x38
    NSString *_searchText;	// 64 = 0x40
    unsigned long long _numberOfMatches;	// 72 = 0x48
    unsigned long long _highlightedMatchIndex;	// 80 = 0x50
}

+ (_Bool)expandedRectsWouldIntersect:(id)arg1;	// IMP=0x00000000012edfa5
@property(readonly, nonatomic) unsigned long long highlightedMatchIndex; // @synthesize highlightedMatchIndex=_highlightedMatchIndex;
@property(readonly, nonatomic) unsigned long long numberOfMatches; // @synthesize numberOfMatches=_numberOfMatches;
@property(nonatomic) id <UIWebFindOnPageHighlighterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void)search:(id)arg1 hasPartialResults:(id)arg2;	// IMP=0x00000000012efebe
- (void)searchDidFinish:(id)arg1;	// IMP=0x00000000012efe6c
- (void)searchLimitHit:(id)arg1;	// IMP=0x00000000012efe22
- (void)searchWasCancelled:(id)arg1;	// IMP=0x00000000012efde8
- (void)searchDidTimeOut:(id)arg1;	// IMP=0x00000000012efdae
- (void)searchDidBegin:(id)arg1;	// IMP=0x00000000012efd74
- (void)highlightPreviousMatch;	// IMP=0x00000000012efd60
- (void)highlightNextMatch;	// IMP=0x00000000012efd49
- (void)_highlightFindOnPageMatch:(_Bool)arg1;	// IMP=0x00000000012efbd4
- (void)_highlightFindOnPageMatchForPDF:(_Bool)arg1 withPDFHandler:(id)arg2;	// IMP=0x00000000012efb4b
- (id)_currentPDFSearchResult;	// IMP=0x00000000012efa84
- (_Bool)_updateHighlightedMatchIndex:(_Bool)arg1;	// IMP=0x00000000012efa1e
- (void)setSearchText:(id)arg1 matchLimit:(unsigned long long)arg2;	// IMP=0x00000000012ef823
- (unsigned long long)findOnPageOptions;	// IMP=0x00000000012ef818
- (_Bool)_highlightSelection;	// IMP=0x00000000012ef2b0
- (_Bool)updateHighlightBubbleWobble:(_Bool)arg1;	// IMP=0x00000000012eed34
- (void)setSelectionRect:(struct CGRect)arg1 textRects:(id)arg2 contentViews:(id)arg3 wobble:(_Bool)arg4;	// IMP=0x00000000012eed1a
- (void)setSelectionRect:(struct CGRect)arg1 textRects:(id)arg2 contentImage:(struct CGImage *)arg3 wobble:(_Bool)arg4;	// IMP=0x00000000012eed02
- (void)_setSelectionRect:(struct CGRect)arg1 textRects:(id)arg2 contentImage:(struct CGImage *)arg3 contentViews:(id)arg4 wobble:(_Bool)arg5;	// IMP=0x00000000012ee3e6
- (void)_clearHighlightViews;	// IMP=0x00000000012ee380
- (void)_addContentViewAtIndex:(unsigned long long)arg1 withRect:(struct CGRect)arg2;	// IMP=0x00000000012ee31d
- (void)clearBrowserView;	// IMP=0x00000000012edf79
- (void)dealloc;	// IMP=0x00000000012edee6
- (void)_commonInitialize;	// IMP=0x00000000012ede7a
- (id)initWithPDFViewHandler:(id)arg1;	// IMP=0x00000000012eddfd
- (id)initWithBrowserView:(id)arg1;	// IMP=0x00000000012edd8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

