//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookDataStore/BCReadingNowDetail-Protocol.h>

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCReadingNowDetail <BCReadingNowDetail>
{
}

+ (id)propertyIDKey;	// IMP=0x00000000000490e5
@property(readonly, copy) NSString *debugDescription;
- (id)zoneName;	// IMP=0x00000000000490f2
- (id)identifier;	// IMP=0x00000000000490d3
- (id)recordType;	// IMP=0x00000000000490c6
- (void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2;	// IMP=0x0000000000048c5e
- (_Bool)isEqualExceptForDate:(id)arg1;	// IMP=0x0000000000048a96
- (void)_configureFromReadingNowDetail:(id)arg1 withMergers:(id)arg2;	// IMP=0x000000000004896e
- (void)configureFromCloudData:(id)arg1 withMergers:(id)arg2;	// IMP=0x00000000000488c9
- (id)mutableCopy;	// IMP=0x000000000004889b

// Remaining properties
@property(copy, nonatomic) NSString *assetID; // @dynamic assetID;
@property(readonly, copy, nonatomic) NSData *ckSystemFields;
@property(readonly, nonatomic) _Bool deletedFlag;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long editGeneration;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isTrackedAsRecent; // @dynamic isTrackedAsRecent;
@property(copy, nonatomic) NSDate *lastEngagedDate; // @dynamic lastEngagedDate;
@property(readonly, copy, nonatomic) NSDate *modificationDate;
@property(nonatomic) __weak id <BCCloudDataPrivacyDelegate> privacyDelegate;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long syncGeneration;
@property(readonly, copy, nonatomic) CKRecord *systemFields;

@end
