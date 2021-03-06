//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSString, _MRErrorProtobuf, _MRSendCommandResultHandlerDialogProtobuf;

__attribute__((visibility("hidden")))
@interface _MRSendCommandResultStatusProtobuf : PBCodable <NSCopying>
{
    NSData *_customData;	// 8 = 0x8
    NSString *_customDataType;	// 16 = 0x10
    _MRSendCommandResultHandlerDialogProtobuf *_dialog;	// 24 = 0x18
    _MRErrorProtobuf *_error;	// 32 = 0x20
    int _statusCode;	// 40 = 0x28
    int _type;	// 44 = 0x2c
    struct {
        unsigned int statusCode:1;
        unsigned int type:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000171cc8
- (unsigned long long)hash;	// IMP=0x0000000000171b91
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000171a00
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001718d6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000171789
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000017177c
- (id)dictionaryRepresentation;	// IMP=0x0000000000171037
- (id)description;	// IMP=0x0000000000170f88

@end

