//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NTPBWidgetConfig;

@interface FCWidgetConfig : NSObject <NSSecureCoding, NSCopying>
{
    NTPBWidgetConfig *_pbWidgetConfig;	// 8 = 0x8
    NSDictionary *_configDictionary;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000017ace2
- (void).cxx_destruct;	// IMP=0x000000000017ad1c
@property(copy, nonatomic) NSDictionary *configDictionary; // @synthesize configDictionary=_configDictionary;
@property(copy, nonatomic) NTPBWidgetConfig *pbWidgetConfig; // @synthesize pbWidgetConfig=_pbWidgetConfig;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000017ac34
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017ab5a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017aabe
@property(readonly, nonatomic) long long smallWidgetSystemReloadJitterMaxHoneymoon;
@property(readonly, nonatomic) long long smallWidgetSystemReloadIntervalHoneymoon;
@property(readonly, nonatomic) long long smallWidgetSystemHoneymoonDuration;
@property(readonly, nonatomic) long long smallWidgetSystemReloadJitterMax;
@property(readonly, nonatomic) long long smallWidgetSystemReloadInterval;
@property(readonly, nonatomic) long long widgetSystemReloadJitterMaxHoneymoon;
@property(readonly, nonatomic) long long widgetSystemReloadIntervalHoneymoon;
@property(readonly, nonatomic) long long widgetSystemHoneymoonDuration;
@property(readonly, nonatomic) long long widgetSystemReloadJitterMax;
@property(readonly, nonatomic) long long widgetSystemReloadInterval;
@property(readonly, nonatomic) unsigned int minimumNumberOfTimesPreseenToBeSeen;
@property(readonly, nonatomic) long long minimumArticleExposureDurationToBePreseen;
@property(readonly, nonatomic) long long forYouBackgroundMinimumUpdateInterval;
@property(readonly, nonatomic) double parsecPopulationCeiling;
@property(readonly, nonatomic) double parsecPopulationFloor;
- (id)initWithConfigDictionary:(id)arg1;	// IMP=0x000000000017a426
- (id)initWithWidgetConfig:(id)arg1;	// IMP=0x000000000017a3b3

@end

