//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCCKPRecord, FCCKPRecordIdentifier, NSString;

__attribute__((visibility("hidden")))
@interface FCCKPQueryRetrieveResponseQueryResult : PBCodable <NSCopying>
{
    NSString *_etag;	// 8 = 0x8
    FCCKPRecordIdentifier *_identifier;	// 16 = 0x10
    FCCKPRecord *_record;	// 24 = 0x18
    int _type;	// 32 = 0x20
    CDStruct_f953fb60 _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x00000000002cf091
- (unsigned long long)hash;	// IMP=0x00000000002cf002
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ceed9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002cedef
- (void)writeTo:(id)arg1;	// IMP=0x00000000002ced51
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002ced44
- (id)dictionaryRepresentation;	// IMP=0x00000000002ce8eb
- (id)description;	// IMP=0x00000000002ce83c

@end
