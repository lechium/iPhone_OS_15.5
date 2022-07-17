//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKAvatarPickerViewControllerDelegate-Protocol.h>
#import <ChatKit/CKDetailsContactsManagerDelegate-Protocol.h>
#import <ChatKit/CKNavBarUnifiedCallButtonDelegate-Protocol.h>
#import <ChatKit/CKNavigationBarCanvasViewDelegate-Protocol.h>
#import <ChatKit/UIGestureRecognizerDelegate-Protocol.h>

@class CKAvatarPickerViewController, CKCanvasBackButtonView, CKConversation, CKDetailsContactsManager, CKLabel, CKNavBarUnifiedCallButton, CKNavigationBarCanvasView, CNContactStore, NSString, UIBarButtonItem, UIButton, UINavigationController, UIView;
@protocol CKNavbarCanvasViewControllerDelegate;

@interface CKNavbarCanvasViewController : UIViewController <UIGestureRecognizerDelegate, CKDetailsContactsManagerDelegate, CKNavigationBarCanvasViewDelegate, CKNavBarUnifiedCallButtonDelegate, CKAvatarPickerViewControllerDelegate>
{
    _Bool _canShowBackButtonView;	// 8 = 0x8
    _Bool _shouldShowDoneButton;	// 9 = 0x9
    _Bool _isInEditingMode;	// 10 = 0xa
    _Bool _hasConfiguredCallButtonAudioRouteActions;	// 11 = 0xb
    _Bool _editing;	// 12 = 0xc
    _Bool _expanseEnabled;	// 13 = 0xd
    UIBarButtonItem *_detailsBarButton;	// 16 = 0x10
    CKDetailsContactsManager *_contactsManager;	// 24 = 0x18
    id <CKNavbarCanvasViewControllerDelegate> _delegate;	// 32 = 0x20
    UIButton *_callButton;	// 40 = 0x28
    CKNavigationBarCanvasView *_canvasView;	// 48 = 0x30
    long long _navBarContext;	// 56 = 0x38
    NSString *_navbarTitle;	// 64 = 0x40
    CKConversation *_conversation;	// 72 = 0x48
    CKAvatarPickerViewController *_avatarPickerViewController;	// 80 = 0x50
    CKLabel *_defaultLabel;	// 88 = 0x58
    CKCanvasBackButtonView *_backButtonView;	// 96 = 0x60
    UIButton *_detailsButton;	// 104 = 0x68
    CKNavBarUnifiedCallButton *_unifiedCallButton;	// 112 = 0x70
    UIButton *_editCancelButtonView;	// 120 = 0x78
    UIButton *_doneButton;	// 128 = 0x80
    UINavigationController *_proxyNavigationController;	// 136 = 0x88
    long long _indicatorType;	// 144 = 0x90
    CNContactStore *_suggestionsEnabledContactStore;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x000000000011b4da
@property(retain, nonatomic) CNContactStore *suggestionsEnabledContactStore; // @synthesize suggestionsEnabledContactStore=_suggestionsEnabledContactStore;
@property(nonatomic) long long indicatorType; // @synthesize indicatorType=_indicatorType;
@property(nonatomic) _Bool expanseEnabled; // @synthesize expanseEnabled=_expanseEnabled;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) __weak UINavigationController *proxyNavigationController; // @synthesize proxyNavigationController=_proxyNavigationController;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIButton *editCancelButtonView; // @synthesize editCancelButtonView=_editCancelButtonView;
@property(nonatomic) _Bool hasConfiguredCallButtonAudioRouteActions; // @synthesize hasConfiguredCallButtonAudioRouteActions=_hasConfiguredCallButtonAudioRouteActions;
@property(retain, nonatomic) CKNavBarUnifiedCallButton *unifiedCallButton; // @synthesize unifiedCallButton=_unifiedCallButton;
@property(retain, nonatomic) UIButton *detailsButton; // @synthesize detailsButton=_detailsButton;
@property(retain, nonatomic) CKCanvasBackButtonView *backButtonView; // @synthesize backButtonView=_backButtonView;
@property(retain, nonatomic) CKLabel *defaultLabel; // @synthesize defaultLabel=_defaultLabel;
@property(retain, nonatomic) CKAvatarPickerViewController *avatarPickerViewController; // @synthesize avatarPickerViewController=_avatarPickerViewController;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) NSString *navbarTitle; // @synthesize navbarTitle=_navbarTitle;
@property(nonatomic) long long navBarContext; // @synthesize navBarContext=_navBarContext;
@property(nonatomic) _Bool isInEditingMode; // @synthesize isInEditingMode=_isInEditingMode;
@property(nonatomic) _Bool shouldShowDoneButton; // @synthesize shouldShowDoneButton=_shouldShowDoneButton;
@property(nonatomic) _Bool canShowBackButtonView; // @synthesize canShowBackButtonView=_canShowBackButtonView;
@property(retain, nonatomic) CKNavigationBarCanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property(retain, nonatomic) UIButton *callButton; // @synthesize callButton=_callButton;
@property(nonatomic) __weak id <CKNavbarCanvasViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CKDetailsContactsManager *contactsManager; // @synthesize contactsManager=_contactsManager;
- (void)_handleAllowedByScreenTimeChatChanged:(id)arg1;	// IMP=0x000000000011b200
- (void)_handleConversationRecipientsDidChange:(id)arg1;	// IMP=0x000000000011b1ee
- (struct NSDirectionalEdgeInsets)systemMinimumLayoutMarginsForView:(id)arg1;	// IMP=0x000000000011b184
- (_Bool)shouldShowAvatarView;	// IMP=0x000000000011b172
- (void)contactsManagerViewModelsDidChange:(id)arg1;	// IMP=0x000000000011b13b
- (void)_buttonPressed:(id)arg1;	// IMP=0x000000000011aff9
- (void)_infoButtonTapped:(id)arg1;	// IMP=0x000000000011af84
- (void)_facetimeVideoButtonTapped:(id)arg1;	// IMP=0x000000000011af38
- (void)_facetimeAudioButtonTapped:(id)arg1;	// IMP=0x000000000011aeec
- (void)refreshAudioButtonTargetAction;	// IMP=0x000000000011ad0f
- (void)_contactPhotosEnabledChangedNotification:(id)arg1;	// IMP=0x000000000011aaf3
- (void)setUnreadCountTitleColor;	// IMP=0x000000000011a985
- (void)_chatUnreadCountDidChange:(id)arg1;	// IMP=0x000000000011a954
- (void)_updateUnreadCountForBackbuttonView:(long long)arg1;	// IMP=0x000000000011a89a
- (long long)_unreadCount;	// IMP=0x000000000011a79b
- (void)showContactCardForEntity:(id)arg1 address:(id)arg2;	// IMP=0x000000000011a2f2
- (void)_handleTranscriptScroll:(id)arg1;	// IMP=0x000000000011a286
- (void)dismissModal;	// IMP=0x000000000011a26d
- (void)buttonWidthDidChange:(id)arg1;	// IMP=0x000000000011a1d7
- (void)buttonRequestsOpenJoinedCall:(id)arg1;	// IMP=0x000000000011a080
- (void)button:(id)arg1 requestsJoinActiveCallWithVideoEnabled:(_Bool)arg2;	// IMP=0x0000000000119eeb
- (void)buttonRequestsStartTelephonyCall:(id)arg1;	// IMP=0x0000000000119d97
- (void)buttonRequestsStartFaceTimeAudio:(id)arg1;	// IMP=0x0000000000119cd0
- (void)buttonRequestsStartFaceTimeVideo:(id)arg1;	// IMP=0x0000000000119b4c
- (void)tappedAvatarPickerViewController;	// IMP=0x0000000000119adb
- (void)_addUserDidTapNavigationBarRecognizer:(id)arg1;	// IMP=0x0000000000119a3f
@property(retain, nonatomic) UIBarButtonItem *detailsBarButton; // @synthesize detailsBarButton=_detailsBarButton;
- (void)_configureForDefaultMode;	// IMP=0x000000000011907d
- (void)_configureForEditMode;	// IMP=0x0000000000118fc5
- (void)updateDefaultLabelIfNecessary;	// IMP=0x0000000000118f01
- (id)_titleItemViewForTraitCollection:(id)arg1;	// IMP=0x00000000001188f8
- (id)_secondaryRightItemViewForTraitCollection:(id)arg1;	// IMP=0x00000000001188e6
- (id)_rightItemViewForTraitCollection:(id)arg1;	// IMP=0x00000000001187f0
- (id)_leftItemViewForTraitCollection:(id)arg1;	// IMP=0x000000000011878f
- (void)updateContentsForConversation:(id)arg1;	// IMP=0x00000000001186d4
- (id)contextMenuForUnknownRecipient:(id)arg1;	// IMP=0x00000000001184d9
- (id)recipientContextMenu;	// IMP=0x0000000000118385
- (void)_initializeForTraitCollection:(id)arg1;	// IMP=0x00000000001180ac
- (_Bool)hideChevron;	// IMP=0x0000000000118033
- (_Bool)wantsVerifiedIconForTitle:(id)arg1;	// IMP=0x0000000000117f40
- (void)_updateTitleViewAnimated:(_Bool)arg1;	// IMP=0x0000000000117bfa
- (void)updateTitle:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000117b75
- (void)configureForEditing:(_Bool)arg1;	// IMP=0x0000000000117b42
- (void)updateAvatarPickerDelegate;	// IMP=0x0000000000117ab7
@property(readonly, nonatomic) UIView *avatarView;
- (void)_notifyDelegateThatViewControllerWantsResize;	// IMP=0x00000000001179ca
- (void)_handleAddressBookChange:(id)arg1;	// IMP=0x000000000011793d
- (void)multiwayStateChanged:(id)arg1;	// IMP=0x000000000011792b
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000117840
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001177ff
- (void)viewDidLoad;	// IMP=0x000000000011761e
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000117386
- (void)handleCloseNavBarAnimationCompleteNotification:(id)arg1;	// IMP=0x00000000001172ed
- (void)_userDidTapNavigationBar;	// IMP=0x0000000000117200
- (void)_configureCallButtonAudioRouteActionsIfNecessary;	// IMP=0x0000000000116fb6
- (void)_updateFTControls;	// IMP=0x000000000011693e
- (void)legacyToggleExpansionState;	// IMP=0x0000000000116349
- (void)toggleExpansionState;	// IMP=0x0000000000116312
- (void)collapse;	// IMP=0x00000000001162a6
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x0000000000115e37
- (void)loadView;	// IMP=0x0000000000115bf4
- (id)navigationItem;	// IMP=0x0000000000115bec
- (_Bool)_canShowAvatarView;	// IMP=0x0000000000115b36
- (double)_preferredHeightForTraitCollection:(id)arg1;	// IMP=0x0000000000115972
- (id)_windowTraitCollection;	// IMP=0x000000000011591b
- (void)startAudioCommunicationUsingPreferredRouteIfAvailable:(_Bool)arg1;	// IMP=0x0000000000115871
- (id)navBarTitleFromConversation:(id)arg1;	// IMP=0x00000000001157d0
- (void)registerNotifications;	// IMP=0x0000000000115618
- (void)dealloc;	// IMP=0x00000000001155cf
- (id)initWithConversation:(id)arg1 navigationController:(id)arg2;	// IMP=0x00000000001154d0
- (id)initWithConversation:(id)arg1;	// IMP=0x0000000000115464
- (_Bool)__im_ff_uiConsistencyEnabled;	// IMP=0x00000000001153ce
- (_Bool)__im_ff_isExpanseEnabled;	// IMP=0x0000000000115419

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
