//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/CSAdjunctListModelDelegate-Protocol.h>
#import <CoverSheet/CSFocusActivityDelegate-Protocol.h>

@class CSAdjunctListActionManager, CSAdjunctListModel, CSContentActionInterpreter, CSFocusActivityManager, CSNowPlayingController, CSSessionManager, CSWidgetMetricsProvider, NSMutableDictionary, NSString, UIViewController;
@protocol CSNotificationAdjunctListViewControllerDelegate, SBFActionProviding;

@interface CSNotificationAdjunctListViewController <CSAdjunctListModelDelegate, CSFocusActivityDelegate>
{
    CSAdjunctListModel *_model;	// 8 = 0x8
    _Bool _isFocusActivityIndicatorVisible;	// 16 = 0x10
    _Bool _respondingToSubviewLayoutChange;	// 17 = 0x11
    id <SBFActionProviding> _contentActionProvider;	// 24 = 0x18
    UIViewController *_digestOnboardingSuggestionViewController;	// 32 = 0x20
    id <CSNotificationAdjunctListViewControllerDelegate> _delegate;	// 40 = 0x28
    NSMutableDictionary *_identifiersToItems;	// 48 = 0x30
    CSNowPlayingController *_nowPlayingController;	// 56 = 0x38
    CSContentActionInterpreter *_actionInterpreter;	// 64 = 0x40
    CSSessionManager *_sessionManager;	// 72 = 0x48
    CSFocusActivityManager *_focusActivityManager;	// 80 = 0x50
    CSAdjunctListActionManager *_actionManager;	// 88 = 0x58
}

+ (Class)viewClass;	// IMP=0x000000000008a359
- (void).cxx_destruct;	// IMP=0x000000000008c44d
@property(retain, nonatomic) CSAdjunctListActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(retain, nonatomic) CSFocusActivityManager *focusActivityManager; // @synthesize focusActivityManager=_focusActivityManager;
@property(retain, nonatomic) CSSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(nonatomic) _Bool respondingToSubviewLayoutChange; // @synthesize respondingToSubviewLayoutChange=_respondingToSubviewLayoutChange;
@property(retain, nonatomic) CSContentActionInterpreter *actionInterpreter; // @synthesize actionInterpreter=_actionInterpreter;
@property(retain, nonatomic) CSNowPlayingController *nowPlayingController; // @synthesize nowPlayingController=_nowPlayingController;
@property(retain, nonatomic) NSMutableDictionary *identifiersToItems; // @synthesize identifiersToItems=_identifiersToItems;
@property(nonatomic) __weak id <CSNotificationAdjunctListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *digestOnboardingSuggestionViewController; // @synthesize digestOnboardingSuggestionViewController=_digestOnboardingSuggestionViewController;
@property(nonatomic) __weak id <SBFActionProviding> contentActionProvider; // @synthesize contentActionProvider=_contentActionProvider;
- (id)_stackView;	// IMP=0x000000000008c29a
- (void)_setIsFocusActivityIndicatorVisible:(_Bool)arg1;	// IMP=0x000000000008c235
- (struct CGAffineTransform)_disappearedTransformForContentWithHeight:(double)arg1;	// IMP=0x000000000008c17c
- (void)_didUpdateDisplay;	// IMP=0x000000000008c0f4
- (id)_groupNameBase;	// IMP=0x000000000008c0a5
- (void)_updateItemsSizeToMimic;	// IMP=0x000000000008bf0b
- (id)_createItemViewForHost:(id)arg1 recipe:(long long)arg2;	// IMP=0x000000000008be42
- (unsigned long long)_preferredIndexForItem:(id)arg1;	// IMP=0x000000000008bde4
- (void)_removeItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000008b603
- (void)_insertItem:(id)arg1 atPreferredIndex:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x000000000008ae86
- (_Bool)_canAnimate;	// IMP=0x000000000008ae6e
- (void)focusActivityIndicatorDidChangeToVisible:(_Bool)arg1;	// IMP=0x000000000008ae35
- (void)adjunctListModel:(id)arg1 didUpdateItem:(id)arg2 withItem:(id)arg3;	// IMP=0x000000000008ad0c
- (void)adjunctListModel:(id)arg1 didRemoveItem:(id)arg2;	// IMP=0x000000000008acab
- (void)adjunctListModel:(id)arg1 didAddItem:(id)arg2;	// IMP=0x000000000008ac23
@property(nonatomic) __weak CSWidgetMetricsProvider *widgetMetricsProvider;
- (_Bool)handleEvent:(id)arg1;	// IMP=0x000000000008aad9
@property(readonly, nonatomic) double listViewContentAnimationDampingRatio;
@property(readonly, nonatomic) double listViewContentAnimationDuration;
@property(readonly, nonatomic) struct CGSize sizeToMimic;
@property(readonly, nonatomic, getter=isPresentingTransientContent) _Bool presentingTransientContent;
@property(readonly, nonatomic, getter=isPresentingContent) _Bool presentingContent;
@property(readonly, nonatomic, getter=isShowingMediaControls) _Bool showingMediaControls;
- (struct CGSize)stackViewContentSize;	// IMP=0x000000000008a871
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x000000000008a681
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000008a5b9
- (void)viewDidLayoutSubviews;	// IMP=0x000000000008a55c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000008a4cc
- (void)viewDidLoad;	// IMP=0x000000000008a36a
- (id)init;	// IMP=0x000000000008a1c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

