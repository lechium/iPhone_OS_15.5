//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface SUTSchemaTestExecutionEnd
{
}

- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002fcc2c
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002fcb6e
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002fcaa0
- (unsigned long long)hash;	// IMP=0x00000000002fca98
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002fca53
- (void)writeTo:(id)arg1;	// IMP=0x00000000002fca4d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002fc93b
- (id)suppressMessageUnderConditions;	// IMP=0x000000000035da75

@end

