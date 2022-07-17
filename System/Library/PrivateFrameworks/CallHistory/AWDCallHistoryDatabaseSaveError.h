//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CallHistory/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDCallHistoryDatabaseSaveError : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    unsigned int _domain;	// 16 = 0x10
    unsigned int _error;	// 20 = 0x14
    NSString *_table;	// 24 = 0x18
    CDStruct_6e486683 _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000021a58
@property(retain, nonatomic) NSString *table; // @synthesize table=_table;
@property(nonatomic) unsigned int error; // @synthesize error=_error;
@property(nonatomic) unsigned int domain; // @synthesize domain=_domain;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000021966
- (unsigned long long)hash;	// IMP=0x00000000000218e3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000217d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002170f
- (void)copyTo:(id)arg1;	// IMP=0x0000000000021673
- (void)writeTo:(id)arg1;	// IMP=0x00000000000215c5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000215b8
- (id)dictionaryRepresentation;	// IMP=0x00000000000210d6
- (id)description;	// IMP=0x0000000000021027
@property(readonly, nonatomic) _Bool hasTable;
@property(nonatomic) _Bool hasError;
@property(nonatomic) _Bool hasDomain;
@property(nonatomic) _Bool hasTimestamp;

@end
