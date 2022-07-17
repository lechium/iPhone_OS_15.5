//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRGameControllerButtonsProtobuf, _MRGameControllerDigitizerProtobuf, _MRGameControllerMotionProtobuf;

__attribute__((visibility("hidden")))
@interface _MRGameControllerMessageProtobuf : PBCodable <NSCopying>
{
    unsigned long long _controllerID;	// 8 = 0x8
    _MRGameControllerButtonsProtobuf *_buttons;	// 16 = 0x10
    _MRGameControllerDigitizerProtobuf *_digitizer;	// 24 = 0x18
    _MRGameControllerMotionProtobuf *_motion;	// 32 = 0x20
    CDStruct_669c4a63 _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000025c01d
- (unsigned long long)hash;	// IMP=0x000000000025bf22
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000025bdf2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025bd0a
- (void)writeTo:(id)arg1;	// IMP=0x000000000025bc1d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000025bc10
- (id)dictionaryRepresentation;	// IMP=0x000000000025b776
- (id)description;	// IMP=0x000000000025b6c7

@end
