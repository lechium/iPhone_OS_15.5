//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBWidgetConfig : PBCodable <NSCopying>
{
    double _alternativeButlerWidgetConfigPopulationCeiling;	// 8 = 0x8
    double _alternativeButlerWidgetConfigPopulationFloor;	// 16 = 0x10
    long long _articleListBackgroundMinimumUpdateInterval;	// 24 = 0x18
    long long _articleListForegroundMinimumUpdateInterval;	// 32 = 0x20
    long long _backgroundMinimumUpdateInterval;	// 40 = 0x28
    long long _forYouBackgroundMinimumUpdateInterval;	// 48 = 0x30
    long long _forYouCutoffTime;	// 56 = 0x38
    long long _forYouForegroundMinimumUpdateInterval;	// 64 = 0x40
    long long _foregroundMinimumUpdateInterval;	// 72 = 0x48
    long long _minimumArticleExposureDurationToBePreseen;	// 80 = 0x50
    double _parsecPopulationCeiling;	// 88 = 0x58
    double _parsecPopulationFloor;	// 96 = 0x60
    long long _parsecTrendingCutoffTime;	// 104 = 0x68
    long long _topStoriesBackgroundMinimumUpdateInterval;	// 112 = 0x70
    long long _topStoriesCutoffTime;	// 120 = 0x78
    long long _topStoriesForegroundMinimumUpdateInterval;	// 128 = 0x80
    long long _trendingBackgroundMinimumUpdateInterval;	// 136 = 0x88
    long long _trendingByParsecBackgroundMinimumUpdateInterval;	// 144 = 0x90
    long long _trendingByParsecForegroundMinimumUpdateInterval;	// 152 = 0x98
    long long _trendingCutoffTime;	// 160 = 0xa0
    long long _trendingForegroundMinimumUpdateInterval;	// 168 = 0xa8
    long long _widgetSectionConfigBackgroundMinimumUpdateInterval;	// 176 = 0xb0
    long long _widgetSectionConfigForegroundMinimumUpdateInterval;	// 184 = 0xb8
    unsigned int _enabledSections;	// 192 = 0xc0
    NSString *_identifier;	// 200 = 0xc8
    unsigned int _minimumNumberOfTimesPreseenToBeSeen;	// 208 = 0xd0
    struct {
        unsigned int alternativeButlerWidgetConfigPopulationCeiling:1;
        unsigned int alternativeButlerWidgetConfigPopulationFloor:1;
        unsigned int articleListBackgroundMinimumUpdateInterval:1;
        unsigned int articleListForegroundMinimumUpdateInterval:1;
        unsigned int backgroundMinimumUpdateInterval:1;
        unsigned int forYouBackgroundMinimumUpdateInterval:1;
        unsigned int forYouCutoffTime:1;
        unsigned int forYouForegroundMinimumUpdateInterval:1;
        unsigned int foregroundMinimumUpdateInterval:1;
        unsigned int minimumArticleExposureDurationToBePreseen:1;
        unsigned int parsecPopulationCeiling:1;
        unsigned int parsecPopulationFloor:1;
        unsigned int parsecTrendingCutoffTime:1;
        unsigned int topStoriesBackgroundMinimumUpdateInterval:1;
        unsigned int topStoriesCutoffTime:1;
        unsigned int topStoriesForegroundMinimumUpdateInterval:1;
        unsigned int trendingBackgroundMinimumUpdateInterval:1;
        unsigned int trendingByParsecBackgroundMinimumUpdateInterval:1;
        unsigned int trendingByParsecForegroundMinimumUpdateInterval:1;
        unsigned int trendingCutoffTime:1;
        unsigned int trendingForegroundMinimumUpdateInterval:1;
        unsigned int widgetSectionConfigBackgroundMinimumUpdateInterval:1;
        unsigned int widgetSectionConfigForegroundMinimumUpdateInterval:1;
        unsigned int enabledSections:1;
        unsigned int minimumNumberOfTimesPreseenToBeSeen:1;
    } _has;	// 212 = 0xd4
}

- (void).cxx_destruct;	// IMP=0x0000000000187602
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long parsecTrendingCutoffTime; // @synthesize parsecTrendingCutoffTime=_parsecTrendingCutoffTime;
@property(nonatomic) double alternativeButlerWidgetConfigPopulationCeiling; // @synthesize alternativeButlerWidgetConfigPopulationCeiling=_alternativeButlerWidgetConfigPopulationCeiling;
@property(nonatomic) double alternativeButlerWidgetConfigPopulationFloor; // @synthesize alternativeButlerWidgetConfigPopulationFloor=_alternativeButlerWidgetConfigPopulationFloor;
@property(nonatomic) long long trendingBackgroundMinimumUpdateInterval; // @synthesize trendingBackgroundMinimumUpdateInterval=_trendingBackgroundMinimumUpdateInterval;
@property(nonatomic) long long trendingForegroundMinimumUpdateInterval; // @synthesize trendingForegroundMinimumUpdateInterval=_trendingForegroundMinimumUpdateInterval;
@property(nonatomic) long long topStoriesBackgroundMinimumUpdateInterval; // @synthesize topStoriesBackgroundMinimumUpdateInterval=_topStoriesBackgroundMinimumUpdateInterval;
@property(nonatomic) long long topStoriesForegroundMinimumUpdateInterval; // @synthesize topStoriesForegroundMinimumUpdateInterval=_topStoriesForegroundMinimumUpdateInterval;
@property(nonatomic) double parsecPopulationCeiling; // @synthesize parsecPopulationCeiling=_parsecPopulationCeiling;
@property(nonatomic) double parsecPopulationFloor; // @synthesize parsecPopulationFloor=_parsecPopulationFloor;
@property(nonatomic) unsigned int enabledSections; // @synthesize enabledSections=_enabledSections;
@property(nonatomic) long long trendingCutoffTime; // @synthesize trendingCutoffTime=_trendingCutoffTime;
@property(nonatomic) long long forYouCutoffTime; // @synthesize forYouCutoffTime=_forYouCutoffTime;
@property(nonatomic) long long topStoriesCutoffTime; // @synthesize topStoriesCutoffTime=_topStoriesCutoffTime;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001871b2
- (unsigned long long)hash;	// IMP=0x0000000000186a68
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000186527
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001861af
- (void)writeTo:(id)arg1;	// IMP=0x0000000000185e31
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000185e24
- (id)dictionaryRepresentation;	// IMP=0x0000000000184664
- (id)description;	// IMP=0x00000000001845b5
@property(nonatomic) _Bool hasMinimumNumberOfTimesPreseenToBeSeen;
@property(nonatomic) unsigned int minimumNumberOfTimesPreseenToBeSeen; // @synthesize minimumNumberOfTimesPreseenToBeSeen=_minimumNumberOfTimesPreseenToBeSeen;
@property(nonatomic) _Bool hasMinimumArticleExposureDurationToBePreseen;
@property(nonatomic) long long minimumArticleExposureDurationToBePreseen; // @synthesize minimumArticleExposureDurationToBePreseen=_minimumArticleExposureDurationToBePreseen;
@property(nonatomic) _Bool hasWidgetSectionConfigBackgroundMinimumUpdateInterval;
@property(nonatomic) long long widgetSectionConfigBackgroundMinimumUpdateInterval; // @synthesize widgetSectionConfigBackgroundMinimumUpdateInterval=_widgetSectionConfigBackgroundMinimumUpdateInterval;
@property(nonatomic) _Bool hasWidgetSectionConfigForegroundMinimumUpdateInterval;
@property(nonatomic) long long widgetSectionConfigForegroundMinimumUpdateInterval; // @synthesize widgetSectionConfigForegroundMinimumUpdateInterval=_widgetSectionConfigForegroundMinimumUpdateInterval;
@property(nonatomic) _Bool hasTrendingByParsecBackgroundMinimumUpdateInterval;
@property(nonatomic) long long trendingByParsecBackgroundMinimumUpdateInterval; // @synthesize trendingByParsecBackgroundMinimumUpdateInterval=_trendingByParsecBackgroundMinimumUpdateInterval;
@property(nonatomic) _Bool hasTrendingByParsecForegroundMinimumUpdateInterval;
@property(nonatomic) long long trendingByParsecForegroundMinimumUpdateInterval; // @synthesize trendingByParsecForegroundMinimumUpdateInterval=_trendingByParsecForegroundMinimumUpdateInterval;
@property(nonatomic) _Bool hasArticleListBackgroundMinimumUpdateInterval;
@property(nonatomic) long long articleListBackgroundMinimumUpdateInterval; // @synthesize articleListBackgroundMinimumUpdateInterval=_articleListBackgroundMinimumUpdateInterval;
@property(nonatomic) _Bool hasArticleListForegroundMinimumUpdateInterval;
@property(nonatomic) long long articleListForegroundMinimumUpdateInterval; // @synthesize articleListForegroundMinimumUpdateInterval=_articleListForegroundMinimumUpdateInterval;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(nonatomic) _Bool hasParsecTrendingCutoffTime;
@property(nonatomic) _Bool hasAlternativeButlerWidgetConfigPopulationCeiling;
@property(nonatomic) _Bool hasAlternativeButlerWidgetConfigPopulationFloor;
@property(nonatomic) _Bool hasTrendingBackgroundMinimumUpdateInterval;
@property(nonatomic) _Bool hasTrendingForegroundMinimumUpdateInterval;
@property(nonatomic) _Bool hasForYouBackgroundMinimumUpdateInterval;
@property(nonatomic) long long forYouBackgroundMinimumUpdateInterval; // @synthesize forYouBackgroundMinimumUpdateInterval=_forYouBackgroundMinimumUpdateInterval;
@property(nonatomic) _Bool hasForYouForegroundMinimumUpdateInterval;
@property(nonatomic) long long forYouForegroundMinimumUpdateInterval; // @synthesize forYouForegroundMinimumUpdateInterval=_forYouForegroundMinimumUpdateInterval;
@property(nonatomic) _Bool hasTopStoriesBackgroundMinimumUpdateInterval;
@property(nonatomic) _Bool hasTopStoriesForegroundMinimumUpdateInterval;
@property(nonatomic) _Bool hasBackgroundMinimumUpdateInterval;
@property(nonatomic) long long backgroundMinimumUpdateInterval; // @synthesize backgroundMinimumUpdateInterval=_backgroundMinimumUpdateInterval;
@property(nonatomic) _Bool hasForegroundMinimumUpdateInterval;
@property(nonatomic) long long foregroundMinimumUpdateInterval; // @synthesize foregroundMinimumUpdateInterval=_foregroundMinimumUpdateInterval;
@property(nonatomic) _Bool hasParsecPopulationCeiling;
@property(nonatomic) _Bool hasParsecPopulationFloor;
@property(nonatomic) _Bool hasEnabledSections;
@property(nonatomic) _Bool hasTrendingCutoffTime;
@property(nonatomic) _Bool hasForYouCutoffTime;
@property(nonatomic) _Bool hasTopStoriesCutoffTime;

@end

