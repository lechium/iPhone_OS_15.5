//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBTrendingLanguageConfig : PBCodable <NSCopying>
{
    NSString *_languageTag;	// 8 = 0x8
    NSMutableArray *_trendingTopics;	// 16 = 0x10
}

+ (Class)trendingTopicsType;	// IMP=0x00000000001ae5a7
- (void).cxx_destruct;	// IMP=0x00000000001aeeb2
@property(retain, nonatomic) NSMutableArray *trendingTopics; // @synthesize trendingTopics=_trendingTopics;
@property(retain, nonatomic) NSString *languageTag; // @synthesize languageTag=_languageTag;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001aecf0
- (unsigned long long)hash;	// IMP=0x00000000001aeca3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001aebdb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001aea02
- (void)writeTo:(id)arg1;	// IMP=0x00000000001ae8b6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001ae8a9
- (id)dictionaryRepresentation;	// IMP=0x00000000001ae667
- (id)description;	// IMP=0x00000000001ae5b8
- (id)trendingTopicsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001ae58a
- (unsigned long long)trendingTopicsCount;	// IMP=0x00000000001ae56d
- (void)addTrendingTopics:(id)arg1;	// IMP=0x00000000001ae503
- (void)clearTrendingTopics;	// IMP=0x00000000001ae4e6
@property(readonly, nonatomic) _Bool hasLanguageTag;

@end
