//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface SIRINLUINTERNALAdjacentSpans : PBCodable <NSCopying>
{
    NSString *_captureGroupName;	// 8 = 0x8
    NSMutableArray *_spans;	// 16 = 0x10
}

+ (Class)spansType;	// IMP=0x0000000000089101
- (void).cxx_destruct;	// IMP=0x0000000000089d03
@property(retain, nonatomic) NSMutableArray *spans; // @synthesize spans=_spans;
@property(retain, nonatomic) NSString *captureGroupName; // @synthesize captureGroupName=_captureGroupName;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000089b41
- (unsigned long long)hash;	// IMP=0x0000000000089af4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000089a2c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000089853
- (void)copyTo:(id)arg1;	// IMP=0x0000000000089769
- (void)writeTo:(id)arg1;	// IMP=0x000000000008961d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000089610
- (id)dictionaryRepresentation;	// IMP=0x00000000000891c1
- (id)description;	// IMP=0x0000000000089112
- (id)spansAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000890e4
- (unsigned long long)spansCount;	// IMP=0x00000000000890c7
- (void)addSpans:(id)arg1;	// IMP=0x000000000008905d
- (void)clearSpans;	// IMP=0x0000000000089040
@property(readonly, nonatomic) _Bool hasCaptureGroupName;

@end
