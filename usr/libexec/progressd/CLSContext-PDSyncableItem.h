//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSContext.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSContext (PDSyncableItem)
+ (id)recordType;	// IMP=0x002000000010eee7
+ (long long)migrationOrder;	// IMP=0x0010000000161def
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000160d33
+ (id)entityName;	// IMP=0x001000000015ff70
@property(readonly, nonatomic) NSString *parentReferenceName;
@property(readonly, nonatomic) long long syncableItemType;
- (long long)syncOrder;	// IMP=0x001000000010ffc4
- (void)populate:(id)arg1;	// IMP=0x001000000010f9bc
- (_Bool)shouldInsertInDatabase:(id)arg1;	// IMP=0x001000000010f8ed
- (id)initWithCKRecord:(id)arg1;	// IMP=0x001000000010f23f
- (void)futureProofedInitObjectIDFromCKRecord:(id)arg1;	// IMP=0x001000000010eef4
- (void)willBeDeletedFromDatabase:(id)arg1;	// IMP=0x0010000000161dfa
@property(readonly, nonatomic) unsigned long long changeHash;
- (void)bindTo:(id)arg1;	// IMP=0x0010000000160592
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x001000000015ff7d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end
