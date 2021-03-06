//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBKeyValueTuple-Protocol.h>

@class NSData, NSString;

@interface _SFPBKeyValueTuple : PBCodable <_SFPBKeyValueTuple, NSSecureCoding>
{
    NSString *_key;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001218d7
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000121749
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000012168b
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000001214fb
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001211f1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000121150
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000121143
- (id)initWithFacade:(id)arg1;	// IMP=0x0000000000180e60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

