//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRGameControllerPropertiesProtobuf;

__attribute__((visibility("hidden")))
@interface _MRGameControllerPropertiesMessageProtobuf : PBCodable <NSCopying>
{
    unsigned long long _controllerID;	// 8 = 0x8
    _MRGameControllerPropertiesProtobuf *_properties;	// 16 = 0x10
    CDStruct_669c4a63 _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000008a0c
- (unsigned long long)hash;	// IMP=0x0000000000008990
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000088cb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000883a
- (void)writeTo:(id)arg1;	// IMP=0x00000000000087bb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000087ae
- (id)dictionaryRepresentation;	// IMP=0x0000000000008462
- (id)description;	// IMP=0x00000000000083b3

@end
