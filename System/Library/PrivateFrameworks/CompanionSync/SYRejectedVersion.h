//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>

@class NSString, SYMessageHeader;

@interface SYRejectedVersion : PBCodable <NSCopying>
{
    struct {
        unsigned int *list;
        unsigned long long count;
        unsigned long long size;
    } _supportedVersions;	// 8 = 0x8
    SYMessageHeader *_header;	// 32 = 0x20
    NSString *_inReplyTo;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000079bac
@property(retain, nonatomic) NSString *inReplyTo; // @synthesize inReplyTo=_inReplyTo;
@property(retain, nonatomic) SYMessageHeader *header; // @synthesize header=_header;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000079a79
- (unsigned long long)hash;	// IMP=0x0000000000079a17
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000079938
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000079887
- (void)copyTo:(id)arg1;	// IMP=0x000000000007979d
- (void)writeTo:(id)arg1;	// IMP=0x00000000000796ff
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000796f2
- (id)dictionaryRepresentation;	// IMP=0x0000000000079295
- (id)description;	// IMP=0x00000000000791e6
- (void)setSupportedVersions:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000791cf
- (unsigned int)supportedVersionsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000079102
- (void)addSupportedVersions:(unsigned int)arg1;	// IMP=0x00000000000790ef
- (void)clearSupportedVersions;	// IMP=0x00000000000790de
@property(readonly, nonatomic) unsigned int *supportedVersions;
@property(readonly, nonatomic) unsigned long long supportedVersionsCount;
- (void)dealloc;	// IMP=0x000000000007907b

@end

