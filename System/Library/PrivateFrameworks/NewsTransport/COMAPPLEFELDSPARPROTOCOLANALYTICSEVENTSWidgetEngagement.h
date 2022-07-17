//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSWidgetEngagement : PBCodable <NSCopying>
{
    long long _contentFetchDate;	// 8 = 0x8
    NSString *_articleId;	// 16 = 0x10
    NSData *_articleViewingSessionId;	// 24 = 0x18
    NSString *_contentId;	// 32 = 0x20
    NSString *_engagementTargetUrl;	// 40 = 0x28
    NSMutableArray *_otherVisibleSections;	// 48 = 0x30
    NSString *_sourceChannelId;	// 56 = 0x38
    NSString *_webEmbedId;	// 64 = 0x40
    int _widgetArticleCount;	// 72 = 0x48
    int _widgetArticleCountInSection;	// 76 = 0x4c
    int _widgetArticleRank;	// 80 = 0x50
    int _widgetArticleRankInSection;	// 84 = 0x54
    NSString *_widgetContentId;	// 88 = 0x58
    int _widgetContentType;	// 96 = 0x60
    int _widgetDisplayMode;	// 100 = 0x64
    int _widgetEngagementType;	// 104 = 0x68
    int _widgetExposureStackLocation;	// 108 = 0x6c
    int _widgetSectionDisplayRank;	// 112 = 0x70
    NSString *_widgetSectionId;	// 120 = 0x78
    NSString *_widgetSectionSubid;	// 128 = 0x80
    int _widgetType;	// 136 = 0x88
    NSString *_widgetUserId;	// 144 = 0x90
    int _widgetVideoPresentationReason;	// 152 = 0x98
    CDStruct_38942d66 _has;	// 156 = 0x9c
}

+ (Class)otherVisibleSectionsType;	// IMP=0x000000000017e0e1
- (void).cxx_destruct;	// IMP=0x0000000000181852
@property(retain, nonatomic) NSString *widgetSectionSubid; // @synthesize widgetSectionSubid=_widgetSectionSubid;
@property(retain, nonatomic) NSString *widgetContentId; // @synthesize widgetContentId=_widgetContentId;
@property(nonatomic) long long contentFetchDate; // @synthesize contentFetchDate=_contentFetchDate;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(retain, nonatomic) NSString *engagementTargetUrl; // @synthesize engagementTargetUrl=_engagementTargetUrl;
@property(retain, nonatomic) NSString *webEmbedId; // @synthesize webEmbedId=_webEmbedId;
@property(retain, nonatomic) NSString *widgetUserId; // @synthesize widgetUserId=_widgetUserId;
@property(nonatomic) int widgetArticleCountInSection; // @synthesize widgetArticleCountInSection=_widgetArticleCountInSection;
@property(retain, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property(retain, nonatomic) NSMutableArray *otherVisibleSections; // @synthesize otherVisibleSections=_otherVisibleSections;
@property(nonatomic) int widgetArticleCount; // @synthesize widgetArticleCount=_widgetArticleCount;
@property(nonatomic) int widgetArticleRank; // @synthesize widgetArticleRank=_widgetArticleRank;
@property(nonatomic) int widgetArticleRankInSection; // @synthesize widgetArticleRankInSection=_widgetArticleRankInSection;
@property(nonatomic) int widgetSectionDisplayRank; // @synthesize widgetSectionDisplayRank=_widgetSectionDisplayRank;
@property(retain, nonatomic) NSString *widgetSectionId; // @synthesize widgetSectionId=_widgetSectionId;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001811e1
- (unsigned long long)hash;	// IMP=0x0000000000180e86
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001809a3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001804ce
- (void)copyTo:(id)arg1;	// IMP=0x000000000018015d
- (void)writeTo:(id)arg1;	// IMP=0x000000000017fd69
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000017fd5c
- (id)dictionaryRepresentation;	// IMP=0x000000000017eb47
- (id)description;	// IMP=0x000000000017ea98
@property(readonly, nonatomic) _Bool hasWidgetSectionSubid;
- (int)StringAsWidgetType:(id)arg1;	// IMP=0x000000000017e9d4
- (id)widgetTypeAsString:(int)arg1;	// IMP=0x000000000017e957
@property(nonatomic) _Bool hasWidgetType;
@property(nonatomic) int widgetType; // @synthesize widgetType=_widgetType;
- (int)StringAsWidgetExposureStackLocation:(id)arg1;	// IMP=0x000000000017e7f8
- (id)widgetExposureStackLocationAsString:(int)arg1;	// IMP=0x000000000017e761
@property(nonatomic) _Bool hasWidgetExposureStackLocation;
@property(nonatomic) int widgetExposureStackLocation; // @synthesize widgetExposureStackLocation=_widgetExposureStackLocation;
@property(readonly, nonatomic) _Bool hasWidgetContentId;
- (int)StringAsWidgetDisplayMode:(id)arg1;	// IMP=0x000000000017e5c8
- (id)widgetDisplayModeAsString:(int)arg1;	// IMP=0x000000000017e522
@property(nonatomic) _Bool hasWidgetDisplayMode;
@property(nonatomic) int widgetDisplayMode; // @synthesize widgetDisplayMode=_widgetDisplayMode;
@property(nonatomic) _Bool hasContentFetchDate;
@property(readonly, nonatomic) _Bool hasContentId;
@property(readonly, nonatomic) _Bool hasEngagementTargetUrl;
@property(readonly, nonatomic) _Bool hasWebEmbedId;
- (int)StringAsWidgetContentType:(id)arg1;	// IMP=0x000000000017e39f
- (id)widgetContentTypeAsString:(int)arg1;	// IMP=0x000000000017e339
@property(nonatomic) _Bool hasWidgetContentType;
@property(nonatomic) int widgetContentType; // @synthesize widgetContentType=_widgetContentType;
@property(readonly, nonatomic) _Bool hasWidgetUserId;
@property(nonatomic) _Bool hasWidgetArticleCountInSection;
- (int)StringAsWidgetVideoPresentationReason:(id)arg1;	// IMP=0x000000000017e1dd
- (id)widgetVideoPresentationReasonAsString:(int)arg1;	// IMP=0x000000000017e177
@property(nonatomic) _Bool hasWidgetVideoPresentationReason;
@property(nonatomic) int widgetVideoPresentationReason; // @synthesize widgetVideoPresentationReason=_widgetVideoPresentationReason;
@property(readonly, nonatomic) _Bool hasArticleViewingSessionId;
- (id)otherVisibleSectionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000017e0c4
- (unsigned long long)otherVisibleSectionsCount;	// IMP=0x000000000017e0a7
- (void)addOtherVisibleSections:(id)arg1;	// IMP=0x000000000017e03d
- (void)clearOtherVisibleSections;	// IMP=0x000000000017e020
@property(nonatomic) _Bool hasWidgetArticleCount;
@property(nonatomic) _Bool hasWidgetArticleRank;
@property(nonatomic) _Bool hasWidgetArticleRankInSection;
@property(nonatomic) _Bool hasWidgetSectionDisplayRank;
@property(readonly, nonatomic) _Bool hasWidgetSectionId;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(readonly, nonatomic) _Bool hasArticleId;
- (int)StringAsWidgetEngagementType:(id)arg1;	// IMP=0x000000000017dd18
- (id)widgetEngagementTypeAsString:(int)arg1;	// IMP=0x000000000017dc3f
@property(nonatomic) _Bool hasWidgetEngagementType;
@property(nonatomic) int widgetEngagementType; // @synthesize widgetEngagementType=_widgetEngagementType;

@end
