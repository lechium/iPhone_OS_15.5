//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterUI/CNComposeRecipientTextViewDelegate-Protocol.h>
#import <GameCenterUI/CNContactPickerDelegate-Protocol.h>
#import <GameCenterUI/GKDashboardMultiplayerPickerDatasourceDelegate-Protocol.h>
#import <GameCenterUI/GKMultiplayerCustomInviteMessageViewControllerDelegate-Protocol.h>
#import <GameCenterUI/UITextFieldDelegate-Protocol.h>

@class CNComposeRecipientTextView, CNContactPickerViewController, GKDashboardMultiplayerPickerDataSource, GKPickerSearchTextField, NSLayoutConstraint, NSMutableDictionary, NSString, UIButton, UILabel, UIStackView, UITextField, UIView, UIVisualEffectView, WAKView;
@protocol GKDashboardMultiplayerPickerDelegate, GKDashboardNearbyBrowserDelegate;

@interface GKDashboardMultiplayerPickerViewController <UITextFieldDelegate, GKDashboardMultiplayerPickerDatasourceDelegate, CNContactPickerDelegate, GKMultiplayerCustomInviteMessageViewControllerDelegate, CNComposeRecipientTextViewDelegate>
{
    _Bool _shouldIgnoreClearSelection;	// 8 = 0x8
    _Bool _usePreferredFocusCell;	// 9 = 0x9
    _Bool _recipientRemovedImplicitly;	// 10 = 0xa
    _Bool _skipAddressTokenization;	// 11 = 0xb
    _Bool _isAnimatingComposeTextViewSizeChange;	// 12 = 0xc
    _Bool _composeTextViewShowingPlaceholderText;	// 13 = 0xd
    NSString *_message;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
    id <GKDashboardNearbyBrowserDelegate> _nearbyDelegate;	// 32 = 0x20
    id <GKDashboardMultiplayerPickerDelegate> _multiplayerPickerDelegate;	// 40 = 0x28
    UILabel *_descriptionLabel;	// 48 = 0x30
    UIButton *_sendButton;	// 56 = 0x38
    UIButton *_customizeMessageButton;	// 64 = 0x40
    UITextField *_messageField;	// 72 = 0x48
    UIVisualEffectView *_backgroundEffectView;	// 80 = 0x50
    UIVisualEffectView *_navigationVisualEffectBackground;	// 88 = 0x58
    NSLayoutConstraint *_navigationHeaderHeightConstraint;	// 96 = 0x60
    UILabel *_headerTitle;	// 104 = 0x68
    UILabel *_headerSubtitle;	// 112 = 0x70
    UIStackView *_headerContentView;	// 120 = 0x78
    WAKView *_collapsedTitleContainer;	// 128 = 0x80
    UILabel *_collapsedTitle;	// 136 = 0x88
    UILabel *_collapsedSubtitle;	// 144 = 0x90
    NSMutableDictionary *_recipientPlayerMap;	// 152 = 0x98
    NSMutableDictionary *_removedRecipientPlayerMap;	// 160 = 0xa0
    NSMutableDictionary *_recipientMap;	// 168 = 0xa8
    NSLayoutConstraint *_customizeMessageBottomConstraint;	// 176 = 0xb0
    double _initialCustomizeMessageBottomConstraintConstant;	// 184 = 0xb8
    CNContactPickerViewController *_contactPicker;	// 192 = 0xc0
    double _keyboardHeight;	// 200 = 0xc8
    UIView *_composeTextViewContainer;	// 208 = 0xd0
    CNComposeRecipientTextView *_composeTextView;	// 216 = 0xd8
    NSLayoutConstraint *_composeTextViewHeightConstraint;	// 224 = 0xe0
    UIButton *_navBarMessageButton;	// 232 = 0xe8
    UIButton *_navBarSendButton;	// 240 = 0xf0
    NSLayoutConstraint *_rightBarButtonTopConstraint;	// 248 = 0xf8
    NSLayoutConstraint *_leftBarButtonTopConstraint;	// 256 = 0x100
    GKPickerSearchTextField *_searchTextField;	// 264 = 0x108
    UIButton *_showContactPickerButton;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x0000000000082f2d
@property(retain, nonatomic) UIButton *showContactPickerButton; // @synthesize showContactPickerButton=_showContactPickerButton;
@property(retain, nonatomic) GKPickerSearchTextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(retain, nonatomic) NSLayoutConstraint *leftBarButtonTopConstraint; // @synthesize leftBarButtonTopConstraint=_leftBarButtonTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *rightBarButtonTopConstraint; // @synthesize rightBarButtonTopConstraint=_rightBarButtonTopConstraint;
@property(retain, nonatomic) UIButton *navBarSendButton; // @synthesize navBarSendButton=_navBarSendButton;
@property(retain, nonatomic) UIButton *navBarMessageButton; // @synthesize navBarMessageButton=_navBarMessageButton;
@property(nonatomic) _Bool composeTextViewShowingPlaceholderText; // @synthesize composeTextViewShowingPlaceholderText=_composeTextViewShowingPlaceholderText;
@property(retain, nonatomic) NSLayoutConstraint *composeTextViewHeightConstraint; // @synthesize composeTextViewHeightConstraint=_composeTextViewHeightConstraint;
@property(retain, nonatomic) CNComposeRecipientTextView *composeTextView; // @synthesize composeTextView=_composeTextView;
@property(nonatomic) __weak UIView *composeTextViewContainer; // @synthesize composeTextViewContainer=_composeTextViewContainer;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) CNContactPickerViewController *contactPicker; // @synthesize contactPicker=_contactPicker;
@property(nonatomic) double initialCustomizeMessageBottomConstraintConstant; // @synthesize initialCustomizeMessageBottomConstraintConstant=_initialCustomizeMessageBottomConstraintConstant;
@property(retain, nonatomic) NSLayoutConstraint *customizeMessageBottomConstraint; // @synthesize customizeMessageBottomConstraint=_customizeMessageBottomConstraint;
@property(nonatomic) _Bool isAnimatingComposeTextViewSizeChange; // @synthesize isAnimatingComposeTextViewSizeChange=_isAnimatingComposeTextViewSizeChange;
@property(nonatomic) _Bool skipAddressTokenization; // @synthesize skipAddressTokenization=_skipAddressTokenization;
@property(nonatomic) _Bool recipientRemovedImplicitly; // @synthesize recipientRemovedImplicitly=_recipientRemovedImplicitly;
@property(retain, nonatomic) NSMutableDictionary *recipientMap; // @synthesize recipientMap=_recipientMap;
@property(retain, nonatomic) NSMutableDictionary *removedRecipientPlayerMap; // @synthesize removedRecipientPlayerMap=_removedRecipientPlayerMap;
@property(retain, nonatomic) NSMutableDictionary *recipientPlayerMap; // @synthesize recipientPlayerMap=_recipientPlayerMap;
@property(nonatomic) __weak UILabel *collapsedSubtitle; // @synthesize collapsedSubtitle=_collapsedSubtitle;
@property(nonatomic) __weak UILabel *collapsedTitle; // @synthesize collapsedTitle=_collapsedTitle;
@property(nonatomic) __weak WAKView *collapsedTitleContainer; // @synthesize collapsedTitleContainer=_collapsedTitleContainer;
@property(nonatomic) __weak UIStackView *headerContentView; // @synthesize headerContentView=_headerContentView;
@property(nonatomic) __weak UILabel *headerSubtitle; // @synthesize headerSubtitle=_headerSubtitle;
@property(nonatomic) __weak UILabel *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(nonatomic) __weak NSLayoutConstraint *navigationHeaderHeightConstraint; // @synthesize navigationHeaderHeightConstraint=_navigationHeaderHeightConstraint;
@property(nonatomic) __weak UIVisualEffectView *navigationVisualEffectBackground; // @synthesize navigationVisualEffectBackground=_navigationVisualEffectBackground;
@property(nonatomic) __weak UIVisualEffectView *backgroundEffectView; // @synthesize backgroundEffectView=_backgroundEffectView;
@property(nonatomic) __weak UITextField *messageField; // @synthesize messageField=_messageField;
@property(nonatomic) __weak UIButton *customizeMessageButton; // @synthesize customizeMessageButton=_customizeMessageButton;
@property(nonatomic) __weak UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) _Bool usePreferredFocusCell; // @synthesize usePreferredFocusCell=_usePreferredFocusCell;
@property(nonatomic) _Bool shouldIgnoreClearSelection; // @synthesize shouldIgnoreClearSelection=_shouldIgnoreClearSelection;
@property(nonatomic) __weak id <GKDashboardMultiplayerPickerDelegate> multiplayerPickerDelegate; // @synthesize multiplayerPickerDelegate=_multiplayerPickerDelegate;
@property(nonatomic) id <GKDashboardNearbyBrowserDelegate> nearbyDelegate; // @synthesize nearbyDelegate=_nearbyDelegate;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;	// IMP=0x0000000000082949
- (void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;	// IMP=0x0000000000082874
- (void)composeRecipientViewReturnPressed:(id)arg1;	// IMP=0x0000000000082668
- (void)composeHeaderView:(id)arg1 didChangeSize:(struct CGSize)arg2;	// IMP=0x00000000000822d1
- (void)composeRecipientView:(id)arg1 didSelectRecipients:(id)arg2;	// IMP=0x0000000000081b1c
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;	// IMP=0x0000000000081ad2
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;	// IMP=0x000000000008195b
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;	// IMP=0x0000000000081719
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;	// IMP=0x0000000000081667
- (void)_updateCollectionView;	// IMP=0x00000000000814c5
- (struct UIEdgeInsets)collectionSectionInset;	// IMP=0x00000000000813a1
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x0000000000081252
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000081211
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000081081
- (void)didEndSearchTextEditing;	// IMP=0x0000000000080ff7
- (void)setSearchText:(id)arg1;	// IMP=0x0000000000080f09
- (void)didBeginSearchTextEditing;	// IMP=0x0000000000080eb1
- (void)willHideKeyboard:(id)arg1;	// IMP=0x0000000000080e9c
- (void)willShowKeyboard:(id)arg1;	// IMP=0x0000000000080c7f
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x0000000000080c79
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0000000000080b45
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x0000000000080af6
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;	// IMP=0x0000000000080a84
- (void)contactPickerDidCancel:(id)arg1;	// IMP=0x0000000000080a6d
- (void)didPressShowContactPickerButton:(id)arg1;	// IMP=0x0000000000080a0f
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000000080677
- (void)_updateButtonEnableState;	// IMP=0x000000000008046d
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0000000000080307
- (void)handleSearchTextFieldReturn:(id)arg1;	// IMP=0x00000000000802b5
- (id)existingMessageForInviteViewController:(id)arg1;	// IMP=0x00000000000802a3
- (void)customInviteViewController:(id)arg1 didFinishWithMessage:(id)arg2;	// IMP=0x000000000008023b
- (void)updateAddMessageButtonVisibility;	// IMP=0x000000000007ff85
- (void)cancel:(id)arg1;	// IMP=0x000000000007fea0
- (void)addMessage:(id)arg1;	// IMP=0x000000000007fd8f
- (void)send:(id)arg1;	// IMP=0x000000000007fb5e
- (id)composedNameForSuggestedMessageGroup:(id)arg1;	// IMP=0x000000000007f551
- (void)clearSelection;	// IMP=0x000000000007f4c6
- (void)playerGroupDidExpandInPlace;	// IMP=0x000000000007f4b2
- (id)pickerCollectionView;	// IMP=0x000000000007f4a0
- (void)pickerDatasource:(id)arg1 didDeselectPlayers:(id)arg2 inGroup:(id)arg3;	// IMP=0x000000000007ef2b
- (void)highlightAlreadySelectedPlayers:(id)arg1 inGroup:(id)arg2;	// IMP=0x000000000007eb53
- (void)pickerDatasource:(id)arg1 didSelectPlayers:(id)arg2 inGroup:(id)arg3;	// IMP=0x000000000007e81e
- (void)pickerDatasourceDidSelectAddFriend:(id)arg1;	// IMP=0x000000000007e802
- (void)pickerDatasource:(id)arg1 didPickPlayers:(id)arg2;	// IMP=0x000000000007e6de
- (id)createSortPickerMenu;	// IMP=0x000000000007e0d6
- (id)preferredFocusEnvironments;	// IMP=0x000000000007deaa
- (void)dataUpdated:(_Bool)arg1 withError:(id)arg2;	// IMP=0x000000000007de69
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;	// IMP=0x000000000007dd0f
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x000000000007dccd
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x000000000007dc5c
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x000000000007dbeb
- (void)collapseHeaderView;	// IMP=0x000000000007da1c
- (void)dockHeaderViewIfNeeded;	// IMP=0x000000000007d6ca
- (void)showCollapsedTitleAndSubtitleInNavBar;	// IMP=0x000000000007d16b
- (void)updateNavHeaderHeightAndOpacity;	// IMP=0x000000000007cd33
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000000007cc32
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000007cb96
- (_Bool)hasData;	// IMP=0x000000000007cb8e
@property(readonly, nonatomic) _Bool nearbyOnly;
@property(nonatomic) _Bool supportsNearby; // @dynamic supportsNearby;
- (void)highlightRecipients:(id)arg1;	// IMP=0x000000000007c535
- (void)removeRecipientWithName:(id)arg1;	// IMP=0x000000000007c3e6
- (void)addRecipientForPlayers:(id)arg1 withName:(id)arg2;	// IMP=0x000000000007c13f
- (void)configureComposeTextView;	// IMP=0x000000000007bd5b
- (id)blurEffectForTraitCollection:(id)arg1;	// IMP=0x000000000007bd10
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000007bb75
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;	// IMP=0x000000000007bb6f
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000007b92a
- (void)adjustCustomizeMessageConstraint;	// IMP=0x000000000007b7b0
- (void)updateCollectionViewContentInsets;	// IMP=0x000000000007b6b2
@property(readonly, nonatomic) GKDashboardMultiplayerPickerDataSource *pickerDataSource;
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000007b4f5
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000007acdb
- (void)viewDidLoad;	// IMP=0x000000000007948f
- (void)viewDidLayoutSubviews;	// IMP=0x000000000007944e
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000793cf
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000792aa
- (id)initWithMaxSelectable:(long long)arg1 hiddenPlayers:(id)arg2 nearbyOnly:(_Bool)arg3;	// IMP=0x000000000007907e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
