//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, SISchemaUUID;

@interface ASRSchemaASRJitLanguageModelEnrollmentEnded
{
    SISchemaUUID *_linkId;	// 8 = 0x8
    _Bool _hasLinkId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002b343
@property(nonatomic) _Bool hasLinkId; // @synthesize hasLinkId=_hasLinkId;
@property(retain, nonatomic) SISchemaUUID *linkId; // @synthesize linkId=_linkId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000002b211
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000002b153
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000002afce
- (unsigned long long)hash;	// IMP=0x000000000002afb1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002ae2f
- (void)writeTo:(id)arg1;	// IMP=0x000000000002ada8
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002ad9b
- (void)deleteLinkId;	// IMP=0x000000000002ad87
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x000000000032fdf2
- (id)suppressMessageUnderConditions;	// IMP=0x000000000032fdba

@end
