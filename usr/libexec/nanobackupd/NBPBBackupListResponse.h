//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

@interface NBPBBackupListResponse : PBCodable
{
    NSMutableArray *_backups;	// 8 = 0x8
    NSData *_error;	// 16 = 0x10
}

+ (Class)backupsType;	// IMP=0x0020000000020866
- (void).cxx_destruct;	// IMP=0x00200000000214d7
@property(retain, nonatomic) NSData *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableArray *backups; // @synthesize backups=_backups;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000021313
- (unsigned long long)hash;	// IMP=0x00100000000212c6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000211fe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000020ff2
- (void)copyTo:(id)arg1;	// IMP=0x0010000000020f08
- (void)writeTo:(id)arg1;	// IMP=0x0010000000020da8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000020d9b
- (id)dictionaryRepresentation;	// IMP=0x001000000002093b
- (id)description;	// IMP=0x001000000002088c
@property(readonly, nonatomic) _Bool hasError;
- (id)backupsAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000020849
- (unsigned long long)backupsCount;	// IMP=0x001000000002082c
- (void)addBackups:(id)arg1;	// IMP=0x00100000000207c2
- (void)clearBackups;	// IMP=0x00100000000207a5

@end
