//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface SISchemaPNRFatalErrorInfo
{
    NSString *_errorDomain;	// 8 = 0x8
    NSString *_errorCode;	// 16 = 0x10
    _Bool _hasErrorDomain;	// 24 = 0x18
    _Bool _hasErrorCode;	// 25 = 0x19
}

- (void).cxx_destruct;	// IMP=0x00000000002ae4c4
@property(nonatomic) _Bool hasErrorCode; // @synthesize hasErrorCode=_hasErrorCode;
@property(nonatomic) _Bool hasErrorDomain; // @synthesize hasErrorDomain=_hasErrorDomain;
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002ae2f4
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000002ae236
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000002ae093
- (unsigned long long)hash;	// IMP=0x00000000002ae046
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002add89
- (void)writeTo:(id)arg1;	// IMP=0x00000000002adcdb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002adcce
- (void)deleteErrorCode;	// IMP=0x00000000002adcba
- (void)deleteErrorDomain;	// IMP=0x00000000002adc91
- (id)suppressMessageUnderConditions;	// IMP=0x000000000035861e

@end

