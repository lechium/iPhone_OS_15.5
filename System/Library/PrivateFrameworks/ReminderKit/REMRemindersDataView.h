//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class REMStore;

@interface REMRemindersDataView : NSObject
{
    REMStore *_store;	// 8 = 0x8
}

+ (id)remindersFromAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 store:(id)arg4 showMarkedForDeleteObjects:(_Bool)arg5;	// IMP=0x000000000005cf52
+ (id)remindersFromAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 store:(id)arg4;	// IMP=0x000000000005cf30
+ (id)remindersFromAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 store:(id)arg4 requestedStringIdentifiers:(id)arg5 identifierSelector:(SEL)arg6;	// IMP=0x000000000005cb2f
+ (id)remindersFromAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 store:(id)arg4 requestedReminderIDs:(id)arg5;	// IMP=0x000000000005c8f5
- (void).cxx_destruct;	// IMP=0x000000000005da66
@property(readonly, nonatomic) REMStore *store; // @synthesize store=_store;
- (id)fetchRemindersWithDACalendarItemUniqueIdentifiers:(id)arg1 inList:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005c501
- (id)fetchReminderWithDACalendarItemUniqueIdentifier:(id)arg1 inList:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005c370
- (id)fetchAllRemindersWithExternalIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005c081
- (id)fetchRemindersWithExternalIdentifiers:(id)arg1 inList:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005bc8d
- (id)fetchReminderWithExternalIdentifier:(id)arg1 inList:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005bab8
- (id)fetchRemindersCountWithParentReminderID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005b917
- (id)fetchRemindersCountWithListID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005b776
- (id)fetchRemindersWithObjectIDs:(id)arg1 includeConcealed:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000005b32c
- (id)fetchObjectIDsOfRemindersWithParentReminderID:(id)arg1 includeIncomplete:(_Bool)arg2 includeCompleted:(_Bool)arg3 isUnsupported:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000005b215
- (id)fetchRemindersWithParentReminderIDs:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005b04d
- (id)fetchRemindersMatchingPredicateDescriptor:(id)arg1 sortDescriptors:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x000000000005ae4a
- (id)fetchRemindersIncludingUnsupportedWithObjectIDs:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005ae30
- (id)fetchRemindersWithObjectIDs:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005ae19
- (id)fetchReminderIncludingConcealedWithObjectID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005acac
- (id)fetchReminderWithObjectID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005ab44
- (id)fetchRemindersWithParentReminderID:(id)arg1 includeUnsupported:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000005a974
- (id)fetchRemindersWithListID:(id)arg1 includingSubtasks:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000005a7a4
- (id)initWithStore:(id)arg1;	// IMP=0x000000000005a739

@end
