//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/SearchUIFeedbackDelegateInternal-Protocol.h>
#import <SearchUI/SearchUITableViewSizingDelegate-Protocol.h>
#import <SearchUI/SearchUITableViewTesting-Protocol.h>
#import <SearchUI/UITableViewDelegatePrivate-Protocol.h>

@class NSString, SearchUIPeekDelegate, SearchUITableModel, SearchUITableView, TLKTableViewScrollTester, UIContextMenuInteraction;
@protocol SFFeedbackListener, SearchUICommandDelegate, SearchUIResultsViewDelegate, SearchUISizingDelegate;

@interface SearchUITableViewController <SearchUITableViewSizingDelegate, UITableViewDelegatePrivate, SearchUITableViewTesting, SearchUIFeedbackDelegateInternal>
{
    _Bool _shouldUseInsetRoundedSections;	// 8 = 0x8
    _Bool _shouldUseStandardSectionInsets;	// 9 = 0x9
    _Bool _tableViewAnimating;	// 10 = 0xa
    CDUnknownBlockType tableViewWillUpdateHandler;	// 16 = 0x10
    CDUnknownBlockType tableViewDidUpdateHandler;	// 24 = 0x18
    CDUnknownBlockType cellWillDisplayHandler;	// 32 = 0x20
    id <SFFeedbackListener> _feedbackListener;	// 40 = 0x28
    id <SearchUICommandDelegate> _commandDelegate;	// 48 = 0x30
    id <SearchUIResultsViewDelegate> _resultsViewDelegate;	// 56 = 0x38
    id <SearchUISizingDelegate> _sizingDelegate;	// 64 = 0x40
    SearchUITableModel *_tableModel;	// 72 = 0x48
    SearchUIPeekDelegate *_peekDelegate;	// 80 = 0x50
    UIContextMenuInteraction *_contextInteraction;	// 88 = 0x58
    long long _preferredPunchoutIndex;	// 96 = 0x60
    SearchUITableModel *_stateRestoredTableModel;	// 104 = 0x68
    TLKTableViewScrollTester *_scrollTester;	// 112 = 0x70
    struct CGPoint _stateRestoredScrollPoint;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000061d6d
@property(retain, nonatomic) TLKTableViewScrollTester *scrollTester; // @synthesize scrollTester=_scrollTester;
@property(nonatomic) _Bool tableViewAnimating; // @synthesize tableViewAnimating=_tableViewAnimating;
@property(nonatomic) struct CGPoint stateRestoredScrollPoint; // @synthesize stateRestoredScrollPoint=_stateRestoredScrollPoint;
@property(retain, nonatomic) SearchUITableModel *stateRestoredTableModel; // @synthesize stateRestoredTableModel=_stateRestoredTableModel;
@property(nonatomic) long long preferredPunchoutIndex; // @synthesize preferredPunchoutIndex=_preferredPunchoutIndex;
@property(retain, nonatomic) UIContextMenuInteraction *contextInteraction; // @synthesize contextInteraction=_contextInteraction;
@property(retain, nonatomic) SearchUIPeekDelegate *peekDelegate; // @synthesize peekDelegate=_peekDelegate;
@property(retain, nonatomic) SearchUITableModel *tableModel; // @synthesize tableModel=_tableModel;
@property(nonatomic) _Bool shouldUseStandardSectionInsets; // @synthesize shouldUseStandardSectionInsets=_shouldUseStandardSectionInsets;
@property(nonatomic) _Bool shouldUseInsetRoundedSections; // @synthesize shouldUseInsetRoundedSections=_shouldUseInsetRoundedSections;
@property __weak id <SearchUISizingDelegate> sizingDelegate; // @synthesize sizingDelegate=_sizingDelegate;
@property __weak id <SearchUIResultsViewDelegate> resultsViewDelegate; // @synthesize resultsViewDelegate=_resultsViewDelegate;
@property(nonatomic) __weak id <SearchUICommandDelegate> commandDelegate; // @synthesize commandDelegate=_commandDelegate;
@property(nonatomic) __weak id <SFFeedbackListener> feedbackListener; // @synthesize feedbackListener=_feedbackListener;
@property(copy, nonatomic) CDUnknownBlockType cellWillDisplayHandler; // @synthesize cellWillDisplayHandler;
@property(copy, nonatomic) CDUnknownBlockType tableViewDidUpdateHandler; // @synthesize tableViewDidUpdateHandler;
@property(copy, nonatomic) CDUnknownBlockType tableViewWillUpdateHandler; // @synthesize tableViewWillUpdateHandler;
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000061ac9
- (_Bool)forwardFeedbackForSelector:(SEL)arg1;	// IMP=0x0000000000061a5b
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000619e6
@property(nonatomic) _Bool dragInteractionEnabled;
- (void)toggleShowMoreForSection:(unsigned long long)arg1;	// IMP=0x0000000000061950
- (struct CGRect)scrollToIndexPath:(id)arg1;	// IMP=0x000000000006188b
- (void)tapAtIndexPath:(id)arg1;	// IMP=0x00000000000617e0
- (id)currentTableModel;	// IMP=0x00000000000617ce
- (_Bool)updateMustAccountForLayout;	// IMP=0x00000000000617c6
- (void)performScrollTestWithHandlerForFirstScrollCompletion:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000616ea
- (void)performScrollTestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000616d3
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000616cb
- (void)updateContentScrolledOffScreenStatus;	// IMP=0x000000000006159d
- (double)offScreenContentScrollDistance;	// IMP=0x0000000000061594
- (id)searchUICommandEnvironment;	// IMP=0x0000000000061582
- (id)commandEnvironment;	// IMP=0x0000000000061430
- (void)performTapCommandForRowModel:(id)arg1 environment:(id)arg2;	// IMP=0x00000000000611cc
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000061012
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0000000000060f7c
- (void)deselectSelectedRows;	// IMP=0x0000000000060eeb
- (void)restoreResultsIfNeeded;	// IMP=0x0000000000060dc1
- (void)purgeMemory;	// IMP=0x0000000000060b76
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000060ad5
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000608e3
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000060730
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000000606ef
- (void)updateViewControllerTitle:(id)arg1;	// IMP=0x000000000006067d
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;	// IMP=0x000000000006066b
- (void)removeRowModel:(id)arg1;	// IMP=0x0000000000060463
- (void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(_Bool)arg2;	// IMP=0x0000000000060312
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000601a2
- (void)updateTableForNewCellHeightAnimated:(_Bool)arg1;	// IMP=0x0000000000060024
- (id)punchoutPickerDismissText:(id)arg1;	// IMP=0x000000000005ff82
- (id)punchoutPickerTitleForIndexPath:(id)arg1;	// IMP=0x000000000005fee0
- (id)punchoutsForIndexPath:(id)arg1;	// IMP=0x000000000005fe3e
- (id)nextCardForIndexPath:(id)arg1;	// IMP=0x000000000005fd9c
- (void)resignTextField;	// IMP=0x000000000005fd5f
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000005fac6
- (id)cellForIndexPath:(id)arg1 reuseIfPossible:(_Bool)arg2;	// IMP=0x000000000005f743
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000005f729
- (void)willDismissViewController:(id)arg1;	// IMP=0x000000000005f682
- (void)showViewController:(id)arg1;	// IMP=0x000000000005f66e
- (void)sendFeedbackForCardSectionEngagement:(id)arg1 atIndexPath:(id)arg2 withTriggerEvent:(unsigned long long)arg3;	// IMP=0x000000000005f4fa
- (id)cardSectionForIndexPath:(id)arg1;	// IMP=0x000000000005f477
- (id)resultForIndexPath:(id)arg1;	// IMP=0x000000000005f3f4
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x000000000005f3ec
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000005f399
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000005f355
- (void)popAtIndexPath:(id)arg1;	// IMP=0x000000000005f28a
- (void)updateTableModel:(id)arg1 withInsertedSections:(id)arg2 deletedSections:(id)arg3;	// IMP=0x000000000005edd8
@property(nonatomic) _Bool threeDTouchEnabled;
- (void)updateLayoutMarginsWithSize:(struct CGSize)arg1 orientation:(long long)arg2;	// IMP=0x000000000005ea5e
- (void)updateLayoutMargins;	// IMP=0x000000000005e94c
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000005e8e7
- (void)addOrbInteractionIfNeeded;	// IMP=0x000000000005e7a3
- (void)contentSizeDidChange:(struct CGSize)arg1;	// IMP=0x000000000005e733
- (void)sceneDidActivate:(id)arg1;	// IMP=0x000000000005e660
- (id)init;	// IMP=0x000000000005e52b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SearchUITableView *tableView; // @dynamic tableView;

@end
