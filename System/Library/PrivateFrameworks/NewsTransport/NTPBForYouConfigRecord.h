//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString, NTPBRecordBase;

@interface NTPBForYouConfigRecord : PBCodable <NSCopying>
{
    NTPBRecordBase *_base;	// 8 = 0x8
    NSString *_configuration;	// 16 = 0x10
    NSMutableArray *_editorialArticleListIDs;	// 24 = 0x18
    NSMutableArray *_editorialSectionTagIDs;	// 32 = 0x20
    NSString *_spotlightArticleID;	// 40 = 0x28
    NSString *_todayFeedConfiguration;	// 48 = 0x30
    NSMutableArray *_todayFeedTopStoriesArticleIDs;	// 56 = 0x38
    NSString *_trendingArticleListID;	// 64 = 0x40
}

+ (Class)todayFeedTopStoriesArticleIDsType;	// IMP=0x00000000000175ab
+ (Class)editorialSectionTagIDsType;	// IMP=0x00000000000174e1
+ (Class)editorialArticleListIDsType;	// IMP=0x000000000001742c
@property(retain, nonatomic) NSString *todayFeedConfiguration; // @synthesize todayFeedConfiguration=_todayFeedConfiguration;
@property(retain, nonatomic) NSMutableArray *todayFeedTopStoriesArticleIDs; // @synthesize todayFeedTopStoriesArticleIDs=_todayFeedTopStoriesArticleIDs;
@property(retain, nonatomic) NSString *spotlightArticleID; // @synthesize spotlightArticleID=_spotlightArticleID;
@property(retain, nonatomic) NSMutableArray *editorialSectionTagIDs; // @synthesize editorialSectionTagIDs=_editorialSectionTagIDs;
@property(retain, nonatomic) NSMutableArray *editorialArticleListIDs; // @synthesize editorialArticleListIDs=_editorialArticleListIDs;
@property(retain, nonatomic) NSString *trendingArticleListID; // @synthesize trendingArticleListID=_trendingArticleListID;
@property(retain, nonatomic) NSString *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NTPBRecordBase *base; // @synthesize base=_base;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000185d0
- (unsigned long long)hash;	// IMP=0x00000000000184df
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000018317
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000017e76
- (void)writeTo:(id)arg1;	// IMP=0x0000000000017b4d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000017b40
- (id)dictionaryRepresentation;	// IMP=0x0000000000017648
- (id)description;	// IMP=0x00000000000175d1
@property(readonly, nonatomic) _Bool hasTodayFeedConfiguration;
- (id)todayFeedTopStoriesArticleIDsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001758e
- (unsigned long long)todayFeedTopStoriesArticleIDsCount;	// IMP=0x0000000000017571
- (void)addTodayFeedTopStoriesArticleIDs:(id)arg1;	// IMP=0x0000000000017524
- (void)clearTodayFeedTopStoriesArticleIDs;	// IMP=0x0000000000017507
@property(readonly, nonatomic) _Bool hasSpotlightArticleID;
- (id)editorialSectionTagIDsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000174c4
- (unsigned long long)editorialSectionTagIDsCount;	// IMP=0x00000000000174a7
- (void)addEditorialSectionTagIDs:(id)arg1;	// IMP=0x000000000001745a
- (void)clearEditorialSectionTagIDs;	// IMP=0x000000000001743d
- (id)editorialArticleListIDsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001740f
- (unsigned long long)editorialArticleListIDsCount;	// IMP=0x00000000000173f2
- (void)addEditorialArticleListIDs:(id)arg1;	// IMP=0x00000000000173a5
- (void)clearEditorialArticleListIDs;	// IMP=0x0000000000017388
@property(readonly, nonatomic) _Bool hasTrendingArticleListID;
@property(readonly, nonatomic) _Bool hasConfiguration;
@property(readonly, nonatomic) _Bool hasBase;
- (void)dealloc;	// IMP=0x0000000000017298

@end
