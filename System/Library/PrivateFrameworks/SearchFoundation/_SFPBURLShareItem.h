//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBURLShareItem-Protocol.h>

@class NSData, NSString, _SFPBURL;

@interface _SFPBURLShareItem : PBCodable <_SFPBURLShareItem, NSSecureCoding>
{
    _SFPBURL *_urlValue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000a2272
@property(retain, nonatomic) _SFPBURL *urlValue; // @synthesize urlValue=_urlValue;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000a2164
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000a20a6
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000a1f3d
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a1d9e
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a1d36
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a1d29
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001e907c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

