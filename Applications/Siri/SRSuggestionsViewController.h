//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AFConversation, NSString, SiriUISuggestionsView;
@protocol SRSuggestionsViewControllerDelegate;

@interface SRSuggestionsViewController : UIViewController
{
    AFConversation *_conversation;	// 8 = 0x8
    id <SRSuggestionsViewControllerDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000012825
@property(nonatomic) __weak id <SRSuggestionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000000127ee
- (_Bool)suggestionsViewIsInTextInputMode:(id)arg1;	// IMP=0x0010000000012768
- (double);	// IMP=0x0010000000012711
- (void)suggestionsView:(id)arg1 didHideVibrantView:(id)arg2;	// IMP=0x001000000001267d
- (double)statusViewHeightForSuggestionsView:(id)arg1;	// IMP=0x0010000000012626
- (double)statusBarHeightForSuggestionsView:(id)arg1;	// IMP=0x00100000000125a6
- (void)didShowSuggestionsForSuggestionsView:(id)arg1;	// IMP=0x001000000001251c
- (void)conversation:(id)arg1 presentationStateDidChangeForItemsAtIndexPaths:(id)arg2;	// IMP=0x0010000000012516
- (void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1 inConversation:(id)arg2;	// IMP=0x0010000000012510
- (void)conversation:(id)arg1 didRemoveItemsWithIdentifiers:(id)arg2 atIndexPaths:(id)arg3 parentItemIdentifiers:(id)arg4;	// IMP=0x001000000001250a
- (void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;	// IMP=0x0010000000012504
- (void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;	// IMP=0x00100000000124fe
- (void)keyboardHeightDidChange;	// IMP=0x00100000000124f8
- (void)_createGuideController;	// IMP=0x0010000000012419
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000012398
- (void)animateOut;	// IMP=0x00100000000122eb
- (void)showRootGuide;	// IMP=0x00100000000122e5
- (void)showGuideStart;	// IMP=0x00100000000122df
- (_Bool)isShowingGuide;	// IMP=0x001000000001229c
- (void)showGuideAnimated:(_Bool)arg1;	// IMP=0x0010000000012296
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000121db
- (void)hideAcousticIDSpinner;	// IMP=0x001000000001219e
- (void)showAcousticIDSpinner;	// IMP=0x0010000000012161
- (void)_showHeaderText:(id)arg1 subheaderText:(id)arg2 largeSubheaderText:(id)arg3;	// IMP=0x0010000000011fff
- (void)showEmptyView;	// IMP=0x0010000000011fa6
- (_Bool)isShowingUserNudge;	// IMP=0x0010000000011eca
- (void)showUserNudge;	// IMP=0x0010000000011e44
- (void)showGreeting;	// IMP=0x0010000000011da5
- (void)showUnavailable;	// IMP=0x0010000000011c64
- (id)_nudgeHeaderText;	// IMP=0x0010000000011b93
- (id)_initialHeaderText;	// IMP=0x0010000000011ac2
- (void)loadView;	// IMP=0x00100000000119f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SiriUISuggestionsView *view; // @dynamic view;

@end

