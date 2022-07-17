//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray, SIRINLUEXTERNALRequestID, SIRINLUEXTERNALResponseStatus;

@interface SIRINLUEXTERNALCDMNluResponse : PBCodable <NSCopying>
{
    NSMutableArray *_parses;	// 8 = 0x8
    NSMutableArray *_repetitionResults;	// 16 = 0x10
    SIRINLUEXTERNALRequestID *_requestId;	// 24 = 0x18
    SIRINLUEXTERNALResponseStatus *_responseStatus;	// 32 = 0x20
}

+ (Class)repetitionResultsType;	// IMP=0x00000000000b1799
+ (Class)parsesType;	// IMP=0x00000000000b16b2
- (void).cxx_destruct;	// IMP=0x00000000000b2c05
@property(retain, nonatomic) NSMutableArray *repetitionResults; // @synthesize repetitionResults=_repetitionResults;
@property(retain, nonatomic) SIRINLUEXTERNALResponseStatus *responseStatus; // @synthesize responseStatus=_responseStatus;
@property(retain, nonatomic) NSMutableArray *parses; // @synthesize parses=_parses;
@property(retain, nonatomic) SIRINLUEXTERNALRequestID *requestId; // @synthesize requestId=_requestId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000b28bf
- (unsigned long long)hash;	// IMP=0x00000000000b283b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b270f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b23c9
- (void)copyTo:(id)arg1;	// IMP=0x00000000000b2222
- (void)writeTo:(id)arg1;	// IMP=0x00000000000b1fd1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000b1fc4
- (id)dictionaryRepresentation;	// IMP=0x00000000000b1859
- (id)description;	// IMP=0x00000000000b17aa
- (id)repetitionResultsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000b177c
- (unsigned long long)repetitionResultsCount;	// IMP=0x00000000000b175f
- (void)addRepetitionResults:(id)arg1;	// IMP=0x00000000000b16f5
- (void)clearRepetitionResults;	// IMP=0x00000000000b16d8
@property(readonly, nonatomic) _Bool hasResponseStatus;
- (id)parsesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000b1695
- (unsigned long long)parsesCount;	// IMP=0x00000000000b1678
- (void)addParses:(id)arg1;	// IMP=0x00000000000b160e
- (void)clearParses;	// IMP=0x00000000000b15f1
@property(readonly, nonatomic) _Bool hasRequestId;

@end
