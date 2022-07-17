//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PeopleSuggester/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface CAPContactFillerContactFillerEventForShare : PBCodable <NSCopying>
{
    NSString *_sessionId;	// 8 = 0x8
    NSMutableArray *_shareEvents;	// 16 = 0x10
}

+ (Class)shareEventsType;	// IMP=0x00000000000297a5
- (void).cxx_destruct;	// IMP=0x000000000002a3a2
@property(retain, nonatomic) NSMutableArray *shareEvents; // @synthesize shareEvents=_shareEvents;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002a1e0
- (unsigned long long)hash;	// IMP=0x000000000002a193
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002a0cb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000029ef2
- (void)copyTo:(id)arg1;	// IMP=0x0000000000029e16
- (void)writeTo:(id)arg1;	// IMP=0x0000000000029cc1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000029cb4
- (id)dictionaryRepresentation;	// IMP=0x0000000000029865
- (id)description;	// IMP=0x00000000000297b6
- (id)shareEventsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000029788
- (unsigned long long)shareEventsCount;	// IMP=0x000000000002976b
- (void)addShareEvents:(id)arg1;	// IMP=0x0000000000029701
- (void)clearShareEvents;	// IMP=0x00000000000296e4

@end
