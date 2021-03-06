//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PDAttachmentUpdatedNotificationTrigger, PDDatabase, PDHandoutAssignedNotificationTrigger, PDHandoutCompletedNotificationTrigger, PDHandoutDueSoonNotificationTrigger, PDHandoutPastDueSummaryNotificationTrigger, PDReviewDueHandoutsNotificationTrigger, PDRevisedSubmissionNotificationTrigger, PDRevisionRequestedNotificationTrigger, UNUserNotificationCenter;

@interface PDUserNotificationManager : NSObject
{
    int _accountChangeToken;	// 8 = 0x8
    PDHandoutAssignedNotificationTrigger *_handoutAssignedTrigger;	// 16 = 0x10
    PDAttachmentUpdatedNotificationTrigger *_attachmentUpdatedTrigger;	// 24 = 0x18
    PDHandoutDueSoonNotificationTrigger *_handoutDueSoonTrigger;	// 32 = 0x20
    PDHandoutPastDueSummaryNotificationTrigger *_handoutPastDueTrigger;	// 40 = 0x28
    PDReviewDueHandoutsNotificationTrigger *_reviewDueHandoutsTrigger;	// 48 = 0x30
    PDRevisedSubmissionNotificationTrigger *_revisedSubmissionTrigger;	// 56 = 0x38
    PDHandoutCompletedNotificationTrigger *_handoutCompletedTrigger;	// 64 = 0x40
    PDRevisionRequestedNotificationTrigger *_revisionNeededTrigger;	// 72 = 0x48
    PDDatabase *_database;	// 80 = 0x50
    UNUserNotificationCenter *_userNotificationCenter;	// 88 = 0x58
}

+ (id)dateSettingNameForNotificationType:(long long)arg1;	// IMP=0x0020000000118cf1
+ (id)disabledSettingNameForNotificationType:(long long)arg1;	// IMP=0x0010000000118c8d
+ (id)settingNameSuffixForNotificationType:(long long)arg1;	// IMP=0x0010000000118b0f
- (void).cxx_destruct;	// IMP=0x002000000011ad18
@property(nonatomic) int accountChangeToken; // @synthesize accountChangeToken=_accountChangeToken;
@property(retain, nonatomic) UNUserNotificationCenter *userNotificationCenter; // @synthesize userNotificationCenter=_userNotificationCenter;
@property(retain, nonatomic) PDDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) PDRevisionRequestedNotificationTrigger *revisionNeededTrigger; // @synthesize revisionNeededTrigger=_revisionNeededTrigger;
@property(retain, nonatomic) PDHandoutCompletedNotificationTrigger *handoutCompletedTrigger; // @synthesize handoutCompletedTrigger=_handoutCompletedTrigger;
@property(retain, nonatomic) PDRevisedSubmissionNotificationTrigger *revisedSubmissionTrigger; // @synthesize revisedSubmissionTrigger=_revisedSubmissionTrigger;
@property(retain, nonatomic) PDReviewDueHandoutsNotificationTrigger *reviewDueHandoutsTrigger; // @synthesize reviewDueHandoutsTrigger=_reviewDueHandoutsTrigger;
@property(retain, nonatomic) PDHandoutPastDueSummaryNotificationTrigger *handoutPastDueTrigger; // @synthesize handoutPastDueTrigger=_handoutPastDueTrigger;
@property(retain, nonatomic) PDHandoutDueSoonNotificationTrigger *handoutDueSoonTrigger; // @synthesize handoutDueSoonTrigger=_handoutDueSoonTrigger;
@property(retain, nonatomic) PDAttachmentUpdatedNotificationTrigger *attachmentUpdatedTrigger; // @synthesize attachmentUpdatedTrigger=_attachmentUpdatedTrigger;
@property(retain, nonatomic) PDHandoutAssignedNotificationTrigger *handoutAssignedTrigger; // @synthesize handoutAssignedTrigger=_handoutAssignedTrigger;
- (void)triggerDidFire:(id)arg1 notificationData:(id)arg2;	// IMP=0x001000000011aad8
- (void)_scheduleWithNotificationData:(id)arg1;	// IMP=0x001000000011a5e6
- (void)registerForAccountChangedDarwinNotification;	// IMP=0x001000000011a38a
- (void)clearTriggers;	// IMP=0x001000000011a182
- (void)resetTriggers;	// IMP=0x0010000000118d9e
- (void)invalidate;	// IMP=0x0010000000118d55
- (void)registerForNotifications;	// IMP=0x0010000000118ae1
- (void)dealloc;	// IMP=0x0010000000118aa3
- (id)initWithDatabase:(id)arg1;	// IMP=0x0010000000118a00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

