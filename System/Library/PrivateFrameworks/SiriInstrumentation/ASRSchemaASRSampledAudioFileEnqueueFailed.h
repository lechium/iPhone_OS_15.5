//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString, SISchemaUUID;

@interface ASRSchemaASRSampledAudioFileEnqueueFailed
{
    SISchemaUUID *_originalAsrId;	// 8 = 0x8
    int _errorCode;	// 16 = 0x10
    NSString *_errorDomain;	// 24 = 0x18
    int _underlyingErrorCode;	// 32 = 0x20
    NSString *_underlyingErrorDomain;	// 40 = 0x28
    CDStruct_2818be66 _has;	// 48 = 0x30
    _Bool _hasOriginalAsrId;	// 52 = 0x34
    _Bool _hasErrorDomain;	// 53 = 0x35
    _Bool _hasUnderlyingErrorDomain;	// 54 = 0x36
}

- (void).cxx_destruct;	// IMP=0x000000000003a916
@property(nonatomic) _Bool hasUnderlyingErrorDomain; // @synthesize hasUnderlyingErrorDomain=_hasUnderlyingErrorDomain;
@property(nonatomic) _Bool hasErrorDomain; // @synthesize hasErrorDomain=_hasErrorDomain;
@property(nonatomic) _Bool hasOriginalAsrId; // @synthesize hasOriginalAsrId=_hasOriginalAsrId;
@property(copy, nonatomic) NSString *underlyingErrorDomain; // @synthesize underlyingErrorDomain=_underlyingErrorDomain;
@property(nonatomic) int underlyingErrorCode; // @synthesize underlyingErrorCode=_underlyingErrorCode;
@property(copy, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) SISchemaUUID *originalAsrId; // @synthesize originalAsrId=_originalAsrId;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000003a594
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000003a4d6
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000003a1bd
- (unsigned long long)hash;	// IMP=0x000000000003a0f9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000039c78
- (void)writeTo:(id)arg1;	// IMP=0x0000000000039b2a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000039b1d
- (void)deleteUnderlyingErrorDomain;	// IMP=0x0000000000039b09
- (void)deleteUnderlyingErrorCode;	// IMP=0x0000000000039aca
@property(nonatomic) _Bool hasUnderlyingErrorCode;
- (void)deleteErrorDomain;	// IMP=0x0000000000039a6d
- (void)deleteErrorCode;	// IMP=0x0000000000039a2e
@property(nonatomic) _Bool hasErrorCode;
- (void)deleteOriginalAsrId;	// IMP=0x00000000000399d5
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x00000000003310cf
- (id)suppressMessageUnderConditions;	// IMP=0x0000000000331097

@end
