//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBTodayWidgetExposure : PBCodable <NSCopying>
{
    long long _contentFetchDate;	// 8 = 0x8
    NSString *_contentId;	// 16 = 0x10
    int _widgetAppearanceType;	// 24 = 0x18
    int _widgetArticleCount;	// 28 = 0x1c
    int _widgetExposureStackLocation;	// 32 = 0x20
    int _widgetHeadlineExposureCount;	// 36 = 0x24
    NSString *_widgetIdentifier;	// 40 = 0x28
    NSMutableArray *_widgetPersonalizationFeatureCTRPairs;	// 48 = 0x30
    NSMutableArray *_widgetSectionsArticleCountPairs;	// 56 = 0x38
    int _widgetType;	// 64 = 0x40
    struct {
        unsigned int contentFetchDate:1;
        unsigned int widgetAppearanceType:1;
        unsigned int widgetArticleCount:1;
        unsigned int widgetExposureStackLocation:1;
        unsigned int widgetHeadlineExposureCount:1;
        unsigned int widgetType:1;
    } _has;	// 68 = 0x44
}

+ (Class)widgetPersonalizationFeatureCTRPairType;	// IMP=0x0000000000169b09
+ (Class)widgetSectionsArticleCountPairType;	// IMP=0x0000000000169a37
- (void).cxx_destruct;	// IMP=0x000000000016bc73
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(nonatomic) long long contentFetchDate; // @synthesize contentFetchDate=_contentFetchDate;
@property(retain, nonatomic) NSString *widgetIdentifier; // @synthesize widgetIdentifier=_widgetIdentifier;
@property(retain, nonatomic) NSMutableArray *widgetPersonalizationFeatureCTRPairs; // @synthesize widgetPersonalizationFeatureCTRPairs=_widgetPersonalizationFeatureCTRPairs;
@property(retain, nonatomic) NSMutableArray *widgetSectionsArticleCountPairs; // @synthesize widgetSectionsArticleCountPairs=_widgetSectionsArticleCountPairs;
@property(nonatomic) int widgetHeadlineExposureCount; // @synthesize widgetHeadlineExposureCount=_widgetHeadlineExposureCount;
@property(nonatomic) int widgetArticleCount; // @synthesize widgetArticleCount=_widgetArticleCount;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000016b842
- (unsigned long long)hash;	// IMP=0x000000000016b6c9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016b482
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016b071
- (void)writeTo:(id)arg1;	// IMP=0x000000000016ad59
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000016ad4c
- (id)dictionaryRepresentation;	// IMP=0x000000000016a02a
- (id)description;	// IMP=0x0000000000169f7b
- (int)StringAsWidgetType:(id)arg1;	// IMP=0x0000000000169ecc
- (id)widgetTypeAsString:(int)arg1;	// IMP=0x0000000000169e4d
@property(nonatomic) _Bool hasWidgetType;
@property(nonatomic) int widgetType; // @synthesize widgetType=_widgetType;
- (int)StringAsWidgetExposureStackLocation:(id)arg1;	// IMP=0x0000000000169cf4
- (id)widgetExposureStackLocationAsString:(int)arg1;	// IMP=0x0000000000169c5c
@property(nonatomic) _Bool hasWidgetExposureStackLocation;
@property(nonatomic) int widgetExposureStackLocation; // @synthesize widgetExposureStackLocation=_widgetExposureStackLocation;
@property(readonly, nonatomic) _Bool hasContentId;
@property(nonatomic) _Bool hasContentFetchDate;
@property(readonly, nonatomic) _Bool hasWidgetIdentifier;
@property(nonatomic) _Bool hasWidgetAppearanceType;
@property(nonatomic) int widgetAppearanceType; // @synthesize widgetAppearanceType=_widgetAppearanceType;
- (id)widgetPersonalizationFeatureCTRPairAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000169aec
- (unsigned long long)widgetPersonalizationFeatureCTRPairsCount;	// IMP=0x0000000000169acf
- (void)addWidgetPersonalizationFeatureCTRPair:(id)arg1;	// IMP=0x0000000000169a65
- (void)clearWidgetPersonalizationFeatureCTRPairs;	// IMP=0x0000000000169a48
- (id)widgetSectionsArticleCountPairAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000169a1a
- (unsigned long long)widgetSectionsArticleCountPairsCount;	// IMP=0x00000000001699fd
- (void)addWidgetSectionsArticleCountPair:(id)arg1;	// IMP=0x0000000000169993
- (void)clearWidgetSectionsArticleCountPairs;	// IMP=0x0000000000169976
@property(nonatomic) _Bool hasWidgetHeadlineExposureCount;
@property(nonatomic) _Bool hasWidgetArticleCount;

@end
