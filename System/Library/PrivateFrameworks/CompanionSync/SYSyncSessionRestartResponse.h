//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>

@class NSString, SYErrorInfo, SYMessageHeader;

@interface SYSyncSessionRestartResponse : PBCodable <NSCopying>
{
    SYErrorInfo *_error;	// 8 = 0x8
    SYMessageHeader *_header;	// 16 = 0x10
    NSString *_sessionID;	// 24 = 0x18
    _Bool _accepted;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000006a322
@property(retain, nonatomic) SYErrorInfo *error; // @synthesize error=_error;
@property(nonatomic) _Bool accepted; // @synthesize accepted=_accepted;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) SYMessageHeader *header; // @synthesize header=_header;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000006a1d4
- (unsigned long long)hash;	// IMP=0x000000000006a14b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006a035
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000069f5f
- (void)copyTo:(id)arg1;	// IMP=0x0000000000069ece
- (void)writeTo:(id)arg1;	// IMP=0x0000000000069e31
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000069e24
- (id)dictionaryRepresentation;	// IMP=0x00000000000699e4
- (id)description;	// IMP=0x0000000000069935
@property(readonly, nonatomic) _Bool hasError;

@end

