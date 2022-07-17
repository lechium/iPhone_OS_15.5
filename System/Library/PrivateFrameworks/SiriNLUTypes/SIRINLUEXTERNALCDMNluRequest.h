//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray, SIRINLUEXTERNALRequestID, SIRINLUEXTERNALTurnInput;

@interface SIRINLUEXTERNALCDMNluRequest : PBRequest <NSCopying>
{
    SIRINLUEXTERNALTurnInput *_currentTurnInput;	// 8 = 0x8
    NSMutableArray *_previousTurnInputs;	// 16 = 0x10
    SIRINLUEXTERNALRequestID *_requestId;	// 24 = 0x18
}

+ (Class)previousTurnInputsType;	// IMP=0x00000000000d6623
- (void).cxx_destruct;	// IMP=0x00000000000d742b
@property(retain, nonatomic) NSMutableArray *previousTurnInputs; // @synthesize previousTurnInputs=_previousTurnInputs;
@property(retain, nonatomic) SIRINLUEXTERNALTurnInput *currentTurnInput; // @synthesize currentTurnInput=_currentTurnInput;
@property(retain, nonatomic) SIRINLUEXTERNALRequestID *requestId; // @synthesize requestId=_requestId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000d71dc
- (unsigned long long)hash;	// IMP=0x00000000000d716f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d7077
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d6e71
- (void)copyTo:(id)arg1;	// IMP=0x00000000000d6d67
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d6bfe
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d6bf1
- (id)dictionaryRepresentation;	// IMP=0x00000000000d66e3
- (id)description;	// IMP=0x00000000000d6634
- (id)previousTurnInputsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d6606
- (unsigned long long)previousTurnInputsCount;	// IMP=0x00000000000d65e9
- (void)addPreviousTurnInputs:(id)arg1;	// IMP=0x00000000000d657f
- (void)clearPreviousTurnInputs;	// IMP=0x00000000000d6562
@property(readonly, nonatomic) _Bool hasCurrentTurnInput;
@property(readonly, nonatomic) _Bool hasRequestId;

@end
