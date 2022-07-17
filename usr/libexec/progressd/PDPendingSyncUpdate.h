//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecord, NSString;
@protocol PDDatabaseValue;

@interface PDPendingSyncUpdate : NSObject
{
    NSString *_parentRecordID;	// 8 = 0x8
    NSString *_recordID;	// 16 = 0x10
    CKRecord *_record;	// 24 = 0x18
}

+ (id)identityColumnName;	// IMP=0x00200000000f1748
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000f168e
+ (id)entityName;	// IMP=0x00100000000f145d
- (void).cxx_destruct;	// IMP=0x00200000000f17ae
@property(copy, nonatomic) CKRecord *record; // @synthesize record=_record;
@property(copy, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(copy, nonatomic) NSString *parentRecordID; // @synthesize parentRecordID=_parentRecordID;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
- (void)bindTo:(id)arg1;	// IMP=0x00100000000f1592
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x00100000000f146a

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
