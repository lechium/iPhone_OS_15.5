//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <EventKitUI/EKCalendarItemEditItemDelegate-Protocol.h>
#import <EventKitUI/UIActionSheetDelegate-Protocol.h>
#import <EventKitUI/UIAlertViewDelegate-Protocol.h>

@class EKCalendarItem, EKCalendarItemEditItem, EKChangeSet, EKEventStore, EKUIRecurrenceAlertController, NSArray, NSMutableSet, NSString, UIBarButtonItem, UIResponder, _UIAccessDeniedView;
@protocol EKCalendarItemEditorDelegate;

__attribute__((visibility("hidden")))
@interface EKCalendarItemEditor : UITableViewController <EKCalendarItemEditItemDelegate, UIActionSheetDelegate, UIAlertViewDelegate>
{
    NSArray *_editItems;	// 8 = 0x8
    NSArray *_orderedEditItems;	// 16 = 0x10
    id _revertState;	// 24 = 0x18
    _Bool _showsTimeZone;	// 32 = 0x20
    NSArray *_currentItems;	// 40 = 0x28
    EKUIRecurrenceAlertController *_recurrenceAlertController;	// 48 = 0x30
    EKCalendarItemEditItem *_currentEditItem;	// 56 = 0x38
    _Bool _giveTitleCellKeyboardFocus;	// 64 = 0x40
    _Bool _needsFirstResponderSet;	// 65 = 0x41
    int _editItemVisibility;	// 68 = 0x44
    _Bool _isIgnoringCellHeightChange;	// 72 = 0x48
    _Bool _needsCellHeightChange;	// 73 = 0x49
    NSMutableSet *_editItemsDisablingDoneButton;	// 80 = 0x50
    long long _lastAuthorizationStatus;	// 88 = 0x58
    _Bool _hasAppeared;	// 96 = 0x60
    UIBarButtonItem *_cancelButton;	// 104 = 0x68
    UIBarButtonItem *_doneButton;	// 112 = 0x70
    UIBarButtonItem *_leftButtonSpacer;	// 120 = 0x78
    UIBarButtonItem *_rightButtonSpacer;	// 128 = 0x80
    double _leftButtonSpace;	// 136 = 0x88
    double _rightButtonSpace;	// 144 = 0x90
    _Bool _scrollToNotes;	// 152 = 0x98
    _Bool _canHideDoneAndCancelButtons;	// 153 = 0x99
    _Bool _timeImplicitlySet;	// 154 = 0x9a
    _Bool _isTextEditing;	// 155 = 0x9b
    _Bool _pendingVideoConference;	// 156 = 0x9c
    id <EKCalendarItemEditorDelegate> _editorDelegate;	// 160 = 0xa0
    EKEventStore *_store;	// 168 = 0xa8
    EKCalendarItem *_calendarItem;	// 176 = 0xb0
    UIResponder *_responderToRestoreOnAppearence;	// 184 = 0xb8
    unsigned long long _visibleSectionToRestoreOnAppearence;	// 192 = 0xc0
    _UIAccessDeniedView *_accessDeniedView;	// 200 = 0xc8
    EKChangeSet *_originalChangeSet;	// 208 = 0xd0
}

+ (id)_doneLocalizedString;	// IMP=0x000000000014e1d9
+ (id)_addLocalizedString;	// IMP=0x000000000014e181
+ (id)defaultTitleForCalendarItem;	// IMP=0x000000000014d16e
- (void).cxx_destruct;	// IMP=0x000000000015279d
@property(retain, nonatomic) EKChangeSet *originalChangeSet; // @synthesize originalChangeSet=_originalChangeSet;
@property(retain, nonatomic) _UIAccessDeniedView *accessDeniedView; // @synthesize accessDeniedView=_accessDeniedView;
@property(nonatomic) _Bool pendingVideoConference; // @synthesize pendingVideoConference=_pendingVideoConference;
@property(nonatomic) _Bool isTextEditing; // @synthesize isTextEditing=_isTextEditing;
@property(nonatomic) _Bool timeImplicitlySet; // @synthesize timeImplicitlySet=_timeImplicitlySet;
@property(readonly) EKCalendarItemEditItem *currentEditItem; // @synthesize currentEditItem=_currentEditItem;
@property(nonatomic) _Bool canHideDoneAndCancelButtons; // @synthesize canHideDoneAndCancelButtons=_canHideDoneAndCancelButtons;
@property(nonatomic) _Bool showsTimeZone; // @synthesize showsTimeZone=_showsTimeZone;
@property(nonatomic) unsigned long long visibleSectionToRestoreOnAppearence; // @synthesize visibleSectionToRestoreOnAppearence=_visibleSectionToRestoreOnAppearence;
@property(retain, nonatomic) UIResponder *responderToRestoreOnAppearence; // @synthesize responderToRestoreOnAppearence=_responderToRestoreOnAppearence;
@property(nonatomic) _Bool scrollToNotes; // @synthesize scrollToNotes=_scrollToNotes;
@property(retain, nonatomic) EKCalendarItem *calendarItem; // @synthesize calendarItem=_calendarItem;
@property(retain, nonatomic) EKEventStore *store; // @synthesize store=_store;
@property(nonatomic) __weak id <EKCalendarItemEditorDelegate> editorDelegate; // @synthesize editorDelegate=_editorDelegate;
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000001525f0
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00000000001525a6
- (void)handleSaveKeyCommand;	// IMP=0x000000000015256d
- (void)handleCloseKeyCommand;	// IMP=0x0000000000152559
- (_Bool)canPerformSaveKeyCommand;	// IMP=0x000000000015253c
- (void)_presentDetachSheetForEvent:(id)arg1 saveAttachments:(_Bool)arg2 withContinueBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000152240
- (void)_presentAttachmentRecurrenceSheetForEvent:(id)arg1 withContinueBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000152083
- (id)_viewForSheet;	// IMP=0x00000000001c0b48
- (id)_nameForDeleteButton;	// IMP=0x00000000001c0b1a
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000151f53
- (_Bool)_performSave:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000151c54
- (void)_performDelete:(long long)arg1;	// IMP=0x0000000000151966
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000151872
- (void)deleteClicked:(id)arg1;	// IMP=0x000000000015168d
- (void)tableViewDidFinishReload:(id)arg1;	// IMP=0x000000000015167b
- (void)tableViewDidStartReload:(id)arg1;	// IMP=0x0000000000151669
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x000000000015140a
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;	// IMP=0x0000000000151359
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x000000000015114b
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x0000000000150ede
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x0000000000150df3
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000150be5
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000000150b9f
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000000150b50
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000150ab3
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000015089a
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001507fa
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001506b8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001505b2
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000015038a
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000001502ea
- (id)_editItemAtIndexPath:(id)arg1 firstRowIndex:(long long *)arg2;	// IMP=0x000000000015004b
- (void)editItemWantsFirstResponderResigned:(id)arg1;	// IMP=0x000000000015000e
- (void)editItem:(id)arg1 wantsViewControllerPresented:(id)arg2;	// IMP=0x000000000014ff8a
- (id)cellWithReuseIdentifier:(id)arg1 forEditItem:(id)arg2;	// IMP=0x000000000014ff07
- (id)defaultAlertTitleForEditItem:(id)arg1;	// IMP=0x000000000014fef5
- (void)editItemRequiresPopoverSizeUpdate:(id)arg1;	// IMP=0x000000000014fe66
- (void)editItemRequiresHeightChange:(id)arg1;	// IMP=0x000000000014fe3a
- (void)editItemVisibilityChanged:(id)arg1;	// IMP=0x000000000014fe28
- (void)editItem:(id)arg1 wantsRowsScrolledToVisible:(id)arg2;	// IMP=0x000000000014f903
- (void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4;	// IMP=0x000000000014f40b
- (void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3;	// IMP=0x000000000014f3f6
- (long long)rowNumberForEditItem:(id)arg1;	// IMP=0x000000000014efed
- (void)editItem:(id)arg1 wantsRowReload:(id)arg2;	// IMP=0x000000000014eeb8
- (void)editItemWantsFooterTitlesToReload:(id)arg1;	// IMP=0x000000000014ecda
- (void)editItem:(id)arg1 performActionsOnCellAtSubitem:(unsigned long long)arg2 actions:(CDUnknownBlockType)arg3;	// IMP=0x000000000014ebd2
- (void)_reallyHandleCellHeightChange;	// IMP=0x000000000014ea5e
- (void)_tableViewDidUpdateHeights;	// IMP=0x000000000014ea1a
- (void)_tableViewWillUpdateHeights;	// IMP=0x000000000014ea09
- (void)editItem:(id)arg1 wantsDoneButtonDisabled:(_Bool)arg2;	// IMP=0x000000000014e957
- (_Bool)_canEnableDoneButton;	// IMP=0x000000000014e8f0
- (void)editItem:(id)arg1 wantsKeyboardPinned:(_Bool)arg2;	// IMP=0x000000000014e8dc
- (id)viewControllerForEditItem:(id)arg1;	// IMP=0x000000000014e8d3
- (void)editItem:(id)arg1 textViewShouldReturn:(id)arg2;	// IMP=0x000000000014e7fc
- (void)editItemWantsInjectableViewControllerToBeShown:(id)arg1;	// IMP=0x000000000014e7df
- (void)editItemTextChanged:(id)arg1;	// IMP=0x000000000014e751
- (void)editItemDidEndEditing:(id)arg1;	// IMP=0x000000000014e6d8
- (void)_updateDoneButtonState;	// IMP=0x000000000014e680
- (void)editItem:(id)arg1 didSaveFromDetailViewController:(_Bool)arg2;	// IMP=0x000000000014e446
- (void)editItemDidStartEditing:(id)arg1;	// IMP=0x000000000014e231
- (void)_revertEvent;	// IMP=0x00000000001c0aef
- (void)_copyEventForPossibleRevert;	// IMP=0x00000000001c0ac4
- (id)_viewHierarchy;	// IMP=0x000000000014e00a
@property(nonatomic) double navBarRightContentInset;
@property(nonatomic) double navBarLeftContentInset;
- (void)_setWantsToEnableDoneButton:(_Bool)arg1;	// IMP=0x000000000014df00
- (void)_setDoneAndCancelButtonVisible:(_Bool)arg1;	// IMP=0x000000000014de3a
- (void)_keyboardWillChangeFrame:(id)arg1;	// IMP=0x000000000014db45
- (void)_keyboardWillHide;	// IMP=0x000000000014daa9
- (void)_pinKeyboard:(_Bool)arg1;	// IMP=0x000000000014da3d
- (struct CGSize)preferredContentSize;	// IMP=0x000000000014d916
- (void)reloadTableViewSectionsForDates:(_Bool)arg1 invitees:(_Bool)arg2 location:(_Bool)arg3 alarm:(_Bool)arg4;	// IMP=0x000000000014d910
- (void)refreshURL;	// IMP=0x000000000014d90a
- (void)refreshLocation;	// IMP=0x000000000014d904
- (void)refreshInvitees;	// IMP=0x000000000014d8fe
- (void)refreshStartAndEndDates;	// IMP=0x000000000014d8ec
- (void)_setShowingAccessDeniedView:(_Bool)arg1 showSettingsInstructions:(_Bool)arg2;	// IMP=0x000000000014d662
- (void)storeChanged:(id)arg1;	// IMP=0x000000000014d4c0
- (void)setupForEvent;	// IMP=0x000000000014d17c
- (unsigned long long)entityType;	// IMP=0x00000000001c0a96
- (id)notificationNamesForLocaleChange;	// IMP=0x00000000001c0a68
- (id)defaultAlertTitle;	// IMP=0x00000000001c0a3a
- (void)setupDeleteButton;	// IMP=0x000000000014d176
- (id)preferredTitle;	// IMP=0x000000000014d166
- (_Bool)hasAttachmentChanges;	// IMP=0x00000000001c0a0c
- (id)attachmentsModifiedEvent;	// IMP=0x00000000001c09de
- (_Bool)attachmentsModifiedOnRecurrence;	// IMP=0x00000000001c09b0
- (_Bool)saveCalendarItemWithSpan:(long long)arg1 error:(id *)arg2;	// IMP=0x00000000001c0982
- (void)prepareEditItems;	// IMP=0x000000000014d0c9
- (void)_setCalendarItemOnEditItems;	// IMP=0x000000000014cf56
- (void)_configureVisibleItems;	// IMP=0x000000000014ccf9
- (_Bool)shouldDisplayEditItem:(id)arg1 withVisibility:(int)arg2;	// IMP=0x000000000014cce2
- (void)_completeWithAction:(long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3;	// IMP=0x000000000014cbcc
- (void)completeWithAction:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000014cbb4
- (_Bool)saveWithSpan:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000014cb5e
- (void)resignCurrentEditItemFirstResponder;	// IMP=0x000000000014cb16
- (void)focus:(unsigned long long)arg1 select:(_Bool)arg2;	// IMP=0x000000000014cb10
- (_Bool)hasUnsavedChanges;	// IMP=0x000000000014c9fa
- (_Bool)willPresentDialogOnSave;	// IMP=0x000000000014c960
- (void)completeAndSaveWithContinueBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000014c949
- (void)completeAndSave;	// IMP=0x000000000014c935
- (void)handleTapOutside;	// IMP=0x000000000014c85c
- (void)done:(id)arg1 withContinueBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000014c36e
- (void)done:(id)arg1;	// IMP=0x000000000014c35a
- (void)cancelEditingWithDelegateNotification:(_Bool)arg1 forceCancel:(_Bool)arg2;	// IMP=0x000000000014c239
- (void)cancel:(id)arg1;	// IMP=0x000000000014c220
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000014c198
- (void)applicationDidResume;	// IMP=0x000000000014c124
- (void)viewDidLoad;	// IMP=0x000000000014be60
- (void)updateNavButtonsWithSpacing;	// IMP=0x000000000014bad3
- (void)_setupFirstResponder;	// IMP=0x000000000014b975
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000014b818
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000014b750
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000014b6f6
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000014b371
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000014b35f
- (void)resetBackgroundColor;	// IMP=0x000000000014b27f
- (void)loadView;	// IMP=0x000000000014b0ed
- (long long)firstTableRowForEditItem:(id)arg1;	// IMP=0x000000000014ae4f
- (unsigned long long)tableSectionForEditItem:(id)arg1;	// IMP=0x000000000014acc6
- (int)editItemVisibility;	// IMP=0x000000000014acb6
- (void)setEditItemVisibility:(int)arg1 animated:(_Bool)arg2;	// IMP=0x000000000014ac45
- (void)_updateCurrentEditItemsFromVisibility:(int)arg1 toVisibility:(int)arg2 animated:(_Bool)arg3;	// IMP=0x000000000014a864
- (void)_localeChanged;	// IMP=0x000000000014a61a
- (id)_orderedEditItems;	// IMP=0x00000000001c0954
- (id)_editItems;	// IMP=0x00000000001c0926
- (void)dealloc;	// IMP=0x000000000014a544
- (id)init;	// IMP=0x000000000014a44d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
