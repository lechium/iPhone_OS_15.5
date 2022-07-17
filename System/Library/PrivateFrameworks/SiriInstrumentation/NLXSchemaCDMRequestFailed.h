//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface NLXSchemaCDMRequestFailed
{
    int _code;	// 8 = 0x8
    int _originalCode;	// 12 = 0xc
    int _errorCode;	// 16 = 0x10
    struct {
        unsigned int code:1;
        unsigned int originalCode:1;
        unsigned int errorCode:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) int originalCode; // @synthesize originalCode=_originalCode;
@property(nonatomic) int code; // @synthesize code=_code;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000801e2
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000080124
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000007fea0
- (unsigned long long)hash;	// IMP=0x000000000007fe3d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007fd21
- (void)writeTo:(id)arg1;	// IMP=0x000000000007fc91
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000007fc84
- (void)deleteErrorCode;	// IMP=0x000000000007fc5a
@property(nonatomic) _Bool hasErrorCode;
- (void)deleteOriginalCode;	// IMP=0x000000000007fbe5
@property(nonatomic) _Bool hasOriginalCode;
- (void)deleteCode;	// IMP=0x000000000007fb72
@property(nonatomic) _Bool hasCode;
- (id)suppressMessageUnderConditions;	// IMP=0x00000000003355d4

@end
