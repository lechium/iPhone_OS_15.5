//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface HALSchemaHALMediaPlayerContext
{
    int _state;	// 8 = 0x8
    int _type;	// 12 = 0xc
    unsigned int _timeSinceLastMediaPlaybackInSeconds;	// 16 = 0x10
    struct {
        unsigned int state:1;
        unsigned int type:1;
        unsigned int timeSinceLastMediaPlaybackInSeconds:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) unsigned int timeSinceLastMediaPlaybackInSeconds; // @synthesize timeSinceLastMediaPlaybackInSeconds=_timeSinceLastMediaPlaybackInSeconds;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int state; // @synthesize state=_state;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000019ba96
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000019b9d8
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000019b61b
- (unsigned long long)hash;	// IMP=0x000000000019b5b9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019b49d
- (void)writeTo:(id)arg1;	// IMP=0x000000000019b40d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000019b400
- (void)deleteTimeSinceLastMediaPlaybackInSeconds;	// IMP=0x000000000019b3d6
@property(nonatomic) _Bool hasTimeSinceLastMediaPlaybackInSeconds;
- (void)deleteType;	// IMP=0x000000000019b361
@property(nonatomic) _Bool hasType;
- (void)deleteState;	// IMP=0x000000000019b2ee
@property(nonatomic) _Bool hasState;
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000347b47

@end

