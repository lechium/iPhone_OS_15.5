//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class APPBLogMetaData, MISSING_TYPE, NSData, NSMutableArray, NSString;

@interface APPBLogImpressionRequest : PBRequest
{
    NSString *_contextString;	// 8 = 0x8
    NSData *_mediaContentHash;	// 16 = 0x10
    APPBLogMetaData *_metaData;	// 24 = 0x18
    NSMutableArray *_metrics;	// 32 = 0x20
    float _playbackTime;	// 40 = 0x28
    int _type;	// 44 = 0x2c
    _Bool _insufficientPlaybackTime;	// 48 = 0x30
    _Bool _screenSaverActive;	// 49 = 0x31
    _Bool _visuallyEngaged;	// 50 = 0x32
    struct {
        unsigned int playbackTime:1;
        unsigned int type:1;
        unsigned int insufficientPlaybackTime:1;
        unsigned int screenSaverActive:1;
        unsigned int visuallyEngaged:1;
    } _has;	// 52 = 0x34
}

+ (Class)metricType;	// IMP=0x002000000009254a
+ (id)options;	// IMP=0x0010000000092424
- (void).cxx_destruct;	// IMP=0x002000000009419e
@property(retain, nonatomic) NSString *contextString; // @synthesize contextString=_contextString;
@property(nonatomic) _Bool visuallyEngaged; // @synthesize visuallyEngaged=_visuallyEngaged;
@property(nonatomic) _Bool insufficientPlaybackTime; // @synthesize insufficientPlaybackTime=_insufficientPlaybackTime;
@property(nonatomic) float playbackTime; // @synthesize playbackTime=_playbackTime;
@property(retain, nonatomic) NSData *mediaContentHash; // @synthesize mediaContentHash=_mediaContentHash;
@property(nonatomic) _Bool screenSaverActive; // @synthesize screenSaverActive=_screenSaverActive;
@property(retain, nonatomic) NSMutableArray *metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) APPBLogMetaData *metaData; // @synthesize metaData=_metaData;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000093e2f
- (unsigned long long)hash;	// IMP=0x0010000000093c20
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000939e6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000093712
- (MISSING_TYPE *)copyTo: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000093554
- (void)writeTo:(id)arg1;	// IMP=0x0010000000093315
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000093308
- (id)dictionaryRepresentation;	// IMP=0x00100000000928cb
- (id)description;	// IMP=0x001000000009281c
@property(readonly, nonatomic) _Bool hasContextString;
- (int)StringAsType:(id)arg1;	// IMP=0x001000000009276a
- (id)typeAsString:(int)arg1;	// IMP=0x0010000000092703
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool hasVisuallyEngaged;
@property(nonatomic) _Bool hasInsufficientPlaybackTime;
@property(nonatomic) _Bool hasPlaybackTime;
@property(readonly, nonatomic) _Bool hasMediaContentHash;
@property(nonatomic) _Bool hasScreenSaverActive;
- (id)metricAtIndex:(unsigned long long)arg1;	// IMP=0x001000000009252d
- (unsigned long long)metricsCount;	// IMP=0x0010000000092510
- (void)addMetric:(id)arg1;	// IMP=0x00100000000924a6
- (void)clearMetrics;	// IMP=0x0010000000092489
@property(readonly, nonatomic) _Bool hasMetaData;

@end

