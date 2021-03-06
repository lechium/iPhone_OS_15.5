//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray, NSString, SIRINLUINTERNALCompareOptions;

@interface SIRINLUINTERNALUtteranceRule : PBCodable <NSCopying>
{
    SIRINLUINTERNALCompareOptions *_compareOptions;	// 8 = 0x8
    NSString *_pattern;	// 16 = 0x10
    NSMutableArray *_spansForNamedCaptureGroups;	// 24 = 0x18
    int _type;	// 32 = 0x20
    CDStruct_f953fb60 _has;	// 36 = 0x24
}

+ (Class)spansForNamedCaptureGroupsType;	// IMP=0x0000000000022993
- (void).cxx_destruct;	// IMP=0x0000000000023978
@property(retain, nonatomic) NSMutableArray *spansForNamedCaptureGroups; // @synthesize spansForNamedCaptureGroups=_spansForNamedCaptureGroups;
@property(retain, nonatomic) SIRINLUINTERNALCompareOptions *compareOptions; // @synthesize compareOptions=_compareOptions;
@property(retain, nonatomic) NSString *pattern; // @synthesize pattern=_pattern;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002373b
- (unsigned long long)hash;	// IMP=0x00000000000236a5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002357c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000023352
- (void)copyTo:(id)arg1;	// IMP=0x0000000000023228
- (void)writeTo:(id)arg1;	// IMP=0x0000000000023099
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002308c
- (id)dictionaryRepresentation;	// IMP=0x0000000000022a53
- (id)description;	// IMP=0x00000000000229a4
- (id)spansForNamedCaptureGroupsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000022976
- (unsigned long long)spansForNamedCaptureGroupsCount;	// IMP=0x0000000000022959
- (void)addSpansForNamedCaptureGroups:(id)arg1;	// IMP=0x00000000000228ef
- (void)clearSpansForNamedCaptureGroups;	// IMP=0x00000000000228d2
@property(readonly, nonatomic) _Bool hasCompareOptions;
- (int)StringAsType:(id)arg1;	// IMP=0x000000000002282b
- (id)typeAsString:(int)arg1;	// IMP=0x00000000000227c5
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool hasPattern;

@end

