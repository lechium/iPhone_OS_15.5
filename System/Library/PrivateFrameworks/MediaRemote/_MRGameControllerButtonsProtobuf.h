//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _MRGameControllerButtonsProtobuf : PBCodable <NSCopying>
{
    float _a;	// 8 = 0x8
    float _b;	// 12 = 0xc
    float _dPadX;	// 16 = 0x10
    float _dPadY;	// 20 = 0x14
    float _leftShoulder;	// 24 = 0x18
    float _leftThumbstickX;	// 28 = 0x1c
    float _leftThumbstickY;	// 32 = 0x20
    float _leftTrigger;	// 36 = 0x24
    float _pause;	// 40 = 0x28
    float _rightShoulder;	// 44 = 0x2c
    float _rightThumbstickX;	// 48 = 0x30
    float _rightThumbstickY;	// 52 = 0x34
    float _rightTrigger;	// 56 = 0x38
    float _x;	// 60 = 0x3c
    float _y;	// 64 = 0x40
    struct {
        unsigned int a:1;
        unsigned int b:1;
        unsigned int dPadX:1;
        unsigned int dPadY:1;
        unsigned int leftShoulder:1;
        unsigned int leftThumbstickX:1;
        unsigned int leftThumbstickY:1;
        unsigned int leftTrigger:1;
        unsigned int pause:1;
        unsigned int rightShoulder:1;
        unsigned int rightThumbstickX:1;
        unsigned int rightThumbstickY:1;
        unsigned int rightTrigger:1;
        unsigned int x:1;
        unsigned int y:1;
    } _has;	// 68 = 0x44
}

- (unsigned long long)hash;	// IMP=0x00000000001ec2cb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ebf59
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ebd3f
- (void)writeTo:(id)arg1;	// IMP=0x00000000001ebafd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001ebaf0
- (id)dictionaryRepresentation;	// IMP=0x00000000001eae1b
- (id)description;	// IMP=0x00000000001ead6c

@end

