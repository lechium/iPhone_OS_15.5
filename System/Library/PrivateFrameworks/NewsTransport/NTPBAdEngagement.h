//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NTPBAdEngagement : PBCodable <NSCopying>
{
    long long _videoAdDuration;	// 8 = 0x8
    long long _videoAdPlayTime;	// 16 = 0x10
    int _adCreativeType;	// 24 = 0x18
    int _adEngagementType;	// 28 = 0x1c
    NSString *_adImpressionId;	// 32 = 0x20
    int _adImpressionTimeThreshold;	// 40 = 0x28
    int _adLocation;	// 44 = 0x2c
    int _adType;	// 48 = 0x30
    NSString *_articleId;	// 56 = 0x38
    NSData *_articleViewingSessionId;	// 64 = 0x40
    NSString *_feedId;	// 72 = 0x48
    int _feedType;	// 80 = 0x50
    NSData *_feedViewExposureId;	// 88 = 0x58
    int _groupType;	// 96 = 0x60
    NSData *_groupViewExposureId;	// 104 = 0x68
    NSString *_iadAd;	// 112 = 0x70
    NSString *_iadCampaign;	// 120 = 0x78
    NSString *_iadLine;	// 128 = 0x80
    int _newsProductType;	// 136 = 0x88
    NSString *_sourceChannelId;	// 144 = 0x90
    int _videoAdPlacementPosition;	// 152 = 0x98
    int _videoAdType;	// 156 = 0x9c
    _Bool _videoAdViewComplete;	// 160 = 0xa0
    struct {
        unsigned int videoAdDuration:1;
        unsigned int videoAdPlayTime:1;
        unsigned int adCreativeType:1;
        unsigned int adEngagementType:1;
        unsigned int adImpressionTimeThreshold:1;
        unsigned int adLocation:1;
        unsigned int adType:1;
        unsigned int feedType:1;
        unsigned int groupType:1;
        unsigned int newsProductType:1;
        unsigned int videoAdPlacementPosition:1;
        unsigned int videoAdType:1;
        unsigned int videoAdViewComplete:1;
    } _has;	// 164 = 0xa4
}

- (void).cxx_destruct;	// IMP=0x0000000000245343
@property(retain, nonatomic) NSData *groupViewExposureId; // @synthesize groupViewExposureId=_groupViewExposureId;
@property(retain, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property(nonatomic) int adImpressionTimeThreshold; // @synthesize adImpressionTimeThreshold=_adImpressionTimeThreshold;
@property(retain, nonatomic) NSString *adImpressionId; // @synthesize adImpressionId=_adImpressionId;
@property(nonatomic) _Bool videoAdViewComplete; // @synthesize videoAdViewComplete=_videoAdViewComplete;
@property(nonatomic) int videoAdPlacementPosition; // @synthesize videoAdPlacementPosition=_videoAdPlacementPosition;
@property(nonatomic) long long videoAdPlayTime; // @synthesize videoAdPlayTime=_videoAdPlayTime;
@property(nonatomic) long long videoAdDuration; // @synthesize videoAdDuration=_videoAdDuration;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(retain, nonatomic) NSString *iadAd; // @synthesize iadAd=_iadAd;
@property(retain, nonatomic) NSString *iadLine; // @synthesize iadLine=_iadLine;
@property(retain, nonatomic) NSString *iadCampaign; // @synthesize iadCampaign=_iadCampaign;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000244e94
- (unsigned long long)hash;	// IMP=0x0000000000244b49
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000244668
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002442f2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000243ff5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000243fe8
- (id)dictionaryRepresentation;	// IMP=0x00000000002429fc
- (id)description;	// IMP=0x000000000024294d
@property(readonly, nonatomic) _Bool hasGroupViewExposureId;
- (int)StringAsGroupType:(id)arg1;	// IMP=0x00000000002423e0
- (id)groupTypeAsString:(int)arg1;	// IMP=0x0000000000242142
@property(nonatomic) _Bool hasGroupType;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
@property(readonly, nonatomic) _Bool hasFeedViewExposureId;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(readonly, nonatomic) _Bool hasArticleViewingSessionId;
@property(nonatomic) _Bool hasAdImpressionTimeThreshold;
@property(readonly, nonatomic) _Bool hasAdImpressionId;
@property(nonatomic) _Bool hasVideoAdViewComplete;
@property(nonatomic) _Bool hasVideoAdPlacementPosition;
@property(nonatomic) _Bool hasVideoAdPlayTime;
@property(nonatomic) _Bool hasVideoAdDuration;
@property(readonly, nonatomic) _Bool hasArticleId;
@property(readonly, nonatomic) _Bool hasFeedId;
- (int)StringAsFeedType:(id)arg1;	// IMP=0x0000000000241bd4
- (id)feedTypeAsString:(int)arg1;	// IMP=0x0000000000241a55
@property(nonatomic) _Bool hasFeedType;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;
- (int)StringAsVideoAdType:(id)arg1;	// IMP=0x0000000000241958
- (id)videoAdTypeAsString:(int)arg1;	// IMP=0x00000000002418f2
@property(nonatomic) _Bool hasVideoAdType;
@property(nonatomic) int videoAdType; // @synthesize videoAdType=_videoAdType;
- (int)StringAsNewsProductType:(id)arg1;	// IMP=0x00000000002417f0
- (id)newsProductTypeAsString:(int)arg1;	// IMP=0x000000000024178a
@property(nonatomic) _Bool hasNewsProductType;
@property(nonatomic) int newsProductType; // @synthesize newsProductType=_newsProductType;
- (int)StringAsAdLocation:(id)arg1;	// IMP=0x000000000024162c
- (id)adLocationAsString:(int)arg1;	// IMP=0x0000000000241592
@property(nonatomic) _Bool hasAdLocation;
@property(nonatomic) int adLocation; // @synthesize adLocation=_adLocation;
- (int)StringAsAdCreativeType:(id)arg1;	// IMP=0x0000000000241478
- (id)adCreativeTypeAsString:(int)arg1;	// IMP=0x00000000002413fa
@property(nonatomic) _Bool hasAdCreativeType;
@property(nonatomic) int adCreativeType; // @synthesize adCreativeType=_adCreativeType;
- (int)StringAsAdType:(id)arg1;	// IMP=0x000000000024132f
- (id)adTypeAsString:(int)arg1;	// IMP=0x00000000002412da
@property(nonatomic) _Bool hasAdType;
@property(nonatomic) int adType; // @synthesize adType=_adType;
- (int)StringAsAdEngagementType:(id)arg1;	// IMP=0x0000000000241180
- (id)adEngagementTypeAsString:(int)arg1;	// IMP=0x00000000002410e8
@property(nonatomic) _Bool hasAdEngagementType;
@property(nonatomic) int adEngagementType; // @synthesize adEngagementType=_adEngagementType;
@property(readonly, nonatomic) _Bool hasIadAd;
@property(readonly, nonatomic) _Bool hasIadLine;
@property(readonly, nonatomic) _Bool hasIadCampaign;

@end
