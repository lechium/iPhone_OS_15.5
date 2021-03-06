//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXPeopleSuggestionManagerDelegate-Protocol.h>
#import <PhotosUICore/PXPeopleSummaryDelegate-Protocol.h>

@class NSString, NSTimer, PXAnimatedHeaderView, PXPeopleConfirmationLoadingView, PXPeopleConfirmationSummaryViewController, PXPeopleSuggestionManager, PXPeopleSuggestionView, UIActivityIndicatorView, UILabel;

@interface PXPeopleConfirmationViewController : UIViewController <PXPeopleSuggestionManagerDelegate, PXPeopleSummaryDelegate>
{
    _Bool _suggestionsPresented;	// 8 = 0x8
    _Bool _showTypeDebugColor;	// 9 = 0x9
    PXPeopleSuggestionManager *_suggestionManager;	// 16 = 0x10
    PXPeopleSuggestionView *_suggestionView;	// 24 = 0x18
    PXAnimatedHeaderView *_headerView;	// 32 = 0x20
    UILabel *_descriptionLabel;	// 40 = 0x28
    UILabel *_interimLoadingLabel;	// 48 = 0x30
    UIActivityIndicatorView *_interimLoadingIndicator;	// 56 = 0x38
    unsigned long long _viewState;	// 64 = 0x40
    PXPeopleConfirmationLoadingView *_loadingView;	// 72 = 0x48
    PXPeopleConfirmationSummaryViewController *_summaryViewController;	// 80 = 0x50
    NSTimer *_loadingDelayTimer;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000369a61
@property(nonatomic) _Bool showTypeDebugColor; // @synthesize showTypeDebugColor=_showTypeDebugColor;
@property(nonatomic) _Bool suggestionsPresented; // @synthesize suggestionsPresented=_suggestionsPresented;
@property(retain, nonatomic) NSTimer *loadingDelayTimer; // @synthesize loadingDelayTimer=_loadingDelayTimer;
@property(retain, nonatomic) PXPeopleConfirmationSummaryViewController *summaryViewController; // @synthesize summaryViewController=_summaryViewController;
@property(retain, nonatomic) PXPeopleConfirmationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) unsigned long long viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) UIActivityIndicatorView *interimLoadingIndicator; // @synthesize interimLoadingIndicator=_interimLoadingIndicator;
@property(retain, nonatomic) UILabel *interimLoadingLabel; // @synthesize interimLoadingLabel=_interimLoadingLabel;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) PXAnimatedHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) PXPeopleSuggestionView *suggestionView; // @synthesize suggestionView=_suggestionView;
@property(readonly) PXPeopleSuggestionManager *suggestionManager; // @synthesize suggestionManager=_suggestionManager;
- (unsigned long long)autoConfirmedCountForSummaryViewController:(id)arg1;	// IMP=0x000000000036988e
- (unsigned long long)userConfirmedCountForSummaryViewController:(id)arg1;	// IMP=0x000000000036984a
- (id)personForSummaryViewController:(id)arg1;	// IMP=0x00000000003697fa
- (void)willLoadMoreSuggestionsForSuggestionManager:(id)arg1;	// IMP=0x000000000036963e
- (void)noMoreSuggestionsAvailableForSuggestionManager:(id)arg1;	// IMP=0x00000000003695df
- (void)suggestionManager:(id)arg1 hasNewSuggestionsAvailable:(id)arg2;	// IMP=0x0000000000369542
- (void)confirmationCountUpdatedForSuggestionManager:(id)arg1 undoing:(_Bool)arg2;	// IMP=0x000000000036944e
- (void)cancelOperation:(id)arg1;	// IMP=0x00000000003693c5
- (void)doneTapped:(id)arg1;	// IMP=0x00000000003692aa
- (void)performUndo:(id)arg1;	// IMP=0x000000000036921a
- (void)undoDeny:(id)arg1;	// IMP=0x00000000003690da
- (void)undoConfirm:(id)arg1;	// IMP=0x0000000000368f9a
- (void)denyTapped:(id)arg1;	// IMP=0x0000000000368e01
- (void)confirmTapped:(id)arg1;	// IMP=0x0000000000368c65
- (void)suggestionDidDisplay;	// IMP=0x0000000000368be7
@property(readonly) _Bool isSummaryViewShowing;
- (void)updateViewWithViewState:(unsigned long long)arg1;	// IMP=0x00000000003689c4
- (void)dismissSummary;	// IMP=0x0000000000368854
- (void)displaySummary;	// IMP=0x000000000036860b
- (void)presentSuggestion:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000368404
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000003683d5
- (void)viewDidLoad;	// IMP=0x0000000000367ce2
- (id)initWithPerson:(id)arg1;	// IMP=0x0000000000367af8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

