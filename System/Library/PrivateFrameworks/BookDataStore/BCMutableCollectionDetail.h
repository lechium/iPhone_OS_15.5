//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookDataStore/BCCollectionDetail-Protocol.h>
#import <BookDataStore/NSSecureCoding-Protocol.h>

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableCollectionDetail <BCCollectionDetail, NSSecureCoding>
{
    _Bool _hidden;	// 8 = 0x8
    int _sortOrder;	// 12 = 0xc
    int _sortMode;	// 16 = 0x10
    NSString *_collectionID;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_collectionDescription;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000102b7
- (void).cxx_destruct;	// IMP=0x0000000000010631
@property(nonatomic) int sortMode; // @synthesize sortMode=_sortMode;
@property(nonatomic) int sortOrder; // @synthesize sortOrder=_sortOrder;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(copy, nonatomic) NSString *collectionDescription; // @synthesize collectionDescription=_collectionDescription;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *collectionID; // @synthesize collectionID=_collectionID;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000103fc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000102bf
- (id)configuredRecordFromAttributes;	// IMP=0x0000000000010090
- (id)zoneName;	// IMP=0x000000000001007c
- (id)identifier;	// IMP=0x000000000001006a
- (id)recordType;	// IMP=0x000000000001005d
@property(readonly, copy) NSString *description;
- (id)initWithRecord:(id)arg1;	// IMP=0x000000000000fd45
- (id)initWithCloudData:(id)arg1;	// IMP=0x000000000000fb04
- (id)initWithCollectionID:(id)arg1;	// IMP=0x000000000000fa42

// Remaining properties
@property(readonly, copy, nonatomic) NSData *ckSystemFields;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) _Bool deletedFlag;
@property(readonly, nonatomic) long long editGeneration;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDate *modificationDate;
@property(nonatomic) __weak id <BCCloudDataPrivacyDelegate> privacyDelegate;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long syncGeneration;
@property(readonly, copy, nonatomic) CKRecord *systemFields;

@end

