//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBTodayConfig : PBCodable <NSCopying>
{
    long long _widgetSystemReloadInterval;	// 8 = 0x8
    long long _widgetSystemReloadJitterMax;	// 16 = 0x10
    NSString *_audioIndicatorColor;	// 24 = 0x18
    NSString *_backgroundColorDark;	// 32 = 0x20
    NSString *_backgroundColorLight;	// 40 = 0x28
    NSMutableArray *_todayQueueConfigs;	// 48 = 0x30
    NSString *_widgetIdentifier;	// 56 = 0x38
    struct {
        unsigned int widgetSystemReloadInterval:1;
        unsigned int widgetSystemReloadJitterMax:1;
    } _has;	// 64 = 0x40
}

+ (Class)todayQueueConfigsType;	// IMP=0x000000000003bf44
@property(nonatomic) long long widgetSystemReloadJitterMax; // @synthesize widgetSystemReloadJitterMax=_widgetSystemReloadJitterMax;
@property(nonatomic) long long widgetSystemReloadInterval; // @synthesize widgetSystemReloadInterval=_widgetSystemReloadInterval;
@property(retain, nonatomic) NSString *audioIndicatorColor; // @synthesize audioIndicatorColor=_audioIndicatorColor;
@property(retain, nonatomic) NSString *widgetIdentifier; // @synthesize widgetIdentifier=_widgetIdentifier;
@property(retain, nonatomic) NSString *backgroundColorDark; // @synthesize backgroundColorDark=_backgroundColorDark;
@property(retain, nonatomic) NSString *backgroundColorLight; // @synthesize backgroundColorLight=_backgroundColorLight;
@property(retain, nonatomic) NSMutableArray *todayQueueConfigs; // @synthesize todayQueueConfigs=_todayQueueConfigs;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003cf0c
- (unsigned long long)hash;	// IMP=0x000000000003ce20
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003cc99
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003c9c5
- (void)writeTo:(id)arg1;	// IMP=0x000000000003c7f9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003c7ec
- (id)dictionaryRepresentation;	// IMP=0x000000000003c0b0
- (id)description;	// IMP=0x000000000003c039
@property(nonatomic) _Bool hasWidgetSystemReloadJitterMax;
@property(nonatomic) _Bool hasWidgetSystemReloadInterval;
@property(readonly, nonatomic) _Bool hasAudioIndicatorColor;
@property(readonly, nonatomic) _Bool hasWidgetIdentifier;
@property(readonly, nonatomic) _Bool hasBackgroundColorDark;
@property(readonly, nonatomic) _Bool hasBackgroundColorLight;
- (id)todayQueueConfigsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000003bf27
- (unsigned long long)todayQueueConfigsCount;	// IMP=0x000000000003bf0a
- (void)addTodayQueueConfigs:(id)arg1;	// IMP=0x000000000003bebd
- (void)clearTodayQueueConfigs;	// IMP=0x000000000003bea0
- (void)dealloc;	// IMP=0x000000000003be1c

@end

