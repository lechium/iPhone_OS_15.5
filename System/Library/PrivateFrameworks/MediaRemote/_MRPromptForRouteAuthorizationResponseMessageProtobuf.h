//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MRPromptForRouteAuthorizationResponseMessageProtobuf : PBCodable <NSCopying>
{
    NSString *_response;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000cec38
- (unsigned long long)hash;	// IMP=0x00000000000cec02
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ceb68
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ceaf0
- (void)writeTo:(id)arg1;	// IMP=0x00000000000ceab2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000ceaa5
- (id)dictionaryRepresentation;	// IMP=0x00000000000ce8d7
- (id)description;	// IMP=0x00000000000ce828

@end

