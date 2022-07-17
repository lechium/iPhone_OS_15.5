//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>

@class NSString, SYErrorInfo, SYMessageHeader;

@interface SYBatchSyncEnd : PBCodable <NSCopying>
{
    SYErrorInfo *_error;	// 8 = 0x8
    SYMessageHeader *_header;	// 16 = 0x10
    NSString *_syncID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005db71
@property(retain, nonatomic) SYErrorInfo *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *syncID; // @synthesize syncID=_syncID;
@property(retain, nonatomic) SYMessageHeader *header; // @synthesize header=_header;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000005da51
- (unsigned long long)hash;	// IMP=0x000000000005d9e4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005d8ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005d828
- (void)copyTo:(id)arg1;	// IMP=0x000000000005d7a5
- (void)writeTo:(id)arg1;	// IMP=0x000000000005d721
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000005d714
- (id)dictionaryRepresentation;	// IMP=0x000000000005d3d1
- (id)description;	// IMP=0x000000000005d322
@property(readonly, nonatomic) _Bool hasError;

@end
