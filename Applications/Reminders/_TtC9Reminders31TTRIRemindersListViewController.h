//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, NSLayoutConstraint, UIBarButtonItem, UIToolbar, UIView;

@interface _TtC9Reminders31TTRIRemindersListViewController : UIViewController
{
    MISSING_TYPE *scrollViewDelegate;	// 8 = 0x8
    MISSING_TYPE *untypedTreeView;	// 16 = 0x10
    MISSING_TYPE *doneBarButton;	// 24 = 0x18
    MISSING_TYPE *toolbar;	// 32 = 0x20
    MISSING_TYPE *toolbarBottomConstraint;	// 40 = 0x28
    MISSING_TYPE *tipContentView;	// 48 = 0x30
    MISSING_TYPE *showingKeyboard;	// 56 = 0x38
    MISSING_TYPE *presenter;	// 64 = 0x40
    MISSING_TYPE *listInfo;	// 80 = 0x50
    MISSING_TYPE *emptyListMessaging;	// 243 = 0xf3
    MISSING_TYPE *$__lazy_storage_$_batchSetDueDateBarButton;	// 248 = 0xf8
    MISSING_TYPE *$__lazy_storage_$_batchMoveBarButton;	// 256 = 0x100
    MISSING_TYPE *$__lazy_storage_$_batchDeleteBarButton;	// 264 = 0x108
    MISSING_TYPE *$__lazy_storage_$_batchMoreBarButton;	// 272 = 0x110
    MISSING_TYPE *focusedCell;	// 280 = 0x118
    MISSING_TYPE *pendingStartEditingItem;	// 0 = 0x0
    MISSING_TYPE *deferredItemUpdates;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_actionMenuBarButton;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_addReminderButton;	// 0 = 0x0
    MISSING_TYPE *itemsPendingUpdate;	// 0 = 0x0
    MISSING_TYPE *toolbarHeight;	// 0 = 0x0
    MISSING_TYPE *keyboardHeight;	// 0 = 0x0
    MISSING_TYPE *pencilInputAreaHeight;	// 0 = 0x0
    MISSING_TYPE *pendingLoadCellPromises;	// 0 = 0x0
    MISSING_TYPE *chromelessToolbarUpdater;	// 0 = 0x0
    MISSING_TYPE *canMoveItemReturnValueTempOverrides;	// 0 = 0x0
    MISSING_TYPE *lastSetLargeTitleColor;	// 0 = 0x0
    MISSING_TYPE *contentScrollViewNeedsAdjustmentAfterScrollingAnimation;	// 0 = 0x0
    MISSING_TYPE *currentMultipleSelectionInteractionSession;	// 0 = 0x0
    MISSING_TYPE *listMessagingView;	// 0 = 0x0
    MISSING_TYPE *feedbackGenerator;	// 0 = 0x0
    MISSING_TYPE *pencilAutoCommitTracker;	// 0 = 0x0
    MISSING_TYPE *currentTextInputModeObserver;	// 0 = 0x0
    MISSING_TYPE *currentTextInputModeCancellable;	// 0 = 0x0
    MISSING_TYPE *treeViewDidEndScrollingAnimationPassthroughSubject;	// 0 = 0x0
    MISSING_TYPE *treeViewDidScrollPassthroughSubject;	// 0 = 0x0
    MISSING_TYPE *treeViewDidStopScrollingCancellable;	// 0 = 0x0
    MISSING_TYPE *firstVisibleItemToRestore;	// 0 = 0x0
    MISSING_TYPE *treeViewHasSwipedItem;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_completedTasksRotor;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_incompleteTasksRotor;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_overdueTasksRotor;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x004000000021eeb0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000022f200
- (void)keyboardWillChangeFrameNotificationWithNotification:(id)arg1;	// IMP=0x001000000022cc00
- (void)keyboardDidHideNotificationWithNotification:(id)arg1;	// IMP=0x001000000022c890
- (void)keyboardWillHideNotificationWithNotification:(id)arg1;	// IMP=0x001000000022c7c0
- (void)keyboardDidShowNotificationWithNotification:(id)arg1;	// IMP=0x001000000022c7b0
- (void)keyboardWillShowNotificationWithNotification:(id)arg1;	// IMP=0x001000000022c700
- (void)willAddDeactivationReasonWithNotification:(id)arg1;	// IMP=0x001000000022c340
- (void)toggleShowCompletedAction:(id)arg1;	// IMP=0x001000000022b0b0
- (void)printListAction:(id)arg1;	// IMP=0x001000000022b000
- (void)postponeAllOverdueToTodayAction:(id)arg1;	// IMP=0x001000000022af40
- (void)setReminderDueDateToNoneAction:(id)arg1;	// IMP=0x001000000022ae90
- (void)setReminderDueDateToNextWeekAction:(id)arg1;	// IMP=0x001000000022ae80
- (void)setReminderDueDateToWeekendAction:(id)arg1;	// IMP=0x001000000022ae70
- (void)setReminderDueDateToTomorrowAction:(id)arg1;	// IMP=0x001000000022ae60
- (void)setReminderDueDateToTodayAction:(id)arg1;	// IMP=0x001000000022ad60
- (void)postponeSelectedReminderAction:(id)arg1;	// IMP=0x001000000022aca0
- (void)addStructuredHashtagForSelectedReminderAction:(id)arg1;	// IMP=0x001000000022a890
- (void)toggleFlaggedForSelectedReminderAction:(id)arg1;	// IMP=0x001000000022a870
- (void)batchDeleteSelectionAction:(id)arg1;	// IMP=0x001000000022a570
- (void)batchMoveSelectionToListAction:(id)arg1;	// IMP=0x001000000022a080
- (void)batchSetDueDateSelectionAction:(id)arg1;	// IMP=0x0010000000229c70
- (void)outdentSelectedReminderAction:(id)arg1;	// IMP=0x00100000002296f0
- (void)indentSelectedReminderAction:(id)arg1;	// IMP=0x00100000002295a0
- (void)toggleReminderCompletionStateAction:(id)arg1;	// IMP=0x00100000002294f0
- (void)showReminderInfoAction:(id)arg1;	// IMP=0x0010000000229310
- (void)collapseAllItemsAction:(id)arg1;	// IMP=0x00100000002291c0
- (void)expandAllItemsAction:(id)arg1;	// IMP=0x0010000000228810
- (void)newReminderAction:(id)arg1;	// IMP=0x0010000000228690
- (void)deleteReminderAction:(id)arg1;	// IMP=0x00100000002283e0
- (void)expandReminderSubtasksAction:(id)arg1;	// IMP=0x0010000000228310
- (void)collapseReminderSubtasksAction:(id)arg1;	// IMP=0x00100000002281c0
- (void)endEditingReminderAction:(id)arg1;	// IMP=0x0010000000228110
- (void)doneBarButtonAction:(id)arg1;	// IMP=0x0010000000228040
@property(nonatomic) __weak NSLayoutConstraint *toolbarBottomConstraint; // @synthesize toolbarBottomConstraint;
@property(nonatomic) __weak UIToolbar *toolbar; // @synthesize toolbar;
@property(nonatomic, retain) UIBarButtonItem *doneBarButton; // @synthesize doneBarButton;
@property(nonatomic) __weak UIView *untypedTreeView; // @synthesize untypedTreeView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0010000000227e70
- (void)validateCommand:(id)arg1;	// IMP=0x0010000000227e20
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00100000002276e0
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000002259a0
- (void)updateUserActivityState:(id)arg1;	// IMP=0x00100000002252e0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000002250a0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000225060
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000224c40
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000002245c0
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000224370
- (void)viewWillLayoutSubviews;	// IMP=0x0010000000223e00
- (void)viewDidLoad;	// IMP=0x0010000000223b20
- (void)dealloc;	// IMP=0x001000000021ee90
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000021eda0

@end

