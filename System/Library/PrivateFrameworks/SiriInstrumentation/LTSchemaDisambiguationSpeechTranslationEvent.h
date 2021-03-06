//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface LTSchemaDisambiguationSpeechTranslationEvent
{
    NSString *_requestID;	// 8 = 0x8
    NSString *_sourceLocale;	// 16 = 0x10
    NSString *_senseID;	// 24 = 0x18
    _Bool _hasRequestID;	// 32 = 0x20
    _Bool _hasSourceLocale;	// 33 = 0x21
    _Bool _hasSenseID;	// 34 = 0x22
}

- (void).cxx_destruct;	// IMP=0x000000000012c70b
@property(nonatomic) _Bool hasSenseID; // @synthesize hasSenseID=_hasSenseID;
@property(nonatomic) _Bool hasSourceLocale; // @synthesize hasSourceLocale=_hasSourceLocale;
@property(nonatomic) _Bool hasRequestID; // @synthesize hasRequestID=_hasRequestID;
@property(copy, nonatomic) NSString *senseID; // @synthesize senseID=_senseID;
@property(copy, nonatomic) NSString *sourceLocale; // @synthesize sourceLocale=_sourceLocale;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000012c497
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000012c3d9
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000012c1cf
- (unsigned long long)hash;	// IMP=0x000000000012c162
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000012bd73
- (void)writeTo:(id)arg1;	// IMP=0x000000000012bc84
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000012ba8e
- (void)deleteSenseID;	// IMP=0x000000000012ba7a
- (void)deleteSourceLocale;	// IMP=0x000000000012ba51
- (void)deleteRequestID;	// IMP=0x000000000012ba28
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000341508

@end

