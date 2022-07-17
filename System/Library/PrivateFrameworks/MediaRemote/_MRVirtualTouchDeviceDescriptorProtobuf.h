//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _MRVirtualTouchDeviceDescriptorProtobuf : PBCodable <NSCopying>
{
    float _screenSizeHeight;	// 8 = 0x8
    float _screenSizeWidth;	// 12 = 0xc
    _Bool _absolute;	// 16 = 0x10
    _Bool _integratedDisplay;	// 17 = 0x11
    struct {
        unsigned int screenSizeHeight:1;
        unsigned int screenSizeWidth:1;
        unsigned int absolute:1;
        unsigned int integratedDisplay:1;
    } _has;	// 20 = 0x14
}

- (unsigned long long)hash;	// IMP=0x00000000000de851
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000de733
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000de67c
- (void)writeTo:(id)arg1;	// IMP=0x00000000000de5c5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000de5b8
- (id)dictionaryRepresentation;	// IMP=0x00000000000de09b
- (id)description;	// IMP=0x00000000000ddfec

@end
