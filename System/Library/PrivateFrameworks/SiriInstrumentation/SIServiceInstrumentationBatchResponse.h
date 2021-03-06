//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface SIServiceInstrumentationBatchResponse
{
    NSData *_batch_id;	// 8 = 0x8
    int _status_code;	// 16 = 0x10
    NSString *_message;	// 24 = 0x18
    struct {
        unsigned int status_code:1;
    } _has;	// 32 = 0x20
    _Bool _hasBatch_id;	// 36 = 0x24
    _Bool _hasMessage;	// 37 = 0x25
}

- (void).cxx_destruct;	// IMP=0x00000000001a8f42
@property(nonatomic) _Bool hasMessage; // @synthesize hasMessage=_hasMessage;
@property(nonatomic) _Bool hasBatch_id; // @synthesize hasBatch_id=_hasBatch_id;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) int status_code; // @synthesize status_code=_status_code;
@property(copy, nonatomic) NSData *batch_id; // @synthesize batch_id=_batch_id;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001a8cec
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000001a8c2e
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001a89f7
- (unsigned long long)hash;	// IMP=0x00000000001a8984
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a8684
- (void)writeTo:(id)arg1;	// IMP=0x00000000001a85b0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001a8354
- (void)deleteMessage;	// IMP=0x00000000001a8340
- (void)deleteStatus_code;	// IMP=0x00000000001a8301
@property(nonatomic) _Bool hasStatus_code;
- (void)deleteBatch_id;	// IMP=0x00000000001a82a8
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003489c3

@end

