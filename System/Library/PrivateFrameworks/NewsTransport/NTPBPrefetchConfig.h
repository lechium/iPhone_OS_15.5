//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@interface NTPBPrefetchConfig : PBCodable <NSCopying>
{
    double _backgroundFetchMinimumInterval;	// 8 = 0x8
    long long _feedPrefetchFavoritesLimit;	// 16 = 0x10
    long long _prefetchedForYouExpiration;	// 24 = 0x18
    _Bool _backgroundFetchEnabled;	// 32 = 0x20
    _Bool _backgroundFetchEnabled2;	// 33 = 0x21
    _Bool _feedPrefetchForYou;	// 34 = 0x22
    struct {
        unsigned int backgroundFetchMinimumInterval:1;
        unsigned int feedPrefetchFavoritesLimit:1;
        unsigned int prefetchedForYouExpiration:1;
        unsigned int backgroundFetchEnabled:1;
        unsigned int backgroundFetchEnabled2:1;
        unsigned int feedPrefetchForYou:1;
    } _has;	// 36 = 0x24
}

@property(nonatomic) long long prefetchedForYouExpiration; // @synthesize prefetchedForYouExpiration=_prefetchedForYouExpiration;
@property(nonatomic) _Bool backgroundFetchEnabled2; // @synthesize backgroundFetchEnabled2=_backgroundFetchEnabled2;
@property(nonatomic) long long feedPrefetchFavoritesLimit; // @synthesize feedPrefetchFavoritesLimit=_feedPrefetchFavoritesLimit;
@property(nonatomic) _Bool feedPrefetchForYou; // @synthesize feedPrefetchForYou=_feedPrefetchForYou;
@property(nonatomic) double backgroundFetchMinimumInterval; // @synthesize backgroundFetchMinimumInterval=_backgroundFetchMinimumInterval;
@property(nonatomic) _Bool backgroundFetchEnabled; // @synthesize backgroundFetchEnabled=_backgroundFetchEnabled;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000021fdd5
- (unsigned long long)hash;	// IMP=0x000000000021fc24
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000021faa2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000021f9b9
- (void)writeTo:(id)arg1;	// IMP=0x000000000021f8c5
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000021f8b8
- (id)dictionaryRepresentation;	// IMP=0x000000000021f1a1
- (id)description;	// IMP=0x000000000021f0f2
@property(nonatomic) _Bool hasPrefetchedForYouExpiration;
@property(nonatomic) _Bool hasBackgroundFetchEnabled2;
@property(nonatomic) _Bool hasFeedPrefetchFavoritesLimit;
@property(nonatomic) _Bool hasFeedPrefetchForYou;
@property(nonatomic) _Bool hasBackgroundFetchMinimumInterval;
@property(nonatomic) _Bool hasBackgroundFetchEnabled;

@end
