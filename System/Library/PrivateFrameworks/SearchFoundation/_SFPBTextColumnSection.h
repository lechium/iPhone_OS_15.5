//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBTextColumnSection-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBTextColumnSection : PBCodable <_SFPBTextColumnSection, NSSecureCoding>
{
    _Bool _textNoWrap;	// 8 = 0x8
    unsigned int _textWeight;	// 12 = 0xc
    NSArray *_textLines;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000011d823
@property(nonatomic) unsigned int textWeight; // @synthesize textWeight=_textWeight;
@property(nonatomic) _Bool textNoWrap; // @synthesize textNoWrap=_textNoWrap;
@property(copy, nonatomic) NSArray *textLines; // @synthesize textLines=_textLines;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000011d4c6
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000011d408
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000011d218
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011cff3
- (void)writeTo:(id)arg1;	// IMP=0x000000000011ce67
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000011ce5a
- (id)textLinesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000011ce1d
- (unsigned long long)textLinesCount;	// IMP=0x000000000011ce00
- (void)addTextLines:(id)arg1;	// IMP=0x000000000011cd86
- (void)clearTextLines;	// IMP=0x000000000011cd69
- (id)initWithFacade:(id)arg1;	// IMP=0x0000000000018c38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

