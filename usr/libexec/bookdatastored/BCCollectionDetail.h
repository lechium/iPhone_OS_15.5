//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCCollectionDetail
{
}

+ (id)propertyIDKey;	// IMP=0x002000000005a580
@property(readonly, copy) NSString *debugDescription;
- (id)zoneName;	// IMP=0x001000000005a58d
- (id)identifier;	// IMP=0x001000000005a56e
- (id)recordType;	// IMP=0x001000000005a561
- (void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2;	// IMP=0x0010000000059f68
- (void)_configureFromCollectionDetail:(id)arg1 withMergers:(id)arg2;	// IMP=0x0010000000059d27
- (_Bool)isEqualExceptForDate:(id)arg1;	// IMP=0x0010000000059a95
- (void)configureFromCloudData:(id)arg1 withMergers:(id)arg2;	// IMP=0x00100000000599f0
- (id)mutableCopy;	// IMP=0x00100000000599c2

// Remaining properties
@property(readonly, copy, nonatomic) NSData *ckSystemFields;
@property(copy, nonatomic) NSString *collectionDescription; // @dynamic collectionDescription;
@property(copy, nonatomic) NSString *collectionID; // @dynamic collectionID;
@property(readonly, nonatomic) _Bool deletedFlag;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long editGeneration;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hidden; // @dynamic hidden;
@property(readonly, copy, nonatomic) NSDate *modificationDate;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) __weak id <BCCloudDataPrivacyDelegate> privacyDelegate;
@property(nonatomic) int sortMode; // @dynamic sortMode;
@property(nonatomic) int sortOrder; // @dynamic sortOrder;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long syncGeneration;
@property(readonly, copy, nonatomic) CKRecord *systemFields;

@end
