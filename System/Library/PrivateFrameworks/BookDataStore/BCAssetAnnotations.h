//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookDataStore/BCAssetAnnotations-Protocol.h>

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCAssetAnnotations <BCAssetAnnotations>
{
}

+ (id)propertyIDKey;	// IMP=0x00000000000240ee
@property(readonly, copy) NSString *debugDescription;
- (id)zoneName;	// IMP=0x00000000000240fb
- (id)identifier;	// IMP=0x00000000000240dc
- (id)recordType;	// IMP=0x00000000000240cf
- (void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2;	// IMP=0x0000000000023dcd
- (void)_mergeInAssetID:(id)arg1 assetVersion:(id)arg2 serializedData:(id)arg3;	// IMP=0x0000000000023363
- (void)_configureFromAssetAnnotations:(id)arg1 withMergers:(id)arg2;	// IMP=0x0000000000023249
- (_Bool)isEqualExceptForDate:(id)arg1;	// IMP=0x00000000000230b8
- (void)configureFromCloudData:(id)arg1 withMergers:(id)arg2;	// IMP=0x0000000000023013
- (id)mutableCopy;	// IMP=0x0000000000022fe5

// Remaining properties
@property(copy, nonatomic) NSString *assetID; // @dynamic assetID;
@property(copy, nonatomic) NSString *assetVersion; // @dynamic assetVersion;
@property(retain, nonatomic) NSData *bookAnnotations; // @dynamic bookAnnotations;
@property(readonly, copy, nonatomic) NSData *ckSystemFields;
@property(readonly, nonatomic) _Bool deletedFlag;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long editGeneration;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDate *modificationDate;
@property(nonatomic) __weak id <BCCloudDataPrivacyDelegate> privacyDelegate;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long syncGeneration;
@property(readonly, copy, nonatomic) CKRecord *systemFields;

@end

