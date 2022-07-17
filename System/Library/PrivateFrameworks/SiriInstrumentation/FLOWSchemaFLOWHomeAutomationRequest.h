//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FLOWSchemaFLOWHomeAutomationRequestMetadata, NSArray, NSData, SISchemaUUID;

@interface FLOWSchemaFLOWHomeAutomationRequest
{
    SISchemaUUID *_homeAutomationRequestId;	// 8 = 0x8
    int _homeAutomationRequestType;	// 16 = 0x10
    int _homeAutomationRequestOutcome;	// 20 = 0x14
    NSArray *_homeAutomationRequestErrorReasons;	// 24 = 0x18
    unsigned int _homeAutomationRequestDuration;	// 32 = 0x20
    FLOWSchemaFLOWHomeAutomationRequestMetadata *_homeAutomationRequestMetadata;	// 40 = 0x28
    struct {
        unsigned int homeAutomationRequestType:1;
        unsigned int homeAutomationRequestOutcome:1;
        unsigned int homeAutomationRequestDuration:1;
    } _has;	// 48 = 0x30
    _Bool _hasHomeAutomationRequestId;	// 52 = 0x34
    _Bool _hasHomeAutomationRequestMetadata;	// 53 = 0x35
}

- (void).cxx_destruct;	// IMP=0x000000000014a857
@property(nonatomic) _Bool hasHomeAutomationRequestMetadata; // @synthesize hasHomeAutomationRequestMetadata=_hasHomeAutomationRequestMetadata;
@property(nonatomic) _Bool hasHomeAutomationRequestId; // @synthesize hasHomeAutomationRequestId=_hasHomeAutomationRequestId;
@property(retain, nonatomic) FLOWSchemaFLOWHomeAutomationRequestMetadata *homeAutomationRequestMetadata; // @synthesize homeAutomationRequestMetadata=_homeAutomationRequestMetadata;
@property(nonatomic) unsigned int homeAutomationRequestDuration; // @synthesize homeAutomationRequestDuration=_homeAutomationRequestDuration;
@property(copy, nonatomic) NSArray *homeAutomationRequestErrorReasons; // @synthesize homeAutomationRequestErrorReasons=_homeAutomationRequestErrorReasons;
@property(nonatomic) int homeAutomationRequestOutcome; // @synthesize homeAutomationRequestOutcome=_homeAutomationRequestOutcome;
@property(nonatomic) int homeAutomationRequestType; // @synthesize homeAutomationRequestType=_homeAutomationRequestType;
@property(retain, nonatomic) SISchemaUUID *homeAutomationRequestId; // @synthesize homeAutomationRequestId=_homeAutomationRequestId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000014a2ce
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000014a210
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000149dce
- (unsigned long long)hash;	// IMP=0x0000000000149cef
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000014982b
- (void)writeTo:(id)arg1;	// IMP=0x00000000001495c4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000149072
- (void)deleteHomeAutomationRequestMetadata;	// IMP=0x000000000014905e
- (void)deleteHomeAutomationRequestDuration;	// IMP=0x000000000014901f
@property(nonatomic) _Bool hasHomeAutomationRequestDuration;
- (id)homeAutomationRequestErrorReasonAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000148fb7
- (unsigned long long)homeAutomationRequestErrorReasonCount;	// IMP=0x0000000000148f9a
- (void)addHomeAutomationRequestErrorReason:(id)arg1;	// IMP=0x0000000000148f20
- (void)deleteHomeAutomationRequestErrorReason;	// IMP=0x0000000000148f0e
- (void)clearHomeAutomationRequestErrorReason;	// IMP=0x0000000000148ef1
- (void)deleteHomeAutomationRequestOutcome;	// IMP=0x0000000000148ec7
@property(nonatomic) _Bool hasHomeAutomationRequestOutcome;
- (void)deleteHomeAutomationRequestType;	// IMP=0x0000000000148e54
@property(nonatomic) _Bool hasHomeAutomationRequestType;
- (void)deleteHomeAutomationRequestId;	// IMP=0x0000000000148dfb
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000343408
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003433d0

@end
