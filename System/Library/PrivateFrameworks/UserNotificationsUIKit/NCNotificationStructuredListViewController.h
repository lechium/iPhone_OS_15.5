//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <UserNotificationsUIKit/ATXDigestOnboardingSuggestionClientObserver-Protocol.h>
#import <UserNotificationsUIKit/NCCreateContactNavigationViewControllerDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCDigestOnboardingNavigationControllerDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCLegibilitySettingsAdjusting-Protocol.h>
#import <UserNotificationsUIKit/NCModeManagerObserver-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationManagementViewPresenterDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationMasterListDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationOptionsMenuSettingsDelegate-Protocol.h>

@class ATXDigestOnboardingSuggestion, ATXDigestOnboardingSuggestionClient, ATXDigestOnboardingSuggestionLogging, NCCreateContactNavigationViewController, NCDigestOnboardingNavigationController, NCModeManager, NCNotificationListSectionHeaderView, NCNotificationListTouchEaterManager, NCNotificationListView, NCNotificationManagementViewPresenter, NCNotificationMasterList, NCNotificationOptionsMenu, NCNotificationRequest, NCNotificationViewController, NSArray, NSDate, NSHashTable, NSString, UIPanGestureRecognizer, UIScrollView;
@protocol NCNotificationListCoalescingControlsHandler, NCNotificationListComponent, NCNotificationStructuredListViewControllerDelegate;

@interface NCNotificationStructuredListViewController : UIViewController <NCNotificationMasterListDelegate, NCNotificationManagementViewPresenterDelegate, NCNotificationOptionsMenuSettingsDelegate, NCDigestOnboardingNavigationControllerDelegate, ATXDigestOnboardingSuggestionClientObserver, NCModeManagerObserver, NCCreateContactNavigationViewControllerDelegate, NCLegibilitySettingsAdjusting>
{
    _Bool _deviceAuthenticated;	// 8 = 0x8
    _Bool _backgroundBlurred;	// 9 = 0x9
    id <NCNotificationStructuredListViewControllerDelegate> _delegate;	// 16 = 0x10
    double _itemSpacing;	// 24 = 0x18
    NCNotificationMasterList *_masterList;	// 32 = 0x20
    NCNotificationListView *_masterListView;	// 40 = 0x28
    NCNotificationListTouchEaterManager *_touchEaterManager;	// 48 = 0x30
    NCNotificationManagementViewPresenter *_managementViewPresenter;	// 56 = 0x38
    NCNotificationOptionsMenu *_optionsMenu;	// 64 = 0x40
    NCModeManager *_modeManager;	// 72 = 0x48
    NCCreateContactNavigationViewController *_createContactNavigationController;	// 80 = 0x50
    NCNotificationRequest *_notificationRequestRemovedWhilePresentingLongLook;	// 88 = 0x58
    NCNotificationViewController *_notificationViewControllerPresentingLongLook;	// 96 = 0x60
    NCNotificationListSectionHeaderView *_headerViewInForceTouchState;	// 104 = 0x68
    id <NCNotificationListCoalescingControlsHandler> _coalescingControlsHandlerInForceTouchState;	// 112 = 0x70
    id <NCNotificationListComponent> _notificationListComponentPresentingOptionsMenu;	// 120 = 0x78
    NSHashTable *_observers;	// 128 = 0x80
    NCDigestOnboardingNavigationController *_digestOnboardingNavigationController;	// 136 = 0x88
    ATXDigestOnboardingSuggestionClient *_digestOnboardingSuggestionClient;	// 144 = 0x90
    ATXDigestOnboardingSuggestion *_digestOnboardingSuggestion;	// 152 = 0x98
    ATXDigestOnboardingSuggestionLogging *_digestOnboardingSuggestionLogging;	// 160 = 0xa0
    NSDate *_digestOnboardingSuggestionPresentationTime;	// 168 = 0xa8
    NSArray *_digestOnboardingLastBundleIdentifiersSelection;	// 176 = 0xb0
    NSArray *_digestOnboardingLastScheduledDeliveryTimesSelection;	// 184 = 0xb8
    struct UIEdgeInsets _insetMargins;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00000000000af511
@property(retain, nonatomic) NSArray *digestOnboardingLastScheduledDeliveryTimesSelection; // @synthesize digestOnboardingLastScheduledDeliveryTimesSelection=_digestOnboardingLastScheduledDeliveryTimesSelection;
@property(retain, nonatomic) NSArray *digestOnboardingLastBundleIdentifiersSelection; // @synthesize digestOnboardingLastBundleIdentifiersSelection=_digestOnboardingLastBundleIdentifiersSelection;
@property(retain, nonatomic) NSDate *digestOnboardingSuggestionPresentationTime; // @synthesize digestOnboardingSuggestionPresentationTime=_digestOnboardingSuggestionPresentationTime;
@property(retain, nonatomic) ATXDigestOnboardingSuggestionLogging *digestOnboardingSuggestionLogging; // @synthesize digestOnboardingSuggestionLogging=_digestOnboardingSuggestionLogging;
@property(retain, nonatomic) ATXDigestOnboardingSuggestion *digestOnboardingSuggestion; // @synthesize digestOnboardingSuggestion=_digestOnboardingSuggestion;
@property(retain, nonatomic) ATXDigestOnboardingSuggestionClient *digestOnboardingSuggestionClient; // @synthesize digestOnboardingSuggestionClient=_digestOnboardingSuggestionClient;
@property(retain, nonatomic) NCDigestOnboardingNavigationController *digestOnboardingNavigationController; // @synthesize digestOnboardingNavigationController=_digestOnboardingNavigationController;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) __weak id <NCNotificationListComponent> notificationListComponentPresentingOptionsMenu; // @synthesize notificationListComponentPresentingOptionsMenu=_notificationListComponentPresentingOptionsMenu;
@property(nonatomic) __weak id <NCNotificationListCoalescingControlsHandler> coalescingControlsHandlerInForceTouchState; // @synthesize coalescingControlsHandlerInForceTouchState=_coalescingControlsHandlerInForceTouchState;
@property(nonatomic) __weak NCNotificationListSectionHeaderView *headerViewInForceTouchState; // @synthesize headerViewInForceTouchState=_headerViewInForceTouchState;
@property(nonatomic) __weak NCNotificationViewController *notificationViewControllerPresentingLongLook; // @synthesize notificationViewControllerPresentingLongLook=_notificationViewControllerPresentingLongLook;
@property(retain, nonatomic) NCNotificationRequest *notificationRequestRemovedWhilePresentingLongLook; // @synthesize notificationRequestRemovedWhilePresentingLongLook=_notificationRequestRemovedWhilePresentingLongLook;
@property(nonatomic) _Bool backgroundBlurred; // @synthesize backgroundBlurred=_backgroundBlurred;
@property(retain, nonatomic) NCCreateContactNavigationViewController *createContactNavigationController; // @synthesize createContactNavigationController=_createContactNavigationController;
@property(retain, nonatomic) NCModeManager *modeManager; // @synthesize modeManager=_modeManager;
@property(retain, nonatomic) NCNotificationOptionsMenu *optionsMenu; // @synthesize optionsMenu=_optionsMenu;
@property(retain, nonatomic) NCNotificationManagementViewPresenter *managementViewPresenter; // @synthesize managementViewPresenter=_managementViewPresenter;
@property(retain, nonatomic) NCNotificationListTouchEaterManager *touchEaterManager; // @synthesize touchEaterManager=_touchEaterManager;
@property(retain, nonatomic) NCNotificationListView *masterListView; // @synthesize masterListView=_masterListView;
@property(retain, nonatomic) NCNotificationMasterList *masterList; // @synthesize masterList=_masterList;
@property(readonly, nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(readonly, nonatomic) struct UIEdgeInsets insetMargins; // @synthesize insetMargins=_insetMargins;
@property(nonatomic, getter=isDeviceAuthenticated) _Bool deviceAuthenticated; // @synthesize deviceAuthenticated=_deviceAuthenticated;
@property(nonatomic) __weak id <NCNotificationStructuredListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_toggleNotificationListVisibilityIfNecessary;	// IMP=0x00000000000af0e3
- (void)_resetCellWithRevealedActions;	// IMP=0x00000000000af069
- (_Bool)_forwarNotificationRequestToLongLookIfNecessary:(id)arg1;	// IMP=0x00000000000aed38
- (void)_contentSizeCategoryDidChange;	// IMP=0x00000000000aeb40
- (void)_requestAuthenticationAndPerformBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000aeacb
- (id)_notificationSystemSettings;	// IMP=0x00000000000aea56
- (id)_sectionSettingsForSectionIdentifier:(id)arg1;	// IMP=0x00000000000ae9c6
- (id)_logDescription;	// IMP=0x00000000000ae964
- (void)_presentOptionsMenuForNotificationRequest:(id)arg1 withPresentingView:(id)arg2 optionsForSection:(_Bool)arg3;	// IMP=0x00000000000ae8bd
- (void)_setScheduledDeliveryEnabledForSectionIdentifier:(id)arg1;	// IMP=0x00000000000ae839
- (void)_setSystemScheduledDeliveryEnabled:(_Bool)arg1 scheduledDeliveryTimes:(id)arg2;	// IMP=0x00000000000ae7aa
- (void)_scheduleDigestOnboardingSuggestion;	// IMP=0x00000000000ae683
- (_Bool)_shouldPresentDigestOnboardingSuggestion;	// IMP=0x00000000000ae635
- (void)_presentDigestOnboardingViewController;	// IMP=0x00000000000ae548
- (void)_setDigestOnboardingSuggestionVisible:(_Bool)arg1;	// IMP=0x00000000000ae304
- (void)_endInteraction;	// IMP=0x00000000000ae1f7
- (void)_beginInteraction;	// IMP=0x00000000000ae0ea
- (void)_toggleDigestOnboardingSuggestionIfNecessary;	// IMP=0x00000000000ae079
- (_Bool)_isPresentingDigestOnboardingSuggestion;	// IMP=0x00000000000ae035
- (void)digestOnboardingNavigationControllerDidDismiss:(id)arg1;	// IMP=0x00000000000ae000
- (void)digestOnboardingNavigationControllerDidDeferSetup:(id)arg1;	// IMP=0x00000000000adf2d
- (void)digestOnboardingNavigationController:(id)arg1 didChangeDeliveryTimesActiveSelection:(id)arg2 appBundleIdentifiersActiveSelection:(id)arg3;	// IMP=0x00000000000adec9
- (void)digestOnboardingNavigationController:(id)arg1 didScheduleDigestDeliveryTimes:(id)arg2 forAppBundleIdentifiers:(id)arg3;	// IMP=0x00000000000adc32
- (void)modeManager:(id)arg1 didUpdateCurrentModeConfiguration:(id)arg2 previousModeConfiguration:(id)arg3;	// IMP=0x00000000000ad5e3
- (void)digestOnboardingSuggestionClient:(id)arg1 didSuggestOnboarding:(id)arg2;	// IMP=0x00000000000ad4b7
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000ad3d8
- (void)notificationManagementViewPresenter:(id)arg1 setMuted:(_Bool)arg2 untilDate:(id)arg3 forNotificationRequest:(id)arg4 withSectionIdentifier:(id)arg5 threadIdentifier:(id)arg6;	// IMP=0x00000000000ad163
- (void)notificationManagementViewPresenter:(id)arg1 setAllowsTimeSensitive:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;	// IMP=0x00000000000acf1d
- (void)notificationManagementViewPresenterDidDismissManagementView:(id)arg1;	// IMP=0x00000000000ace86
- (void)notificationManagementViewPresenterWillPresentManagementView:(id)arg1;	// IMP=0x00000000000acdf2
- (void)notificationManagementViewPresenter:(id)arg1 setScheduledDelivery:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;	// IMP=0x00000000000acd63
- (void)notificationManagementViewPresenter:(id)arg1 setMuted:(_Bool)arg2 untilDate:(id)arg3 forSectionIdentifier:(id)arg4 threadIdentifier:(id)arg5;	// IMP=0x00000000000acc9d
- (void)notificationManagementViewPresenter:(id)arg1 setAllowsCriticalAlerts:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;	// IMP=0x00000000000acaa9
- (void)notificationManagementViewPresenter:(id)arg1 setDeliverQuietly:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;	// IMP=0x00000000000ac863
- (void)notificationManagementViewPresenter:(id)arg1 setAllowsNotifications:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;	// IMP=0x00000000000ac61d
- (id)notificationManagementViewPresenter:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2;	// IMP=0x00000000000ac608
- (void)createContactNavigationControllerDidDismiss:(id)arg1;	// IMP=0x00000000000ac5d3
- (void)createContactNavigationControllerDidComplete:(id)arg1;	// IMP=0x00000000000ac569
- (void)notificationOptionsMenu:(id)arg1 requestsClearingSectionWithIdentifier:(id)arg2;	// IMP=0x00000000000ac379
- (void)notificationOptionsMenu:(id)arg1 setModeConfiguration:(id)arg2;	// IMP=0x00000000000ac359
- (id)notificationOptionsMenuRequestsCurrentModeConfiguration:(id)arg1;	// IMP=0x00000000000ac33c
- (void)notificationOptionsMenu:(id)arg1 addSenderToContactsForNotificationRequest:(id)arg2 withSectionIdentifier:(id)arg3;	// IMP=0x00000000000ac191
- (void)notificationOptionsMenu:(id)arg1 setScheduledDelivery:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;	// IMP=0x00000000000ac102
- (void)notificationOptionsMenu:(id)arg1 setAllowsTimeSensitive:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;	// IMP=0x00000000000abebc
- (void)notificationOptionsMenu:(id)arg1 setMuted:(_Bool)arg2 untilDate:(id)arg3 forNotificationRequest:(id)arg4 withSectionIdentifier:(id)arg5 threadIdentifier:(id)arg6;	// IMP=0x00000000000abdf5
- (void)notificationOptionsMenu:(id)arg1 setAllowsCriticalAlerts:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;	// IMP=0x00000000000abc01
- (void)notificationOptionsMenu:(id)arg1 setAllowsNotifications:(_Bool)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;	// IMP=0x00000000000ab9bb
- (id)notificationOptionsMenuRequestsSystemSettings:(id)arg1;	// IMP=0x00000000000ab9a9
- (id)notificationOptionsMenu:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2;	// IMP=0x00000000000ab994
- (void)notificationListComponent:(id)arg1 didRemoveNotificationRequest:(id)arg2;	// IMP=0x00000000000ab98e
- (void)notificationListComponentDidRemoveAllNotificationRequests:(id)arg1;	// IMP=0x00000000000ab988
- (_Bool)notificationMasterList:(id)arg1 shouldFilterNotificationRequest:(id)arg2;	// IMP=0x00000000000ab8ff
- (void)notificationMasterList:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(struct CGPoint)arg3 targetContentOffset:(inout struct CGPoint *)arg4;	// IMP=0x00000000000ab861
- (void)notificationMasterList:(id)arg1 scrollViewDidScroll:(id)arg2;	// IMP=0x00000000000ab7c0
- (void)notificationMasterList:(id)arg1 scrollViewWillBeginDragging:(id)arg2;	// IMP=0x00000000000ab743
- (void)notificationListComponent:(id)arg1 acceptedSummaryOnboarding:(_Bool)arg2;	// IMP=0x00000000000ab433
- (_Bool)notificationListComponentShouldAllowLongPressGesture:(id)arg1;	// IMP=0x00000000000ab3cd
- (void)notificationListComponentChangedContent:(id)arg1;	// IMP=0x00000000000ab3bb
- (void)notificationMasterListDidScrollToRevealNotificationHistory:(id)arg1;	// IMP=0x00000000000ab359
- (id)backgroundGroupNameBaseForNotificationListComponent:(id)arg1;	// IMP=0x00000000000ab347
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationListComponent:(id)arg1;	// IMP=0x00000000000ab2cd
- (id)unhideHomeAffordanceAnimationSettingsForNotificationListComponent:(id)arg1;	// IMP=0x00000000000ab253
- (id)hideHomeAffordanceAnimationSettingsForNotificationListComponent:(id)arg1;	// IMP=0x00000000000ab1d9
- (id)notificationListComponent:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2;	// IMP=0x00000000000ab144
- (id)notificationUsageTrackingStateForNotificationListComponent:(id)arg1;	// IMP=0x00000000000ab0c9
- (void)notificationListComponent:(id)arg1 requestsAuthenticationAndPerformBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ab054
- (_Bool)notificationListComponent:(id)arg1 isClockNotificationRequest:(id)arg2;	// IMP=0x00000000000aafcb
- (void)notificationListComponent:(id)arg1 setModeConfiguration:(id)arg2;	// IMP=0x00000000000aafab
- (id)notificationListComponentRequestsCurrentModeConfiguration:(id)arg1;	// IMP=0x00000000000aaf8e
- (id)notificationListComponent:(id)arg1 notificationRequestForUUID:(id)arg2;	// IMP=0x00000000000aaef9
- (void)notificationListComponent:(id)arg1 setAllowsDirectMessages:(_Bool)arg2 forSectionIdentifier:(id)arg3;	// IMP=0x00000000000aae6a
- (void)notificationListComponent:(id)arg1 setAllowsTimeSensitive:(_Bool)arg2 forSectionIdentifier:(id)arg3;	// IMP=0x00000000000aaddb
- (void)notificationListComponent:(id)arg1 setScheduledDelivery:(_Bool)arg2 forSectionIdentifier:(id)arg3;	// IMP=0x00000000000aad4c
- (void)notificationListComponent:(id)arg1 setMuted:(_Bool)arg2 untilDate:(id)arg3 forSectionIdentifier:(id)arg4 threadIdentifier:(id)arg5;	// IMP=0x00000000000aac86
- (void)notificationListComponent:(id)arg1 requestsPresentingOptionsMenuForNotificationRequest:(id)arg2 presentingViewProvider:(CDUnknownBlockType)arg3 optionsForSection:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000aa74f
- (void)notificationListComponent:(id)arg1 requestsPresentingManagementViewForNotificationRequest:(id)arg2 managementViewType:(unsigned long long)arg3 withPresentingView:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000aa3a2
- (void)notificationListComponent:(id)arg1 didPresentSectionHeaderView:(id)arg2 inForceTouchState:(_Bool)arg3;	// IMP=0x00000000000aa388
- (void)notificationListComponent:(id)arg1 didPresentCoalescingControlsHandler:(id)arg2 inForceTouchState:(_Bool)arg3;	// IMP=0x00000000000aa36e
- (void)notificationListComponent:(id)arg1 didTransitionSectionHeaderView:(id)arg2 toClearState:(_Bool)arg3;	// IMP=0x00000000000aa2f3
- (void)notificationListComponent:(id)arg1 didTransitionCoalescingControlsHandler:(id)arg2 toClearState:(_Bool)arg3;	// IMP=0x00000000000aa278
- (void)notificationListComponent:(id)arg1 didTransitionActionsForNotificationCell:(id)arg2 revealed:(_Bool)arg3;	// IMP=0x00000000000aa1fd
- (void)notificationListComponent:(id)arg1 requestsClearingNotificationRequests:(id)arg2;	// IMP=0x00000000000aa17e
- (void)notificationListComponent:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2;	// IMP=0x00000000000aa0ff
- (void)notificationListComponentRequestsClearingAllNotificationRequests:(id)arg1;	// IMP=0x00000000000aa0f9
- (void)notificationListComponent:(id)arg1 didRemoveNotificationViewController:(id)arg2;	// IMP=0x00000000000aa083
- (void)notificationListComponent:(id)arg1 didAddNotificationViewController:(id)arg2;	// IMP=0x00000000000aa009
- (void)notificationListComponent:(id)arg1 didEndUserInteractionWithNotificationViewController:(id)arg2;	// IMP=0x00000000000a9f8a
- (void)notificationListComponent:(id)arg1 didBeginUserInteractionWithNotificationViewController:(id)arg2;	// IMP=0x00000000000a9f0b
- (void)notificationListComponentDidSignificantUserInteraction:(id)arg1;	// IMP=0x00000000000a9ea9
- (_Bool)notificationMasterListShouldAllowNotificationHistoryReveal:(id)arg1;	// IMP=0x00000000000a9e3e
- (void)notificationMasterList:(id)arg1 requestsClearingFromIncomingSectionNotificationRequests:(id)arg2;	// IMP=0x00000000000a9dc9
- (Class)notificationMasterListNotificationViewControllerClass:(id)arg1;	// IMP=0x00000000000a9d60
- (_Bool)notificationListComponentShouldHintForDefaultAction:(id)arg1;	// IMP=0x00000000000a9cf2
- (void)notificationListComponent:(id)arg1 isPresentingLongLookForViewController:(id)arg2;	// IMP=0x00000000000a990b
- (void)notificationListComponent:(id)arg1 shouldFinishLongLookTransitionForNotificationRequest:(id)arg2 trigger:(long long)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a987a
- (id)notificationListComponent:(id)arg1 containerViewProviderForExpandedContentForViewController:(id)arg2;	// IMP=0x00000000000a97f3
- (_Bool)notificationListComponent:(id)arg1 shouldAllowInteractionsForNotificationRequest:(id)arg2;	// IMP=0x00000000000a9763
- (double)insetHorizontalMarginForNotificationListComponent:(id)arg1;	// IMP=0x00000000000a9755
- (id)containerViewForPreviewInteractionPresentedContentForNotificationListComponent:(id)arg1;	// IMP=0x00000000000a96db
- (id)notificationListComponent:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2;	// IMP=0x00000000000a96c6
- (void)notificationListComponent:(id)arg1 willDismissLongLookForCancelActionForViewController:(id)arg2;	// IMP=0x00000000000a95c1
- (void)notificationListComponent:(id)arg1 requestsExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(_Bool)arg4 withParameters:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000000a939b
- (void)notificationListComponent:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000a919f
- (id)legibilitySettingsForNotificationListComponent:(id)arg1;	// IMP=0x00000000000a9125
- (void)adjustForLegibilitySettingsChange:(id)arg1;	// IMP=0x00000000000a90b3
- (void)notifyContentObservers;	// IMP=0x00000000000a8f3e
- (void)removeContentObserver:(id)arg1;	// IMP=0x00000000000a8edf
- (void)addContentObserver:(id)arg1;	// IMP=0x00000000000a8e5e
- (_Bool)interpretsViewAsContent:(id)arg1;	// IMP=0x00000000000a8c2c
@property(readonly, nonatomic) NSString *backgroundGroupNameBase;
- (id)newCaptureOnlyMaterialViewController;	// IMP=0x00000000000a8b93
- (void)listViewControllerPresentedByUserAction;	// IMP=0x00000000000a8b56
@property(nonatomic) __weak UIPanGestureRecognizer *homeAffordancePanGesture;
@property(nonatomic, getter=isHomeAffordanceVisible) _Bool homeAffordanceVisible;
- (void)revealNotificationHistory:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000a8823
@property(readonly, nonatomic, getter=isPresentingNotificationInLongLook) _Bool presentingNotificationInLongLook;
- (_Bool)isContentExtensionVisible:(id)arg1;	// IMP=0x00000000000a8779
- (_Bool)dismissModalFullScreenAnimated:(_Bool)arg1;	// IMP=0x00000000000a8259
@property(readonly, nonatomic) struct CGSize effectiveContentSize;
- (void)toggleFilteringForSectionIdentifier:(id)arg1 shouldFilter:(_Bool)arg2;	// IMP=0x00000000000a80aa
- (void)migrateNotifications;	// IMP=0x00000000000a7fb1
@property(readonly, nonatomic) _Bool hasVisibleUrgentBreakthroughContent;
@property(readonly, nonatomic) _Bool hasVisibleContentToReveal;
@property(readonly, nonatomic) _Bool hasVisibleContent;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)notificationsLoadedForSectionIdentifier:(id)arg1;	// IMP=0x00000000000a7c59
- (void)updateNotificationSystemSettings:(id)arg1 previousSystemSettings:(id)arg2;	// IMP=0x00000000000a7b0d
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;	// IMP=0x00000000000a799f
- (void)modifyNotificationRequest:(id)arg1;	// IMP=0x00000000000a7737
- (void)removeNotificationRequest:(id)arg1;	// IMP=0x00000000000a745a
- (void)insertNotificationRequest:(id)arg1;	// IMP=0x00000000000a71f1
- (void)_didChangeDeepestActionResponder;	// IMP=0x00000000000a71eb
- (void)_didChangeDeepestUnambiguousResponder;	// IMP=0x00000000000a71e5
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000a71dd
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x00000000000a70e7
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000a7073
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000a6f98
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000a6ea2
- (void)viewDidLoad;	// IMP=0x00000000000a6cf0
- (id)init;	// IMP=0x00000000000a6bcc
- (void)collapseGroupForNotificationRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000af798
- (void)expandGroupForNotificationRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000af712
- (id)notificationRequestWithNotificationIdentifier:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x00000000000af67b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

