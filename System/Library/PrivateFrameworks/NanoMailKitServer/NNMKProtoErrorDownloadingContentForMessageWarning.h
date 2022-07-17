//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSString;

@interface NNMKProtoErrorDownloadingContentForMessageWarning : PBCodable <NSCopying>
{
    NSString *_messageId;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000028e53
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000028e0a
- (unsigned long long)hash;	// IMP=0x0000000000028ded
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000028d53
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000028cdb
- (void)copyTo:(id)arg1;	// IMP=0x0000000000028cb1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000028c8d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000028c80
- (id)dictionaryRepresentation;	// IMP=0x0000000000028ab2
- (id)description;	// IMP=0x0000000000028a03
@property(readonly, nonatomic) _Bool hasMessageId;

@end
