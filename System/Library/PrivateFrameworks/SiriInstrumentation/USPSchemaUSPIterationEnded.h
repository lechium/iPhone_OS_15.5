//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface USPSchemaUSPIterationEnded
{
}

- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000031d58a
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000031d4cc
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000031d3fe
- (unsigned long long)hash;	// IMP=0x000000000031d3f6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000031d3b1
- (void)writeTo:(id)arg1;	// IMP=0x000000000031d3ab
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000031d39e
- (id)suppressMessageUnderConditions;	// IMP=0x000000000035ffca

@end
