//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSMultipleChoiceAnswerItem.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSMultipleChoiceAnswerItem (PDDevEndpointServer)
+ (long long)migrationOrder;	// IMP=0x00100000000c4ed6
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000c4d45
+ (id)entityName;	// IMP=0x00100000000c4a8a
+ (id)payloadsForObject:(id)arg1 withSyncItem:(id)arg2 database:(id)arg3;	// IMP=0x001000000018a4ec
+ (id)recordType;	// IMP=0x001000000018a231
- (_Bool)canCopyToDatabase:(id)arg1;	// IMP=0x00200000000bf04f
- (void)willBeDeletedFromDatabase:(id)arg1;	// IMP=0x00100000000c4dff
- (void)bindTo:(id)arg1;	// IMP=0x00100000000c4bb5
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x00100000000c4a97
@property(readonly, nonatomic) NSString *parentReferenceName;
@property(readonly, nonatomic) long long syncableItemType;
- (long long)syncOrder;	// IMP=0x001000000018a4cc
- (long long)syncBackend:(id)arg1;	// IMP=0x001000000018a412
- (void)populate:(id)arg1;	// IMP=0x001000000018a317
- (id)initWithCKRecord:(id)arg1;	// IMP=0x001000000018a23e

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end

