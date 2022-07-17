//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>

@class NSString, SYErrorInfo, SYMessageHeader;

@interface SYEndSyncSession : PBCodable <NSCopying>
{
    SYErrorInfo *_error;	// 8 = 0x8
    SYMessageHeader *_header;	// 16 = 0x10
    NSString *_sessionID;	// 24 = 0x18
    _Bool _rollback;	// 32 = 0x20
    struct {
        unsigned int rollback:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0000000000031568
@property(nonatomic) _Bool rollback; // @synthesize rollback=_rollback;
@property(retain, nonatomic) SYErrorInfo *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) SYMessageHeader *header; // @synthesize header=_header;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000031418
- (unsigned long long)hash;	// IMP=0x000000000003137e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000031249
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000031165
- (void)copyTo:(id)arg1;	// IMP=0x00000000000310c2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000031019
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003100c
- (id)dictionaryRepresentation;	// IMP=0x0000000000030bbd
- (id)description;	// IMP=0x0000000000030b0e
@property(nonatomic) _Bool hasRollback;
@property(readonly, nonatomic) _Bool hasError;

@end
