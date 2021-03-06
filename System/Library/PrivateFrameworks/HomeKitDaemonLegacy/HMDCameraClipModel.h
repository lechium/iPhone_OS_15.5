//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class HMBStreamingAsset, NSArray, NSData, NSDate, NSNumber, NSString;

@interface HMDCameraClipModel : HMBModel
{
}

+ (id)qualityPredicate;	// IMP=0x0000000000aab9c2
+ (id)countOfClipsWithQualityBetweenDatesQuery;	// IMP=0x0000000000aab95f
+ (id)clipsWithQualityBetweenDatesDescendingQuery;	// IMP=0x0000000000aab8fc
+ (id)clipsWithQualityBetweenDatesAscendingQuery;	// IMP=0x0000000000aab899
+ (id)clipsBeforeDateQuery;	// IMP=0x0000000000aab869
+ (id)clipsWithNeedsUploadFeedbackStatusQuery;	// IMP=0x0000000000aab839
+ (id)incompleteClipsQuery;	// IMP=0x0000000000aab809
+ (id)sentinelParentUUID;	// IMP=0x0000000000aab7d9
+ (id)hmbQueries;	// IMP=0x0000000000aab687
+ (id)hmbExternalRecordType;	// IMP=0x0000000000aab67a
+ (id)hmbProperties;	// IMP=0x0000000000aab64a
@property long long quality;
@property unsigned long long feedbackStatus;
- (id)createClipWithSignificantEvents:(id)arg1;	// IMP=0x0000000000aaca48

// Remaining properties
@property(retain, nonatomic) NSNumber *duration; // @dynamic duration;
@property(retain, nonatomic) NSData *encryptionKey; // @dynamic encryptionKey;
@property(retain, nonatomic) NSNumber *encryptionScheme; // @dynamic encryptionScheme;
@property(retain, nonatomic) NSNumber *feedbackStatusField; // @dynamic feedbackStatusField;
@property(retain, nonatomic) NSNumber *isComplete; // @dynamic isComplete;
@property(retain, nonatomic) NSNumber *maximumClipDuration; // @dynamic maximumClipDuration;
@property(retain, nonatomic) NSNumber *qualityField; // @dynamic qualityField;
@property(retain, nonatomic) NSNumber *recordedLocally; // @dynamic recordedLocally;
@property(retain, nonatomic) NSDate *startDate; // @dynamic startDate;
@property(retain, nonatomic) NSString *streamingAssetVersion; // @dynamic streamingAssetVersion;
@property(retain, nonatomic) NSNumber *targetFragmentDuration; // @dynamic targetFragmentDuration;
@property(retain, nonatomic) NSArray *videoMetadata; // @dynamic videoMetadata;
@property(retain, nonatomic) NSArray *videoMetadataArray; // @dynamic videoMetadataArray;
@property(retain, nonatomic) HMBStreamingAsset *videoStreamingAsset; // @dynamic videoStreamingAsset;

@end

