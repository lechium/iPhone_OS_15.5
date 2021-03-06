//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBPointSize-Protocol.h>

@class NSData, NSString, _SFPBGraphicalFloat;

@interface _SFPBPointSize : PBCodable <_SFPBPointSize, NSSecureCoding>
{
    _SFPBGraphicalFloat *_width;	// 8 = 0x8
    _SFPBGraphicalFloat *_height;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000663d4
@property(retain, nonatomic) _SFPBGraphicalFloat *height; // @synthesize height=_height;
@property(retain, nonatomic) _SFPBGraphicalFloat *width; // @synthesize width=_width;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000066228
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000006616a
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000065f48
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000065c3e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000065b9d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000065b90
- (id)initWithCGSize:(struct CGSize)arg1;	// IMP=0x00000000001d1070

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

