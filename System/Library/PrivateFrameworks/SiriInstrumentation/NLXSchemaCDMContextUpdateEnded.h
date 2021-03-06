//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaCDMContextUpdateEnded
{
    SISchemaUUID *_contextId;	// 8 = 0x8
    NSArray *_reformedTurnInputBundles;	// 16 = 0x10
    _Bool _hasContextId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000006e88d
@property(nonatomic) _Bool hasContextId; // @synthesize hasContextId=_hasContextId;
@property(copy, nonatomic) NSArray *reformedTurnInputBundles; // @synthesize reformedTurnInputBundles=_reformedTurnInputBundles;
@property(retain, nonatomic) SISchemaUUID *contextId; // @synthesize contextId=_contextId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000006e538
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000006e47a
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000006e0bd
- (unsigned long long)hash;	// IMP=0x000000000006e070
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006ddb3
- (void)writeTo:(id)arg1;	// IMP=0x000000000006dc28
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000006d6f1
- (id)reformedTurnInputBundlesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000006d6d4
- (unsigned long long)reformedTurnInputBundlesCount;	// IMP=0x000000000006d6b7
- (void)addReformedTurnInputBundles:(id)arg1;	// IMP=0x000000000006d63d
- (void)deleteReformedTurnInputBundles;	// IMP=0x000000000006d62b
- (void)clearReformedTurnInputBundles;	// IMP=0x000000000006d60e
- (void)deleteContextId;	// IMP=0x000000000006d5fa
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000333fc1
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000333f89

@end

