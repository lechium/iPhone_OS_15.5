//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSHandoutAttachment.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSHandoutAttachment (ReportGeneration)
+ (id)payloadsForObject:(id)arg1 withSyncItem:(id)arg2 database:(id)arg3;	// IMP=0x001000000015f79f
+ (id)recordType;	// IMP=0x001000000015e253
+ (id)entityWillChangeNotificationName;	// IMP=0x0010000000175734
+ (id)entityDidInsertNotificationName;	// IMP=0x0010000000175727
+ (long long)migrationOrder;	// IMP=0x0010000000175490
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000175206
+ (id)hashableColumnNames;	// IMP=0x0010000000174609
+ (id)entityName;	// IMP=0x00100000001745fc
- (id)activityReportsForDescendantsOfContext:(id)arg1 inDatabase:(id)arg2 processedObjectCallback:(CDUnknownBlockType)arg3;	// IMP=0x00100000000aba82
- (id)activityReportForHandoutAssignedItemID:(id)arg1 inDatabase:(id)arg2 processedObjectCallback:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ab883
- (id)activityReportForContext:(id)arg1 inDatabase:(id)arg2 processedObjectCallback:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ab661
- (id)generateReportFromDataInDatabase:(id)arg1;	// IMP=0x00100000000aac90
- (void)updateAuthorizationInDatabase:(id)arg1;	// IMP=0x00100000000bec61
- (_Bool)writeInDatabase:(id)arg1;	// IMP=0x00100000000bebf4
- (_Bool)canCopyToDatabase:(id)arg1;	// IMP=0x00100000000beb4c
- (id)payloadsWithClassIDs:(id)arg1 dependencies:(id)arg2;	// IMP=0x001000000015fae0
- (long long)syncBackend:(id)arg1;	// IMP=0x001000000015f6e5
@property(readonly, nonatomic) NSString *parentReferenceName;
@property(readonly, nonatomic) long long syncableItemType;
- (long long)syncOrder;	// IMP=0x001000000015f6c5
- (void)populate:(id)arg1;	// IMP=0x001000000015e79f
- (id)initWithCKRecord:(id)arg1;	// IMP=0x001000000015e260
- (void)willBeDeletedFromDatabase:(id)arg1;	// IMP=0x001000000017549b
- (void)bindTo:(id)arg1;	// IMP=0x0010000000174c58
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x0010000000174728
@property(readonly, nonatomic) unsigned long long changeHash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end
