//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ICLLServerNoticeAction : PBCodable <NSCopying>
{
    NSString *_notice;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000015bc89
- (unsigned long long)hash;	// IMP=0x000000000015bc6c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015bbd2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015bb5a
- (void)writeTo:(id)arg1;	// IMP=0x000000000015bb36
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000015bb29
- (id)dictionaryRepresentation;	// IMP=0x000000000015bacd
- (id)description;	// IMP=0x000000000015ba1e

@end

