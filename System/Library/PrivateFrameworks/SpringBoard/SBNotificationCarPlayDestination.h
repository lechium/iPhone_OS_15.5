//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BNBannerHostMonitorListenerObserving-Protocol.h>
#import <SpringBoard/BNPresentableObserving-Protocol.h>
#import <SpringBoard/NCCarPlayBannerPresentableViewControllerDelegate-Protocol.h>
#import <SpringBoard/NCNotificationAlertDestination-Protocol.h>

@class BNBannerHostMonitorListener, BSServiceConnectionEndpoint, BSTimer, CRCarPlayAppPolicyEvaluator, NCCarPlayBannerSource, NCNotificationRequest, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, SBNCAlertingController;
@protocol BNPresentable, NCNotificationAlertDestinationDelegate;

@interface SBNotificationCarPlayDestination : NSObject <BNBannerHostMonitorListenerObserving, BNPresentableObserving, NCCarPlayBannerPresentableViewControllerDelegate, NCNotificationAlertDestination>
{
    BNBannerHostMonitorListener *_bannerHostMonitorListener;	// 8 = 0x8
    NSHashTable *_presentables;	// 16 = 0x10
    CRCarPlayAppPolicyEvaluator *_appPolicyEvaluator;	// 24 = 0x18
    NSMutableDictionary *_appPolicyForBundleID;	// 32 = 0x20
    id <BNPresentable> _presentablePresentingAlertController;	// 40 = 0x28
    NSMutableArray *_notificationRequestsForAnnounce;	// 48 = 0x30
    NSMutableArray *_notificationRequestsPendingAnnounce;	// 56 = 0x38
    NSMutableArray *_notificationRequestsPendingAVSession;	// 64 = 0x40
    NCNotificationRequest *_notificationRequestPendingDeactivation;	// 72 = 0x48
    id <NCNotificationAlertDestinationDelegate> _delegate;	// 80 = 0x50
    NCCarPlayBannerSource *_carPlayBannerSource;	// 88 = 0x58
    SBNCAlertingController *_alertingController;	// 96 = 0x60
    BSTimer *_announceTimeoutTimer;	// 104 = 0x68
    NCNotificationRequest *_notificationRequestCurrentlyAnnouncing;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000005dea95
@property(retain, nonatomic, getter=_notificationRequestCurrentlyAnnouncing, setter=_setNotificationRequestCurrentlyAnnouncing:) NCNotificationRequest *notificationRequestCurrentlyAnnouncing; // @synthesize notificationRequestCurrentlyAnnouncing=_notificationRequestCurrentlyAnnouncing;
@property(retain, nonatomic, getter=_announceTimeoutTimer, setter=_setAnnounceTimeoutTimer:) BSTimer *announceTimeoutTimer; // @synthesize announceTimeoutTimer=_announceTimeoutTimer;
@property(nonatomic) __weak SBNCAlertingController *alertingController; // @synthesize alertingController=_alertingController;
@property(nonatomic) __weak id <NCNotificationAlertDestinationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_cancelAnnounceTimeoutTimer;	// IMP=0x00000000005de9a8
- (void)_startAnnounceTimeoutTimer;	// IMP=0x00000000005de6c2
- (void)_flushAnnounceNotificationRequestsShouldAnnounce:(_Bool)arg1;	// IMP=0x00000000005de573
- (void)_flushNotificationRequestsPendingAnnounce;	// IMP=0x00000000005de47c
- (void)_withdrawNotificationRequest:(id)arg1 inStore:(id)arg2;	// IMP=0x00000000005de38e
- (void)_modifyNotificationRequest:(id)arg1 inStore:(id)arg2;	// IMP=0x00000000005de296
- (void)_queueNotificationRequestWhileAnnouncing:(id)arg1;	// IMP=0x00000000005de23c
- (id)_notificationRequestForAnnounceWithIdentifier:(id)arg1;	// IMP=0x00000000005de119
- (void)_clearNotificationRequestPendingAnnounceDeactivationIfNecessary;	// IMP=0x00000000005ddff2
- (_Bool)_shouldDeferPostingNotificationRequestForAnnounce:(id)arg1;	// IMP=0x00000000005dde28
- (_Bool)_shouldAnnounceNotificationRequest:(id)arg1;	// IMP=0x00000000005dde20
- (_Bool)_isCurrentlyAnnouncing;	// IMP=0x00000000005dde03
- (_Bool)_setSuspended:(_Bool)arg1 forPresentingAlertControllerForPresentable:(id)arg2;	// IMP=0x00000000005ddcef
- (id)_bulletinForNotificationRequest:(id)arg1;	// IMP=0x00000000005ddbeb
- (void)_callOrFaceTimeStateChanged;	// IMP=0x00000000005ddac2
- (_Bool)_inCallOrFaceTime;	// IMP=0x00000000005dda39
- (id)_subActionsForNotificationRequest:(id)arg1;	// IMP=0x00000000005dd7b0
- (id)_subActionLabelsForNotificationRequest:(id)arg1;	// IMP=0x00000000005dd4f2
- (_Bool)_notificationRequestShouldShowModalSubActions:(id)arg1;	// IMP=0x00000000005dd46b
- (_Bool)_notificationRequestSupportsSubActions:(id)arg1;	// IMP=0x00000000005dd3e5
- (id)_allNotificationActionsForNotificationRequest:(id)arg1;	// IMP=0x00000000005dd32a
- (id)_closeNotificationActionForNotificationRequest:(id)arg1;	// IMP=0x00000000005dd29c
- (id)_supplementaryActionsForNotificationRequest:(id)arg1;	// IMP=0x00000000005dd23f
- (CDUnknownBlockType)_ignoreActionForNotificationRequest:(id)arg1;	// IMP=0x00000000005dd0ea
- (CDUnknownBlockType)_actionForNotificationRequest:(id)arg1;	// IMP=0x00000000005dce59
- (long long)_effectiveDefaultActionTypeForNotificationRequest:(id)arg1;	// IMP=0x00000000005dce0a
- (long long)_defaultActionTypeForNotificationRequest:(id)arg1;	// IMP=0x00000000005dcc7a
- (id)_policyForApp:(id)arg1;	// IMP=0x00000000005dca92
- (id)_appPolicyEvaluator;	// IMP=0x00000000005dca41
- (id)_removePresentable:(id)arg1;	// IMP=0x00000000005dc984
- (id)_presentablesWithRequestIdentifier:(id)arg1;	// IMP=0x00000000005dc6c1
- (void)_addPresentable:(id)arg1;	// IMP=0x00000000005dc615
- (id)_newPresentableForNotificationRequest:(id)arg1 layoutDescription:(id)arg2;	// IMP=0x00000000005dc504
@property(readonly, nonatomic, getter=_carPlayBannerSource) NCCarPlayBannerSource *carPlayBannerSource; // @synthesize carPlayBannerSource=_carPlayBannerSource;
- (void)didCancelBannerOfPresentableViewController:(id)arg1 reason:(id)arg2;	// IMP=0x00000000005dc2dc
- (void)didSelectBannerOfPresentableViewController:(id)arg1;	// IMP=0x00000000005dbaaa
- (_Bool)presentableViewControllerClosesByDefault:(id)arg1;	// IMP=0x00000000005dba4f
- (void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2;	// IMP=0x00000000005db895
- (void)presentableWillAppearAsBanner:(id)arg1;	// IMP=0x00000000005db79f
- (void)bannerHostDidBecomeUnavailableForMonitorListener:(id)arg1;	// IMP=0x00000000005db723
- (void)bannerHostDidBecomeAvailableForMonitorListener:(id)arg1;	// IMP=0x00000000005db677
- (void)withdrawNotificationRequest:(id)arg1;	// IMP=0x00000000005db536
- (void)modifyNotificationRequest:(id)arg1;	// IMP=0x00000000005db374
- (void)_postNotificationRequest:(id)arg1 shouldAnnounce:(_Bool)arg2;	// IMP=0x00000000005db04b
- (void)postNotificationRequest:(id)arg1;	// IMP=0x00000000005daff3
- (_Bool)canReceiveNotificationRequest:(id)arg1;	// IMP=0x00000000005dafe1
@property(readonly, nonatomic) BSServiceConnectionEndpoint *endpoint;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic, getter=isAlertDestination) _Bool alertDestination;
- (id)keyWindowForScreen:(id)arg1;	// IMP=0x00000000005daf16
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)dealloc;	// IMP=0x00000000005dae8b
- (id)init;	// IMP=0x00000000005dad53

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

