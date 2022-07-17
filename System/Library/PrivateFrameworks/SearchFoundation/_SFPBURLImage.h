//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBURLImage-Protocol.h>

@class NSData, NSString, _SFPBURL;

@interface _SFPBURLImage : PBCodable <_SFPBURLImage, NSSecureCoding>
{
    _SFPBURL *_urlValue;	// 8 = 0x8
    _SFPBURL *_darkUrlValue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006591c
@property(retain, nonatomic) _SFPBURL *darkUrlValue; // @synthesize darkUrlValue=_darkUrlValue;
@property(retain, nonatomic) _SFPBURL *urlValue; // @synthesize urlValue=_urlValue;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000065770
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000656b2
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000065490
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000065186
- (void)writeTo:(id)arg1;	// IMP=0x00000000000650e5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000650d8
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001f2eff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
