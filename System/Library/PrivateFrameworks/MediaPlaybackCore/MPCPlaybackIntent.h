//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackSharedListeningProperties, NSData, NSDictionary, NSString;
@protocol MPCPlaybackIntentDataSource, NSSecureCoding;

@interface MPCPlaybackIntent : NSObject
{
    id <MPCPlaybackIntentDataSource> _resolvedTracklistDataSource;	// 8 = 0x8
    _Bool _prefersEnqueuingUsingAirPlay;	// 16 = 0x10
    NSString *_localizedTitle;	// 24 = 0x18
    NSDictionary *_startTimeModifications;	// 32 = 0x20
    NSDictionary *_endTimeModifications;	// 40 = 0x28
    long long _tracklistSource;	// 48 = 0x30
    id <NSSecureCoding> _tracklistToken;	// 56 = 0x38
    long long _actionAfterQueueLoad;	// 64 = 0x40
    long long _shuffleMode;	// 72 = 0x48
    long long _repeatMode;	// 80 = 0x50
    NSString *_queueGroupingID;	// 88 = 0x58
    NSString *_playActivityFeatureName;	// 96 = 0x60
    NSData *_playActivityRecommendationData;	// 104 = 0x68
    NSString *_siriAssetInfo;	// 112 = 0x70
    NSString *_siriReferenceIdentifier;	// 120 = 0x78
}

+ (id)tracklistDataSourceForSource:(long long)arg1;	// IMP=0x000000000009116e
+ (id)sharedSessionIntentWithProperties:(id)arg1 identity:(id)arg2;	// IMP=0x00000000000910ab
+ (void)buildSharedSessionIntentWithIntent:(id)arg1 identity:(id)arg2 extendedStatusCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000091021
+ (id)radioPlaybackIntentWithStationURL:(id)arg1;	// IMP=0x0000000000090f8d
+ (id)radioPlaybackIntentWithStationStringID:(id)arg1;	// IMP=0x0000000000090e20
+ (id)radioPlaybackIntentWithStation:(id)arg1;	// IMP=0x0000000000090d8c
+ (id)radioPlaybackIntentFromSong:(id)arg1;	// IMP=0x0000000000090d26
+ (id)radioPlaybackIntentFromArtist:(id)arg1;	// IMP=0x0000000000090cc0
+ (id)radioPlaybackIntentFromAlbum:(id)arg1;	// IMP=0x0000000000090c5a
+ (id)radioPlaybackIntentFromReference:(id)arg1;	// IMP=0x0000000000090bc6
+ (id)continueListeningRadioPlaybackIntent;	// IMP=0x0000000000090b34
+ (id)intentFromQueueDescriptor:(id)arg1;	// IMP=0x0000000000090ac8
- (void).cxx_destruct;	// IMP=0x000000000008e0f1
@property(copy, nonatomic) NSString *siriReferenceIdentifier; // @synthesize siriReferenceIdentifier=_siriReferenceIdentifier;
@property(copy, nonatomic) NSString *siriAssetInfo; // @synthesize siriAssetInfo=_siriAssetInfo;
@property(copy, nonatomic) NSData *playActivityRecommendationData; // @synthesize playActivityRecommendationData=_playActivityRecommendationData;
@property(copy, nonatomic) NSString *playActivityFeatureName; // @synthesize playActivityFeatureName=_playActivityFeatureName;
@property(copy, nonatomic) NSString *queueGroupingID; // @synthesize queueGroupingID=_queueGroupingID;
@property(nonatomic) _Bool prefersEnqueuingUsingAirPlay; // @synthesize prefersEnqueuingUsingAirPlay=_prefersEnqueuingUsingAirPlay;
@property(nonatomic) long long repeatMode; // @synthesize repeatMode=_repeatMode;
@property(nonatomic) long long shuffleMode; // @synthesize shuffleMode=_shuffleMode;
@property(nonatomic) long long actionAfterQueueLoad; // @synthesize actionAfterQueueLoad=_actionAfterQueueLoad;
@property(retain, nonatomic) id <NSSecureCoding> tracklistToken; // @synthesize tracklistToken=_tracklistToken;
@property(nonatomic) long long tracklistSource; // @synthesize tracklistSource=_tracklistSource;
@property(copy, nonatomic) NSDictionary *endTimeModifications; // @synthesize endTimeModifications=_endTimeModifications;
@property(copy, nonatomic) NSDictionary *startTimeModifications; // @synthesize startTimeModifications=_startTimeModifications;
@property(copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
- (id)artworkCatalogForMetadataModelObject:(id)arg1;	// IMP=0x000000000008dba8
- (id)generateNowPlayingContentItemWithMetadataObject:(id)arg1;	// IMP=0x000000000008d4ba
@property(readonly, nonatomic) MPCPlaybackSharedListeningProperties *sharedListeningProperties;
- (void)getArchiveWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008d386
- (void)getNowPlayingInfoWithArtworkCatalogConfiguration:(CDUnknownBlockType)arg1 artworkHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000008d276
- (void)getRepresentativeObjectWithProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008d1ac
- (void)getRemotePlaybackQueueDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000008d11a
- (void)getRemotePlaybackQueueRepresentationWithPlayerPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008cfe3
- (void)getPlaybackContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000008ce71
@property(readonly, nonatomic) id <MPCPlaybackIntentDataSource> tracklistDataSource;
- (id)description;	// IMP=0x000000000008cd2f
- (id)init;	// IMP=0x000000000008ccb6

@end

