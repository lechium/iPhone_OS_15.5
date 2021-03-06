//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, SISchemaSiriResponseContext;

@interface SISchemaUUFRCompletion
{
    int _completionStatus;	// 8 = 0x8
    NSArray *_homeKitAccessoryResponses;	// 16 = 0x10
    SISchemaSiriResponseContext *_siriResponseContext;	// 24 = 0x18
    struct {
        unsigned int completionStatus:1;
    } _has;	// 32 = 0x20
    _Bool _hasSiriResponseContext;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0000000000322d32
@property(nonatomic) _Bool hasSiriResponseContext; // @synthesize hasSiriResponseContext=_hasSiriResponseContext;
@property(retain, nonatomic) SISchemaSiriResponseContext *siriResponseContext; // @synthesize siriResponseContext=_siriResponseContext;
@property(copy, nonatomic) NSArray *homeKitAccessoryResponses; // @synthesize homeKitAccessoryResponses=_homeKitAccessoryResponses;
@property(nonatomic) int completionStatus; // @synthesize completionStatus=_completionStatus;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000032296e
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000003228b0
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000322459
- (unsigned long long)hash;	// IMP=0x00000000003223d9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003220f7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000321f32
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000321f25
- (void)deleteSiriResponseContext;	// IMP=0x0000000000321f11
- (id)homeKitAccessoryResponseAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000321edf
- (unsigned long long)homeKitAccessoryResponseCount;	// IMP=0x0000000000321ec2
- (void)addHomeKitAccessoryResponse:(id)arg1;	// IMP=0x0000000000321e48
- (void)deleteHomeKitAccessoryResponse;	// IMP=0x0000000000321e36
- (void)clearHomeKitAccessoryResponse;	// IMP=0x0000000000321e19
- (void)deleteCompletionStatus;	// IMP=0x0000000000321def
@property(nonatomic) _Bool hasCompletionStatus;
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x00000000003603f9
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003603c1

@end

