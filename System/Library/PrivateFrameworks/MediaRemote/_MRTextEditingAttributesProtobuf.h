//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString, _MRTextInputTraitsProtobuf;

__attribute__((visibility("hidden")))
@interface _MRTextEditingAttributesProtobuf : PBCodable <NSCopying>
{
    _MRTextInputTraitsProtobuf *_inputTraits;	// 8 = 0x8
    NSString *_prompt;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000f9044
- (unsigned long long)hash;	// IMP=0x00000000000f8f8c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f8e94
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f8dd0
- (void)writeTo:(id)arg1;	// IMP=0x00000000000f8d08
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000f8cfb
- (id)dictionaryRepresentation;	// IMP=0x00000000000f8a0d
- (id)description;	// IMP=0x00000000000f895e

@end

