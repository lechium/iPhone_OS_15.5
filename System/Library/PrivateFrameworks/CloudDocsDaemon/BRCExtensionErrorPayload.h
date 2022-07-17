//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudDocsDaemon/NSCopying-Protocol.h>

@class NSString;

@interface BRCExtensionErrorPayload : PBCodable <NSCopying>
{
    NSString *_minimumOSName;	// 8 = 0x8
    NSString *_recordId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000474a2
@property(retain, nonatomic) NSString *recordId; // @synthesize recordId=_recordId;
@property(retain, nonatomic) NSString *minimumOSName; // @synthesize minimumOSName=_minimumOSName;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000473f5
- (unsigned long long)hash;	// IMP=0x00000000000473a8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000472e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000047242
- (void)copyTo:(id)arg1;	// IMP=0x00000000000471df
- (void)writeTo:(id)arg1;	// IMP=0x0000000000047182
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000047175
- (id)dictionaryRepresentation;	// IMP=0x0000000000046f5e
- (id)description;	// IMP=0x0000000000046eaf
@property(readonly, nonatomic) _Bool hasRecordId;
@property(readonly, nonatomic) _Bool hasMinimumOSName;

@end
