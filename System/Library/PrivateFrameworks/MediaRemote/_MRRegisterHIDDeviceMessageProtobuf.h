//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRVirtualTouchDeviceDescriptorProtobuf;

__attribute__((visibility("hidden")))
@interface _MRRegisterHIDDeviceMessageProtobuf : PBCodable <NSCopying>
{
    _MRVirtualTouchDeviceDescriptorProtobuf *_deviceDescriptor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000265f8f
- (unsigned long long)hash;	// IMP=0x0000000000265f59
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000265ebf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000265e47
- (void)writeTo:(id)arg1;	// IMP=0x0000000000265e09
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000265dfc
- (id)dictionaryRepresentation;	// IMP=0x0000000000265bb1
- (id)description;	// IMP=0x0000000000265b02

@end
