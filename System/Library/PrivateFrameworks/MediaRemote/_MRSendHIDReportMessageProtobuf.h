//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface _MRSendHIDReportMessageProtobuf : PBCodable <NSCopying>
{
    NSData *_report;	// 8 = 0x8
    NSString *_virtualDeviceID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f8600
- (unsigned long long)hash;	// IMP=0x00000000000f85b3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f84eb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f844d
- (void)writeTo:(id)arg1;	// IMP=0x00000000000f83f0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000f83e3
- (id)dictionaryRepresentation;	// IMP=0x00000000000f81ce
- (id)description;	// IMP=0x00000000000f811f

@end
