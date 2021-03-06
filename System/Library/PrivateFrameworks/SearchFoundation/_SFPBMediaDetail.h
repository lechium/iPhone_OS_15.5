//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBMediaDetail-Protocol.h>

@class NSData, NSString, _SFPBText;

@interface _SFPBMediaDetail : PBCodable <_SFPBMediaDetail, NSSecureCoding>
{
    NSString *_title;	// 8 = 0x8
    _SFPBText *_content;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000014637c
@property(retain, nonatomic) _SFPBText *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000001461df
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000146121
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000145f48
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000145c3e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000145b9d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000145b90
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001c783c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

