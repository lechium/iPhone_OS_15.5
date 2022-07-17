//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol SecCKKSKeyClass;

__attribute__((visibility("hidden")))
@interface CKKSCurrentKeyPointer
{
    NSString<SecCKKSKeyClass> *_keyclass;	// 8 = 0x8
    NSString *_currentKeyUUID;	// 16 = 0x10
}

+ (_Bool)intransactionRecordDeleted:(id)arg1 error:(id *)arg2;	// IMP=0x00400000000a4635
+ (_Bool)intransactionRecordChanged:(id)arg1 resync:(_Bool)arg2 flagHandler:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000a3e8e
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x00100000000a3cd6
+ (id)sqlColumns;	// IMP=0x00100000000a3cc9
+ (id)sqlTable;	// IMP=0x00100000000a3cbc
+ (_Bool)deleteAll:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a3ba6
+ (id)all:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a3acc
+ (id)forKeyClass:(id)arg1 withKeyUUID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000a399c
+ (id)tryFromDatabase:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a388f
+ (id)fromDatabase:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a3782
- (void).cxx_destruct;	// IMP=0x00200000000a3751
@property(retain) NSString *currentKeyUUID; // @synthesize currentKeyUUID=_currentKeyUUID;
@property(retain) NSString<SecCKKSKeyClass> *keyclass; // @synthesize keyclass=_keyclass;
- (id)sqlValues;	// IMP=0x00100000000a34df
- (id)whereClauseToFindSelf;	// IMP=0x00100000000a33db
- (void)setFromCKRecord:(id)arg1;	// IMP=0x00100000000a3120
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x00100000000a2f71
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x00100000000a2c3a
- (id)CKRecordName;	// IMP=0x00100000000a2c28
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a2967
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a2872
- (id)description;	// IMP=0x00100000000a2795
- (id)initForClass:(id)arg1 currentKeyUUID:(id)arg2 zoneID:(id)arg3 encodedCKRecord:(id)arg4;	// IMP=0x00100000000a2648

@end
