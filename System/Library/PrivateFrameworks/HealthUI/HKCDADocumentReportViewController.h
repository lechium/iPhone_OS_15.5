//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKIncrementalSearchBarDelegate-Protocol.h>

@class HKIncrementalSearchBar, NSData, NSMutableArray, UIView, WKWebView;

@interface HKCDADocumentReportViewController <HKIncrementalSearchBarDelegate>
{
    _Bool _javascriptSearchInstalled;	// 8 = 0x8
    _Bool _javascriptIsRunning;	// 9 = 0x9
    _Bool _searchInProgress;	// 10 = 0xa
    NSData *_documentData;	// 16 = 0x10
    UIView *_disclosureView;	// 24 = 0x18
    WKWebView *_webView;	// 32 = 0x20
    HKIncrementalSearchBar *_incrementalSearchBar;	// 40 = 0x28
    long long _hitCount;	// 48 = 0x30
    long long _currentHighlightedHit;	// 56 = 0x38
    NSMutableArray *_javascriptOperationQueue;	// 64 = 0x40
}

+ (id)xmlToHTMLTranslator;	// IMP=0x00000000002779cd
- (void).cxx_destruct;	// IMP=0x00000000002793bd
@property(retain, nonatomic) NSMutableArray *javascriptOperationQueue; // @synthesize javascriptOperationQueue=_javascriptOperationQueue;
@property(nonatomic) long long currentHighlightedHit; // @synthesize currentHighlightedHit=_currentHighlightedHit;
@property(nonatomic) long long hitCount; // @synthesize hitCount=_hitCount;
@property(nonatomic) _Bool searchInProgress; // @synthesize searchInProgress=_searchInProgress;
@property(nonatomic) _Bool javascriptIsRunning; // @synthesize javascriptIsRunning=_javascriptIsRunning;
@property(nonatomic) _Bool javascriptSearchInstalled; // @synthesize javascriptSearchInstalled=_javascriptSearchInstalled;
@property(readonly, nonatomic) HKIncrementalSearchBar *incrementalSearchBar; // @synthesize incrementalSearchBar=_incrementalSearchBar;
@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(readonly, nonatomic) UIView *disclosureView; // @synthesize disclosureView=_disclosureView;
@property(readonly) NSData *documentData; // @synthesize documentData=_documentData;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000027914d
- (void)searchBarChangeSearch:(id)arg1 searchString:(id)arg2;	// IMP=0x0000000000278f72
- (void)searchBarDoneAction:(id)arg1;	// IMP=0x0000000000278f28
- (void)searchBarDownAction:(id)arg1;	// IMP=0x0000000000278e20
- (void)searchBarUpAction:(id)arg1;	// IMP=0x0000000000278d16
- (void)_incrementCurrentHitBy:(long long)arg1;	// IMP=0x0000000000278ce4
- (void)_updateMatchDisplayString:(long long)arg1 numMatches:(long long)arg2;	// IMP=0x000000000027899c
- (void)_updateSearchBarState;	// IMP=0x00000000002788fd
- (void)_updateSearchHits:(long long)arg1;	// IMP=0x00000000002787b1
- (void)_finishJavascriptOperation;	// IMP=0x00000000002786c4
- (void)_runJavascriptOperation:(id)arg1 clearQueuedCommands:(_Bool)arg2;	// IMP=0x00000000002785c8
- (void)_runJavascript:(id)arg1 clearQueuedCommands:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000278533
- (void)startIncrementalSearch;	// IMP=0x0000000000278318
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000027830d
- (void)_translateXMLInBackground;	// IMP=0x00000000002780a5
- (void)viewDidLoad;	// IMP=0x0000000000277d7b
- (id)buildDisclosureView;	// IMP=0x0000000000277ba1
- (void)hideDisclosure:(id)arg1;	// IMP=0x0000000000277ae5
- (id)initWithDocumentData:(id)arg1;	// IMP=0x00000000002778be

@end

