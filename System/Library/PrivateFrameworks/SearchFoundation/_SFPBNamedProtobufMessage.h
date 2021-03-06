//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBNamedProtobufMessage-Protocol.h>

@class NSData, NSString;

@interface _SFPBNamedProtobufMessage : PBCodable <_SFPBNamedProtobufMessage, NSSecureCoding>
{
    NSData *_protobufMessageData;	// 8 = 0x8
    NSString *_protobufMessageName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b2ea7
@property(copy, nonatomic) NSString *protobufMessageName; // @synthesize protobufMessageName=_protobufMessageName;
@property(copy, nonatomic) NSData *protobufMessageData; // @synthesize protobufMessageData=_protobufMessageData;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000b2d08
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000b2c4a
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000b2a6f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b2765
- (void)writeTo:(id)arg1;	// IMP=0x00000000000b26c4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000b26b7
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001c7ca0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

