//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <EventKitUI/EKUIManagedViewController-Protocol.h>
#import <EventKitUI/UIAdaptivePresentationControllerDelegate-Protocol.h>

@class EKEvent, EKEventEditor, EKEventStore, NSString, UIColor;
@protocol EKEventEditViewDelegate;

@interface EKEventEditViewController : UINavigationController <UIAdaptivePresentationControllerDelegate, EKUIManagedViewController>
{
    EKEventStore *_store;	// 8 = 0x8
    EKEvent *_event;	// 16 = 0x10
    NSString *_eventId;	// 24 = 0x18
    _Bool _completedWithAction;	// 32 = 0x20
    _Bool _ignoreUnsavedChanges;	// 33 = 0x21
    int _transitionForModalViewPresentation;	// 36 = 0x24
    id <EKEventEditViewDelegate> _editViewDelegate;	// 40 = 0x28
    EKEventEditor *_editor;	// 48 = 0x30
    EKEventEditViewController *_strongSelf;	// 56 = 0x38
    NSString *_suggestionKey;	// 64 = 0x40
}

+ (void)setDefaultDatesForEvent:(id)arg1;	// IMP=0x0000000000058813
+ (id)eventEditViewControllerWithEvent:(id)arg1 eventStore:(id)arg2 editViewDelegate:(id)arg3;	// IMP=0x000000000005a738
- (void).cxx_destruct;	// IMP=0x000000000005a6b4
@property(nonatomic) _Bool ignoreUnsavedChanges; // @synthesize ignoreUnsavedChanges=_ignoreUnsavedChanges;
@property(retain, nonatomic) NSString *suggestionKey; // @synthesize suggestionKey=_suggestionKey;
@property(nonatomic) int transitionForModalViewPresentation; // @synthesize transitionForModalViewPresentation=_transitionForModalViewPresentation;
@property(retain, nonatomic) EKEventEditViewController *strongSelf; // @synthesize strongSelf=_strongSelf;
@property(retain, nonatomic) EKEventEditor *editor; // @synthesize editor=_editor;
@property(nonatomic) __weak id <EKEventEditViewDelegate> editViewDelegate; // @synthesize editViewDelegate=_editViewDelegate;
- (void)presentationControllerDidAttemptToDismissWithPendingConference:(id)arg1;	// IMP=0x000000000005a550
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;	// IMP=0x000000000005a4b4
- (_Bool)canManagePresentationStyle;	// IMP=0x000000000005a4ac
- (_Bool)wantsManagement;	// IMP=0x000000000005a4a4
- (id)confirmPendingConferenceDismissAlertController;	// IMP=0x000000000005a154
- (id)confirmDismissAlertController;	// IMP=0x0000000000059edd
- (id)_confirmDismissAlertExplanationText;	// IMP=0x0000000000059e36
- (id)_rightBarButtonItem;	// IMP=0x0000000000059c82
- (id)_leftBarButtonItem;	// IMP=0x0000000000059ace
- (id)_eventEditorForTestingOnly;	// IMP=0x0000000000059abc
@property(readonly, nonatomic) _Bool displayingRootView;
@property(nonatomic) _Bool timeImplicitlySet;
@property(nonatomic) double editorNavBarRightContentInset;
@property(nonatomic) double editorNavBarLeftContentInset;
@property(retain, nonatomic) UIColor *editorBackgroundColor;
- (void)focusTitle;	// IMP=0x000000000005992d
- (void)focusAndSelectStartDate;	// IMP=0x0000000000059906
- (void)focusAndSelectTitle;	// IMP=0x00000000000598df
- (_Bool)hasUnsavedChanges;	// IMP=0x000000000005989d
- (_Bool)willPresentDialogOnSave;	// IMP=0x0000000000059880
- (void)completeAndSaveWithContinueBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000059863
- (void)completeAndSave;	// IMP=0x0000000000059846
- (void)handleTapOutside;	// IMP=0x0000000000059829
@property(nonatomic) _Bool canHideDoneAndCancelButtons;
@property(nonatomic) _Bool showAttachments;
@property(nonatomic) _Bool scrollToNotes;
- (struct CGSize)preferredContentSize;	// IMP=0x000000000005975e
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000005971a
- (void)_storeChanged:(id)arg1;	// IMP=0x0000000000059690
- (void)editor:(id)arg1 prepareCalendarItemForEdit:(id)arg2;	// IMP=0x0000000000059513
- (void)editor:(id)arg1 didCompleteWithAction:(long long)arg2;	// IMP=0x0000000000059220
- (_Bool)editor:(id)arg1 shouldCompleteWithAction:(long long)arg2;	// IMP=0x0000000000059121
- (void)cancelEditingWithDelegateNotification:(_Bool)arg1 forceCancel:(_Bool)arg2;	// IMP=0x0000000000059104
- (void)cancelEditing;	// IMP=0x00000000000590ee
- (_Bool)saveWithSpan:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000590d1
- (void)refreshStartAndEndDates;	// IMP=0x00000000000590b4
@property(retain, nonatomic) EKEvent *event;
@property(retain, nonatomic) EKEventStore *eventStore;
- (void)dealloc;	// IMP=0x0000000000058c99
- (_Bool)isModalInPresentation;	// IMP=0x0000000000058c1b
- (_Bool)shouldAutorotate;	// IMP=0x0000000000058bc7
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000058b58
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000058a97
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000589e0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000588c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

