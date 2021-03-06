//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookDataStore/BCReadingNowDetail-Protocol.h>
#import <BookDataStore/NSSecureCoding-Protocol.h>

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableReadingNowDetail <BCReadingNowDetail, NSSecureCoding>
{
    _Bool _isTrackedAsRecent;	// 8 = 0x8
    NSString *_assetID;	// 16 = 0x10
    NSDate *_lastEngagedDate;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000049733
- (void).cxx_destruct;	// IMP=0x0000000000049952
@property(copy, nonatomic) NSDate *lastEngagedDate; // @synthesize lastEngagedDate=_lastEngagedDate;
@property(nonatomic) _Bool isTrackedAsRecent; // @synthesize isTrackedAsRecent=_isTrackedAsRecent;
@property(copy, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000497fa
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004973b
- (id)configuredRecordFromAttributes;	// IMP=0x0000000000049651
- (id)zoneName;	// IMP=0x000000000004963d
- (id)identifier;	// IMP=0x000000000004962b
- (id)recordType;	// IMP=0x000000000004961e
@property(readonly, copy) NSString *description;
- (id)initWithRecord:(id)arg1;	// IMP=0x000000000004940a
- (id)initWithCloudData:(id)arg1;	// IMP=0x0000000000049288
- (id)initWithAssetID:(id)arg1;	// IMP=0x00000000000491c6

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

