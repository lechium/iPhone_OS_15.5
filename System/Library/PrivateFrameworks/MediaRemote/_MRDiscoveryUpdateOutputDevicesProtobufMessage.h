//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray, _MRDiscoverySessionConfigurationProtobuf;

__attribute__((visibility("hidden")))
@interface _MRDiscoveryUpdateOutputDevicesProtobufMessage : PBCodable <NSCopying>
{
    _MRDiscoverySessionConfigurationProtobuf *_configuration;	// 8 = 0x8
    NSMutableArray *_outputDevices;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d07df
- (unsigned long long)hash;	// IMP=0x00000000000d0746
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d067e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d04a1
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d0327
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d031a
- (id)dictionaryRepresentation;	// IMP=0x00000000000cfe7f
- (id)description;	// IMP=0x00000000000cfdd0

@end

