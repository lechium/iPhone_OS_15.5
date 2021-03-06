//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUEIUIRenderingEnded, SISchemaUEIUIRenderingStarted;

@interface SISchemaUEIUIRenderingContext
{
    SISchemaUEIUIRenderingStarted *_startedOrChanged;	// 8 = 0x8
    SISchemaUEIUIRenderingEnded *_ended;	// 16 = 0x10
    _Bool _hasStartedOrChanged;	// 24 = 0x18
    _Bool _hasEnded;	// 25 = 0x19
    unsigned long long _whichContextevent;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000030734f
@property(nonatomic) _Bool hasEnded; // @synthesize hasEnded=_hasEnded;
@property(nonatomic) _Bool hasStartedOrChanged; // @synthesize hasStartedOrChanged=_hasStartedOrChanged;
@property(readonly, nonatomic) unsigned long long whichContextevent; // @synthesize whichContextevent=_whichContextevent;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000307174
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000003070b6
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000306e81
- (unsigned long long)hash;	// IMP=0x0000000000306e34
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000306b72
- (void)writeTo:(id)arg1;	// IMP=0x0000000000306a8f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003066e0
- (void)deleteEnded;	// IMP=0x00000000003066ad
@property(retain, nonatomic) SISchemaUEIUIRenderingEnded *ended; // @synthesize ended=_ended;
- (void)deleteStartedOrChanged;	// IMP=0x00000000003065e1
@property(retain, nonatomic) SISchemaUEIUIRenderingStarted *startedOrChanged; // @synthesize startedOrChanged=_startedOrChanged;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000035e779
- (id)suppressMessageUnderConditions;	// IMP=0x000000000035e741

@end

