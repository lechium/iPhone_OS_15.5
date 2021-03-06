//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NFUnfairLock, NSArray, NSString;

@interface FCArticleRecordSource
{
    NFUnfairLock *_experimentalFieldsLock;	// 8 = 0x8
    unsigned long long _desiredArticleRecordFieldOptions;	// 16 = 0x10
    NSString *_engagementCohortsExpField;	// 24 = 0x18
    NSString *_conversionCohortsExpField;	// 32 = 0x20
    NSArray *_engagementRecordKeys;	// 40 = 0x28
    NSArray *_conversionRecordKeys;	// 48 = 0x30
    NSArray *_topicFlagsRecordKeys;	// 56 = 0x38
    NSArray *_articleTagMetadataRecordKeys;	// 64 = 0x40
}

+ (id)canaryRecordName;	// IMP=0x0000000000137895
+ (_Bool)supportsDeletions;	// IMP=0x000000000013788d
+ (id)modificationDateFromCKRecord:(id)arg1;	// IMP=0x0000000000135e7a
+ (id)changeTagFromCKRecord:(id)arg1;	// IMP=0x0000000000135da9
+ (id)identifierFromCKRecord:(id)arg1;	// IMP=0x0000000000135cd8
+ (_Bool)useTaggedImages;	// IMP=0x0000000000133df1
- (void).cxx_destruct;	// IMP=0x0000000000137a18
@property(retain, nonatomic) NSArray *articleTagMetadataRecordKeys; // @synthesize articleTagMetadataRecordKeys=_articleTagMetadataRecordKeys;
@property(retain, nonatomic) NSArray *topicFlagsRecordKeys; // @synthesize topicFlagsRecordKeys=_topicFlagsRecordKeys;
@property(retain, nonatomic) NSArray *conversionRecordKeys; // @synthesize conversionRecordKeys=_conversionRecordKeys;
@property(retain, nonatomic) NSArray *engagementRecordKeys; // @synthesize engagementRecordKeys=_engagementRecordKeys;
@property(retain, nonatomic) NSString *conversionCohortsExpField; // @synthesize conversionCohortsExpField=_conversionCohortsExpField;
@property(retain, nonatomic) NSString *engagementCohortsExpField; // @synthesize engagementCohortsExpField=_engagementCohortsExpField;
@property(nonatomic) unsigned long long desiredArticleRecordFieldOptions; // @synthesize desiredArticleRecordFieldOptions=_desiredArticleRecordFieldOptions;
@property(retain, nonatomic) NFUnfairLock *experimentalFieldsLock; // @synthesize experimentalFieldsLock=_experimentalFieldsLock;
- (void)updateEngagementCohortsExpField:(id)arg1 conversionCohortsExpField:(id)arg2;	// IMP=0x00000000001378f9
- (id)saveFeedItemAndArticleRecords:(id)arg1;	// IMP=0x00000000001378e7
- (id)saveArticleRecords:(id)arg1;	// IMP=0x00000000001378a9
- (id)conversionStatsFromCKRecord:(id)arg1;	// IMP=0x0000000000137698
- (id)engagementFromCKRecord:(id)arg1;	// IMP=0x00000000001374a3
- (id)articleTopicsFromCKRecord:(id)arg1 engagement:(id)arg2 conversionStats:(id)arg3 tagMetadata:(id)arg4;	// IMP=0x0000000000136821
- (id)articleTagMetadataFromCKRecord:(id)arg1;	// IMP=0x000000000013662c
- (id)topicFlagsFromCKRecord:(id)arg1;	// IMP=0x000000000013621f
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;	// IMP=0x0000000000133f0c
- (id)urlStringForThumbnailKey:(id)arg1 inRecord:(id)arg2;	// IMP=0x0000000000133dfb
- (id)recordIDPrefixes;	// IMP=0x0000000000133de4
- (unsigned long long)highThresholdDataSizeLimit;	// IMP=0x0000000000133dd9
- (unsigned long long)lowThresholdDataSizeLimit;	// IMP=0x0000000000133dce
- (unsigned long long)storeVersion;	// IMP=0x0000000000133dc3
- (id)storeFilename;	// IMP=0x0000000000133db6
- (id)localizableExperimentalizableKeys;	// IMP=0x0000000000133d32
- (id)experimentalizableKeys;	// IMP=0x0000000000133cae
- (id)alwaysLocalizedKeys;	// IMP=0x0000000000133c94
- (id)localizableKeys;	// IMP=0x0000000000133c76
- (id)nonLocalizableKeys;	// IMP=0x0000000000133be8
- (int)pbRecordType;	// IMP=0x0000000000133bdd
- (id)recordType;	// IMP=0x0000000000133bc9
- (void)_setEngagementCohortsExpField:(id)arg1 conversionCohortsExpField:(id)arg2;	// IMP=0x0000000000133829
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 appActivityMonitor:(id)arg3 backgroundTaskable:(id)arg4 desiredArticleRecordFieldOptions:(unsigned long long)arg5 experimentalizableFieldsPostfix:(id)arg6 engagementCohortsExpField:(id)arg7 conversionCohortsExpField:(id)arg8 activeTreatmentID:(id)arg9;	// IMP=0x00000000001334f3
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 appActivityMonitor:(id)arg3 backgroundTaskable:(id)arg4 experimentalizableFieldsPostfix:(id)arg5 activeTreatmentID:(id)arg6;	// IMP=0x0000000000133373

@end

