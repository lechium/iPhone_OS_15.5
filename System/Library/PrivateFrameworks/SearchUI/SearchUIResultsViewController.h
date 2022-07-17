//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SearchUI/SearchUIKeyboardableTableViewDelegate-Protocol.h>
#import <SearchUI/SearchUISizingDelegate-Protocol.h>
#import <SearchUI/SearchUITableViewTesting-Protocol.h>
#import <SearchUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSString, SearchUIBackgroundView, UIResponder, UISearchTextField, UIView;
@protocol SFFeedbackListener, SearchUICommandDelegate, SearchUIResultsTableBridgingProtocol, SearchUIResultsViewDelegate;

@interface SearchUIResultsViewController : UIViewController <UIGestureRecognizerDelegate, SearchUIKeyboardableTableViewDelegate, SearchUISizingDelegate, SearchUITableViewTesting>
{
    _Bool _immediatelyShowCardForSingleResult;	// 8 = 0x8
    _Bool _shouldMonitorScrollingPastBottomOfContent;	// 9 = 0x9
    CDUnknownBlockType tableViewWillUpdateHandler;	// 16 = 0x10
    CDUnknownBlockType tableViewDidUpdateHandler;	// 24 = 0x18
    CDUnknownBlockType cellWillDisplayHandler;	// 32 = 0x20
    NSArray *_sections;	// 40 = 0x28
    unsigned long long _style;	// 48 = 0x30
    UIViewController<SearchUIResultsTableBridgingProtocol> *_resultsTableViewController;	// 56 = 0x38
    NSString *_previousSearchString;	// 64 = 0x40
    id <SearchUIResultsViewDelegate> _delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000009b26d
@property(nonatomic) _Bool shouldMonitorScrollingPastBottomOfContent; // @synthesize shouldMonitorScrollingPastBottomOfContent=_shouldMonitorScrollingPastBottomOfContent;
@property(nonatomic) __weak id <SearchUIResultsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *previousSearchString; // @synthesize previousSearchString=_previousSearchString;
@property(retain, nonatomic) UIViewController<SearchUIResultsTableBridgingProtocol> *resultsTableViewController; // @synthesize resultsTableViewController=_resultsTableViewController;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) _Bool immediatelyShowCardForSingleResult; // @synthesize immediatelyShowCardForSingleResult=_immediatelyShowCardForSingleResult;
@property(copy, nonatomic) CDUnknownBlockType cellWillDisplayHandler; // @synthesize cellWillDisplayHandler;
@property(copy, nonatomic) CDUnknownBlockType tableViewDidUpdateHandler; // @synthesize tableViewDidUpdateHandler;
@property(copy, nonatomic) CDUnknownBlockType tableViewWillUpdateHandler; // @synthesize tableViewWillUpdateHandler;
- (void)willDismiss;	// IMP=0x000000000009b127
- (void)didPresentToResumeSearch:(_Bool)arg1;	// IMP=0x000000000009b0db
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000009b0d3
- (void)performReturnKeyPressAction;	// IMP=0x000000000009b096
- (void)purgeMemory;	// IMP=0x000000000009b059
- (void)toggleShowMoreForSection:(unsigned long long)arg1;	// IMP=0x000000000009b00d
- (struct CGRect)scrollToIndexPath:(id)arg1;	// IMP=0x000000000009af8e
- (void)tapAtIndexPath:(id)arg1;	// IMP=0x000000000009af1c
- (id)currentTableModel;	// IMP=0x000000000009aecc
- (void)performScrollTestWithHandlerForFirstScrollCompletion:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009ae46
- (void)performScrollTestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000009add4
- (void)contentSizeDidChange:(struct CGSize)arg1 animated:(_Bool)arg2;	// IMP=0x000000000009ab5a
@property(readonly, nonatomic) UIResponder *responderForKeyboardInput;
@property(readonly, nonatomic) struct CGSize contentSize;
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000009a95a
- (id)contentScrollView;	// IMP=0x000000000009a90a
@property(readonly, nonatomic) double distanceToTopOfAppIcons;
- (double)contentHeightForWidth:(double)arg1 maxHeight:(double)arg2;	// IMP=0x000000000009a896
@property(retain, nonatomic) NSString *queryString;
- (void)highlightResult:(id)arg1;	// IMP=0x000000000009a158
- (void)updateWithResultSections:(id)arg1 resetScrollPoint:(_Bool)arg2;	// IMP=0x000000000009a0e0
- (void)updateWithResultSections:(id)arg1;	// IMP=0x000000000009a0c9
@property(nonatomic) _Bool shouldUseStandardSectionInsets;
@property(nonatomic) _Bool showsVerticalScrollIndicator;
@property(nonatomic) _Bool shouldUseInsetRoundedSections;
@property(nonatomic) _Bool shouldHideResultsUnderKeyboard;
@property(nonatomic) __weak id <SearchUICommandDelegate> commandDelegate;
@property(nonatomic) __weak id <SFFeedbackListener> feedbackListener;
@property(retain, nonatomic) UISearchTextField *searchField;
- (void)didTap;	// IMP=0x000000000009988e
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000099643
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000000009963b
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000099407
- (void)replaceResult:(id)arg1 withResult:(id)arg2;	// IMP=0x0000000000099381
@property(retain, nonatomic) UIView *footerView;
@property(nonatomic) _Bool shortenTopFloatingHeader;
- (void)didUpdateKeyboardFocusToResult:(id)arg1 cardSection:(id)arg2;	// IMP=0x0000000000099169
- (void)didFocusOnCell:(id)arg1;	// IMP=0x00000000000990d4
- (void)didBeginScrolling;	// IMP=0x000000000009903a
- (void)didScrollPastBottomOfContent;	// IMP=0x0000000000098fa0
- (void)restoreResultsIfNeeded;	// IMP=0x0000000000098ed2
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000098cd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SearchUIBackgroundView *view; // @dynamic view;

@end
