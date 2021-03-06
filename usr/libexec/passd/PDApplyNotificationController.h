//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PDApplyManager, PDDatabaseManager, PDFamilyCircleManager, PDPaymentWebServiceCoordinator, PDUserNotificationManager, PKFamilyMemberCollection;
@protocol OS_dispatch_queue;

@interface PDApplyNotificationController : NSObject
{
    PDUserNotificationManager *_userNotificationManager;	// 8 = 0x8
    PDApplyManager *_applyManager;	// 16 = 0x10
    PDFamilyCircleManager *_familyMemberManager;	// 24 = 0x18
    PDDatabaseManager *_databaseManager;	// 32 = 0x20
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;	// 40 = 0x28
    PKFamilyMemberCollection *_familyMemberCollection;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
}

+ (id)_expiryReminderNotificationDateFromExpiryDate:(id)arg1;	// IMP=0x00200000002ad445
+ (id)_acceptReminderNotificationDate;	// IMP=0x00100000002ad38b
- (void).cxx_destruct;	// IMP=0x00200000002b1e02
- (void)_queue_loadFamilyMemberCollectionIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002b1c44
- (id)_customRouteForJointOfferWithAccountIdentifier:(id)arg1 invitationIdentifier:(id)arg2;	// IMP=0x00100000002b1bb6
- (id)_customRouteForInvitationWithIdentifier:(id)arg1;	// IMP=0x00100000002b1b3c
- (id)_customRouteForPassUniqueID:(id)arg1;	// IMP=0x00100000002b1ad3
- (void)_insertOrUpdateInvitationClosedNotificationForOldApplication:(id)arg1 newApplication:(id)arg2;	// IMP=0x00100000002b148d
- (void)_insertOrUpdateInvitationOfferDeclinedNotificationForOldApplication:(id)arg1 newApplication:(id)arg2;	// IMP=0x00100000002b0c6e
- (void)_insertOrUpdateInvitationOfferAcceptedNotificationForOldApplication:(id)arg1 newApplication:(id)arg2;	// IMP=0x00100000002b0527
- (void)_insertOrUpdateInvitationOfferReadyNotificationForOldApplication:(id)arg1 newApplication:(id)arg2;	// IMP=0x00100000002b0165
- (void)_insertOrUpdateInvitationReceivedNotificationForOldApplication:(id)arg1 newApplication:(id)arg2;	// IMP=0x00100000002afb1c
- (void)_insertOrUpdatePathToOfferCompletedNotificationForOldApplication:(id)arg1 newApplication:(id)arg2 localizationBundle:(id)arg3;	// IMP=0x00100000002afaa2
- (void)_insertOrUpdateFeatureApplicationClosedNotificationForOldApplication:(id)arg1 newApplication:(id)arg2 localizationBundle:(id)arg3;	// IMP=0x00100000002af9aa
- (void)_insertOrUpdateFeatureApplicationOpenNotificationsForOldApplication:(id)arg1 newApplication:(id)arg2 localizationBundle:(id)arg3;	// IMP=0x00100000002af735
- (void)_insertOrUpdateFeatureApplicationNewNotificationsForOldApplication:(id)arg1 newApplication:(id)arg2 localizationBundle:(id)arg3;	// IMP=0x00100000002af5f8
- (void)_insertOrUpdateFeatureApplicationTerminatedNotificationsForOldApplication:(id)arg1 newApplication:(id)arg2 localizationBundle:(id)arg3;	// IMP=0x00100000002aef7b
- (void)_insertOrUpdateFeatureApplicationWithdrawnNotificationsForOldApplication:(id)arg1 newApplication:(id)arg2 localizationBundle:(id)arg3;	// IMP=0x00100000002aed61
- (void)_insertOrUpdateFeatureApplicationAcceptedNotificationsForOldApplication:(id)arg1 newApplication:(id)arg2 localizationBundle:(id)arg3;	// IMP=0x00100000002aeaca
- (void)_insertOrUpdateFeatureApplicationPendingNotificationsForOldApplication:(id)arg1 newApplication:(id)arg2 localizationBundle:(id)arg3;	// IMP=0x00100000002ae8c2
- (void)_insertOrUpdateFeatureApplicationBookedNotificationsForOldApplication:(id)arg1 newApplication:(id)arg2 localizationBundle:(id)arg3;	// IMP=0x00100000002ae66e
- (void)_insertOrUpdateFeatureApplicationExpiredNotificationsForOldApplication:(id)arg1 newApplication:(id)arg2 localizationBundle:(id)arg3;	// IMP=0x00100000002ae48f
- (void)_insertOrUpdateFeatureApplicationApprovedNotificationsForOldApplication:(id)arg1 newApplication:(id)arg2 localizationBundle:(id)arg3;	// IMP=0x00100000002ade07
- (id)_cutomRouteForFeatureIdentifier:(unsigned long long)arg1;	// IMP=0x00100000002add88
- (void)familyCircleManagerDidUpdateFamilyMembers:(id)arg1;	// IMP=0x00100000002add20
- (void)_queue_notificationForNewApplication:(id)arg1 oldApplication:(id)arg2 localizationBundle:(id)arg3;	// IMP=0x00100000002ad913
- (void)notificationForNewApplication:(id)arg1 oldApplication:(id)arg2;	// IMP=0x00100000002ad6f3
- (void)_queue_removeAllNotificationsForApplicationIdentifier:(id)arg1;	// IMP=0x00100000002ad691
- (void)_queue_removeNonTerminalNotificationsForApplicationIdentifier:(id)arg1;	// IMP=0x00100000002ad5a8
- (id)_expiryReminderIdentifierForApplicationIdentifier:(id)arg1;	// IMP=0x00100000002ad420
- (id)_acceptReminderIdentifierForApplicationIdentifier:(id)arg1;	// IMP=0x00100000002ad366
- (id)_approvedIdentifierForApplicationIdentifier:(id)arg1;	// IMP=0x00100000002ad341
- (void)applyManager:(id)arg1 didRemoveApplication:(id)arg2;	// IMP=0x00100000002ad24d
- (void)applyManager:(id)arg1 didUpdateApplication:(id)arg2 oldApplication:(id)arg3;	// IMP=0x00100000002ad218
- (void)applyManager:(id)arg1 didAddApplication:(id)arg2;	// IMP=0x00100000002ad1e4
- (void)postApplyStateRequiresUserInteractionNotificationWithNewApplication:(id)arg1 oldApplication:(id)arg2;	// IMP=0x00100000002acdf9
- (id)initWithApplyManager:(id)arg1 databaseManager:(id)arg2 familyMemberManager:(id)arg3 userNotificationManager:(id)arg4 paymentWebServiceCoordinator:(id)arg5;	// IMP=0x00100000002acc88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

