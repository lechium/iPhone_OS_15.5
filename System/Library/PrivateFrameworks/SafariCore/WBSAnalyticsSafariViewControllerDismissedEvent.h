//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@interface WBSAnalyticsSafariViewControllerDismissedEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _method;	// 16 = 0x10
    CDStruct_64f0786c _has;	// 20 = 0x14
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002a1eb
- (unsigned long long)hash;	// IMP=0x000000000002a1a5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002a0f2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002a073
- (void)copyTo:(id)arg1;	// IMP=0x000000000002a017
- (void)writeTo:(id)arg1;	// IMP=0x0000000000029fa5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000029f98
- (id)dictionaryRepresentation;	// IMP=0x0000000000029bca
- (id)description;	// IMP=0x0000000000029b1b
- (int)StringAsMethod:(id)arg1;	// IMP=0x0000000000029a6c
- (id)methodAsString:(int)arg1;	// IMP=0x00000000000299ee
@property(nonatomic) _Bool hasMethod;
@property(nonatomic) int method; // @synthesize method=_method;
@property(nonatomic) _Bool hasTimestamp;

@end

