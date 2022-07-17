//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSString;

@interface CKDPRecordType : PBCodable <NSCopying>
{
    NSString *_name;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000298528
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002984df
- (unsigned long long)hash;	// IMP=0x00000000002984c2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000298428
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002983b0
- (void)copyTo:(id)arg1;	// IMP=0x0000000000298386
- (void)writeTo:(id)arg1;	// IMP=0x0000000000298362
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000298355
- (id)dictionaryRepresentation;	// IMP=0x0000000000298189
- (id)description;	// IMP=0x00000000002980da
@property(readonly, nonatomic) _Bool hasName;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;	// IMP=0x000000000017e589

@end
