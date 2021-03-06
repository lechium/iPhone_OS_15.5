//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookDataStore/BCAssetReview-Protocol.h>
#import <BookDataStore/NSSecureCoding-Protocol.h>

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableAssetReview <BCAssetReview, NSSecureCoding>
{
    short _starRating;	// 8 = 0x8
    NSString *_assetReviewID;	// 16 = 0x10
    NSString *_reviewTitle;	// 24 = 0x18
    NSString *_reviewBody;	// 32 = 0x20
    NSString *_userID;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000196dc
- (void).cxx_destruct;	// IMP=0x00000000000199bb
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *reviewBody; // @synthesize reviewBody=_reviewBody;
@property(copy, nonatomic) NSString *reviewTitle; // @synthesize reviewTitle=_reviewTitle;
@property(nonatomic) short starRating; // @synthesize starRating=_starRating;
@property(copy, nonatomic) NSString *assetReviewID; // @synthesize assetReviewID=_assetReviewID;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000197dc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000196e4
- (id)configuredRecordFromAttributes;	// IMP=0x00000000000195c5
- (id)zoneName;	// IMP=0x00000000000195b1
@property(nonatomic) double normalizedStarRating;
- (id)identifier;	// IMP=0x00000000000194bc
- (id)recordType;	// IMP=0x00000000000194af
@property(readonly, copy) NSString *description;
- (id)initWithRecord:(id)arg1;	// IMP=0x0000000000019253
- (id)initWithCloudData:(id)arg1;	// IMP=0x0000000000019086
- (id)initWithAssetReviewID:(id)arg1;	// IMP=0x0000000000018fc4

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

