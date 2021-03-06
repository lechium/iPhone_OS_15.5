//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBText-Protocol.h>

@class NSData, NSString;

@interface _SFPBText : PBCodable <_SFPBText, NSSecureCoding>
{
    unsigned int _maxLines;	// 8 = 0x8
    NSString *_text;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000082095
@property(nonatomic) unsigned int maxLines; // @synthesize maxLines=_maxLines;
@property(copy) NSString *text; // @synthesize text=_text;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000081f0e
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000081e50
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000081cc4
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000081ae1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000081a59
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000081a4c
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001f3baf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

