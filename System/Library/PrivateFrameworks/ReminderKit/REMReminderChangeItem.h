//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMConflictResolving-Protocol.h>
#import <ReminderKit/REMExternalSyncMetadataWritableProviding-Protocol.h>
#import <ReminderKit/REMSaveRequestTrackedValue-Protocol.h>
#import <ReminderKit/REMSupportedVersionProviding-Protocol.h>
#import <ReminderKit/REMSupportedVersionUpdating-Protocol.h>

@class NSArray, NSAttributedString, NSData, NSDate, NSDateComponents, NSSet, NSString, NSURL, REMAccountCapabilities, REMCRMergeableStringDocument, REMChangedKeysObserver, REMContactRepresentation, REMDisplayDate, REMListChangeItem, REMObjectID, REMReminderAssignmentContextChangeItem, REMReminderAttachmentContextChangeItem, REMReminderFlaggedContextChangeItem, REMReminderHashtagContextChangeItem, REMReminderStorage, REMReminderSubtaskContextChangeItem, REMResolutionTokenMap, REMSaveRequest, REMUserActivity;

@interface REMReminderChangeItem : NSObject <REMConflictResolving, REMSaveRequestTrackedValue, REMExternalSyncMetadataWritableProviding, REMSupportedVersionProviding, REMSupportedVersionUpdating>
{
    REMSaveRequest *_saveRequest;	// 8 = 0x8
    REMReminderStorage *_storage;	// 16 = 0x10
    REMChangedKeysObserver *_changedKeysObserver;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x000000000000fc5f
+ (long long)hourForNextThirdsFromHour:(long long)arg1;	// IMP=0x000000000004f4a5
- (void).cxx_destruct;	// IMP=0x0000000000015775
@property(retain, nonatomic) REMChangedKeysObserver *changedKeysObserver; // @synthesize changedKeysObserver=_changedKeysObserver;
@property(retain, nonatomic) REMReminderStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) REMSaveRequest *saveRequest; // @synthesize saveRequest=_saveRequest;
- (_Bool)isUnsupported;	// IMP=0x00000000000156f1
- (id)resolutionTokenKeyForChangedKey:(id)arg1;	// IMP=0x0000000000015697
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x000000000001556f
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000154f7
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x0000000000015474
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000015462
- (id)changedKeys;	// IMP=0x0000000000015412
- (void)removeFromParentReminder;	// IMP=0x00000000000153f7
- (void)updateAccountCapabilities:(id)arg1;	// IMP=0x000000000001532d
- (id)removeFromParentReminderAllowingUndo;	// IMP=0x000000000001531b
- (void)removeFromList;	// IMP=0x0000000000015300
- (id)removeFromListAllowingUndo;	// IMP=0x0000000000015201
@property(readonly, nonatomic) REMReminderHashtagContextChangeItem *hashtagContext;
@property(readonly, nonatomic) REMReminderAssignmentContextChangeItem *assignmentContext;
@property(readonly, nonatomic) REMReminderFlaggedContextChangeItem *flaggedContext;
@property(readonly, nonatomic) REMReminderAttachmentContextChangeItem *attachmentContext;
@property(readonly, nonatomic) REMReminderSubtaskContextChangeItem *subtaskContext;
- (_Bool)isSubtask;	// IMP=0x0000000000014f45
- (void)updateDisplayDate;	// IMP=0x0000000000014f08
- (void)removeAllAlarms;	// IMP=0x0000000000014e80
- (void)removeAlarm:(id)arg1 updateDisplayDate:(_Bool)arg2;	// IMP=0x0000000000014d7c
- (void)removeAlarm:(id)arg1;	// IMP=0x0000000000014d65
- (void)setAlarms:(id)arg1 updateDisplayDate:(_Bool)arg2;	// IMP=0x0000000000014cae
- (void)setAlarms:(id)arg1;	// IMP=0x0000000000014c10
- (void)addAlarm:(id)arg1 updateDisplayDate:(_Bool)arg2;	// IMP=0x0000000000014a6f
- (void)addAlarm:(id)arg1;	// IMP=0x0000000000014a58
- (id)addAlarmWithTrigger:(id)arg1;	// IMP=0x0000000000014968
- (id)nextRecurrentDueDateComponentsAfter:(id)arg1;	// IMP=0x0000000000014762
- (double)nextRecurrentAdvanceAmountForDateComponents:(id)arg1 afterDate:(id)arg2;	// IMP=0x00000000000145ab
- (void)removeAllRecurrenceRules;	// IMP=0x00000000000144f1
- (void)removeRecurrenceRule:(id)arg1;	// IMP=0x00000000000143c0
- (void)insertRecurrenceRule:(id)arg1 afterRecurrenceRule:(id)arg2;	// IMP=0x0000000000014213
- (void)insertRecurrenceRule:(id)arg1 beforeRecurrenceRule:(id)arg2;	// IMP=0x000000000001407a
- (void)addRecurrenceRule:(id)arg1;	// IMP=0x0000000000014066
- (id)addRecurrenceRuleWithFrequency:(long long)arg1 interval:(long long)arg2 firstDayOfTheWeek:(long long)arg3 daysOfTheWeek:(id)arg4 daysOfTheMonth:(id)arg5 monthsOfTheYear:(id)arg6 weeksOfTheYear:(id)arg7 daysOfTheYear:(id)arg8 setPositions:(id)arg9 end:(id)arg10;	// IMP=0x0000000000013e90
- (id)addRecurrenceRuleWithFrequency:(long long)arg1 interval:(long long)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9;	// IMP=0x0000000000013e4d
- (id)addRecurrenceRuleWithFrequency:(long long)arg1 interval:(long long)arg2 end:(id)arg3;	// IMP=0x0000000000013d46
@property(nonatomic) unsigned long long icsDisplayOrder; // @dynamic icsDisplayOrder;
- (void)setDueDateComponentsWithAlarmsIfNeeded:(id)arg1;	// IMP=0x000000000001387c
@property(copy, nonatomic) NSDateComponents *dueDateComponents; // @dynamic dueDateComponents;
@property(copy, nonatomic) NSString *notesAsString;
@property(copy, nonatomic) NSAttributedString *notes;
@property(nonatomic, getter=isCompleted) _Bool completed; // @dynamic completed;
@property(copy, nonatomic) NSString *titleAsString;
@property(copy, nonatomic) NSAttributedString *title;
@property(retain, nonatomic) NSString *primaryLocaleInferredFromLastUsedKeyboard;
- (id)_editDocument:(id)arg1 replicaIDSource:(id)arg2 newString:(id)arg3;	// IMP=0x0000000000012ec2
@property(readonly, nonatomic) REMListChangeItem *listChangeItem;
- (id)shallowCopyWithSaveRequest:(id)arg1;	// IMP=0x0000000000012c72
- (id)dedupedAndFilteredNonSnoozeAlarms:(id)arg1;	// IMP=0x000000000001245a
- (void)_copyAlarmsInto:(id)arg1;	// IMP=0x0000000000011eed
- (void)copyInto:(id)arg1;	// IMP=0x0000000000010e4c
- (id)duplicateForRecurrenceUsingReminderID:(id)arg1;	// IMP=0x00000000000108f3
- (id)datesDebugDescriptionInTimeZone:(id)arg1;	// IMP=0x0000000000010870
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) REMAccountCapabilities *accountCapabilities; // @dynamic accountCapabilities;
- (id)initWithReminderChangeItem:(id)arg1 insertIntoParentReminderSubtaskContextChangeItem:(id)arg2;	// IMP=0x00000000000104e2
- (id)initWithReminderChangeItem:(id)arg1 insertIntoListChangeItem:(id)arg2;	// IMP=0x000000000001035d
- (id)initWithObjectID:(id)arg1 title:(id)arg2 insertIntoParentReminderSubtaskContextChangeItem:(id)arg3;	// IMP=0x00000000000100a8
- (id)initWithObjectID:(id)arg1 title:(id)arg2 insertIntoListChangeItem:(id)arg3;	// IMP=0x000000000000fec0
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 accountCapabilities:(id)arg3 observeInitialValues:(_Bool)arg4;	// IMP=0x000000000000fdf8
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 accountCapabilities:(id)arg3 changedKeysObserver:(id)arg4;	// IMP=0x000000000000fcda
- (void)rejectForSiriFoundInApps;	// IMP=0x0000000000015870
- (id)confirmForSiriFoundInAppsAppendingToList:(id)arg1;	// IMP=0x00000000000157a8
- (id)_cleanupOriginalAlarmsForSnoozing;	// IMP=0x000000000004f8da
- (void)_createSnoozeAlarmWithDateComponents:(id)arg1;	// IMP=0x000000000004f769
- (double)_timeIntervalToAddSinceStartDate:(id)arg1 withNow:(id)arg2 step:(double)arg3;	// IMP=0x000000000004f721
- (void)snoozeFromDueDateForFutureIntegralMultipleOfTimeInterval:(double)arg1;	// IMP=0x000000000004f50e
- (void)snoozeForever;	// IMP=0x000000000004f48a
- (void)snoozeToNextThirds;	// IMP=0x000000000004f380
- (void)snoozeToDate:(id)arg1;	// IMP=0x000000000004f2d7
- (void)snoozeFromNowForTimeInterval:(double)arg1;	// IMP=0x000000000004f24e
- (void)removeAllSnoozeAlarms;	// IMP=0x000000000004f06c

// Remaining properties
@property(retain, nonatomic) REMObjectID *accountID; // @dynamic accountID;
@property(readonly, nonatomic) NSArray *alarms; // @dynamic alarms;
@property(readonly, nonatomic) _Bool allDay; // @dynamic allDay;
@property(retain, nonatomic) NSSet *assignments; // @dynamic assignments;
@property(retain, nonatomic) NSArray *attachments; // @dynamic attachments;
@property(copy, nonatomic) NSDate *completionDate; // @dynamic completionDate;
@property(copy, nonatomic) REMContactRepresentation *contactHandles; // @dynamic contactHandles;
@property(copy, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(copy, nonatomic) NSString *daCalendarItemUniqueIdentifier; // @dynamic daCalendarItemUniqueIdentifier;
@property(copy, nonatomic) NSString *daPushKey; // @dynamic daPushKey;
@property(copy, nonatomic) NSString *daSyncToken; // @dynamic daSyncToken;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) REMDisplayDate *displayDate; // @dynamic displayDate;
@property(readonly, nonatomic) long long effectiveMinimumSupportedVersion; // @dynamic effectiveMinimumSupportedVersion;
@property(copy, nonatomic) NSString *externalIdentifier; // @dynamic externalIdentifier;
@property(copy, nonatomic) NSString *externalModificationTag; // @dynamic externalModificationTag;
@property(nonatomic) long long flagged; // @dynamic flagged;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSSet *hashtagIDsToUndelete; // @dynamic hashtagIDsToUndelete;
@property(retain, nonatomic) NSSet *hashtags; // @dynamic hashtags;
@property(copy, nonatomic) NSURL *icsUrl; // @dynamic icsUrl;
@property(retain, nonatomic) NSData *importedICSData; // @dynamic importedICSData;
@property(readonly, nonatomic) _Bool isOverdue; // @dynamic isOverdue;
@property(readonly, nonatomic) _Bool isRecurrent; // @dynamic isRecurrent;
@property(copy, nonatomic) NSDate *lastBannerPresentationDate; // @dynamic lastBannerPresentationDate;
@property(copy, nonatomic) NSDate *lastModifiedDate; // @dynamic lastModifiedDate;
@property(readonly, copy, nonatomic) NSString *legacyNotificationIdentifier; // @dynamic legacyNotificationIdentifier;
@property(retain, nonatomic) REMObjectID *listID; // @dynamic listID;
@property(readonly, nonatomic) long long minimumSupportedVersion; // @dynamic minimumSupportedVersion;
@property(retain, nonatomic) REMCRMergeableStringDocument *notesDocument; // @dynamic notesDocument;
@property(retain, nonatomic) NSData *notesDocumentData; // @dynamic notesDocumentData;
@property(retain, nonatomic) REMObjectID *objectID; // @dynamic objectID;
@property(retain, nonatomic) REMObjectID *parentReminderID; // @dynamic parentReminderID;
@property(nonatomic) unsigned long long priority; // @dynamic priority;
@property(retain, nonatomic) NSArray *recurrenceRules; // @dynamic recurrenceRules;
@property(readonly, nonatomic) REMObjectID *remObjectID; // @dynamic remObjectID;
@property(retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap; // @dynamic resolutionTokenMap;
@property(retain, nonatomic) NSData *resolutionTokenMapData; // @dynamic resolutionTokenMapData;
@property(copy, nonatomic) NSData *siriFoundInAppsData; // @dynamic siriFoundInAppsData;
@property(nonatomic) long long siriFoundInAppsUserConfirmation; // @dynamic siriFoundInAppsUserConfirmation;
@property(copy, nonatomic) NSDateComponents *startDateComponents; // @dynamic startDateComponents;
@property(retain, nonatomic) NSSet *subtaskIDsToUndelete; // @dynamic subtaskIDsToUndelete;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *timeZone; // @dynamic timeZone;
@property(retain, nonatomic) REMCRMergeableStringDocument *titleDocument; // @dynamic titleDocument;
@property(retain, nonatomic) NSData *titleDocumentData; // @dynamic titleDocumentData;
@property(copy, nonatomic) REMUserActivity *userActivity; // @dynamic userActivity;

@end

