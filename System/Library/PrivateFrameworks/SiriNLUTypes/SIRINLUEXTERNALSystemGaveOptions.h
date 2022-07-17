//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@class NSMutableArray;

@interface SIRINLUEXTERNALSystemGaveOptions : PBCodable <NSCopying>
{
    NSMutableArray *_choices;	// 8 = 0x8
}

+ (Class)choicesType;	// IMP=0x00000000000964ec
- (void).cxx_destruct;	// IMP=0x0000000000096f81
@property(retain, nonatomic) NSMutableArray *choices; // @synthesize choices=_choices;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000096e27
- (unsigned long long)hash;	// IMP=0x0000000000096e0a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000096d70
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000096bad
- (void)copyTo:(id)arg1;	// IMP=0x0000000000096ae6
- (void)writeTo:(id)arg1;	// IMP=0x00000000000969b6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000969a9
- (id)dictionaryRepresentation;	// IMP=0x00000000000965ac
- (id)description;	// IMP=0x00000000000964fd
- (id)choicesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000964cf
- (unsigned long long)choicesCount;	// IMP=0x00000000000964b2
- (void)addChoices:(id)arg1;	// IMP=0x0000000000096448
- (void)clearChoices;	// IMP=0x000000000009642b

@end
