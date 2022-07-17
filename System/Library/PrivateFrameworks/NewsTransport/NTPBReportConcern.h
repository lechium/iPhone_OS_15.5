//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBReportConcern : PBCodable <NSCopying>
{
    long long _backendArticleVersion;	// 8 = 0x8
    long long _publisherArticleVersion;	// 16 = 0x10
    int _articleFeedCellHostType;	// 24 = 0x18
    int _articleFeedCellSection;	// 28 = 0x1c
    NSString *_articleParentFeedId;	// 32 = 0x20
    int _articleParentFeedType;	// 40 = 0x28
    NSString *_clientId;	// 48 = 0x30
    NSString *_concernComments;	// 56 = 0x38
    int _concernReason;	// 64 = 0x40
    NSString *_contentId;	// 72 = 0x48
    int _contentType;	// 80 = 0x50
    int _feedFeedType;	// 84 = 0x54
    NSString *_feedPresentationSearchString;	// 88 = 0x58
    int _feedViewPresentationReason;	// 96 = 0x60
    int _originProductType;	// 100 = 0x64
    NSString *_referencedArticleId;	// 104 = 0x68
    int _reportVersion;	// 112 = 0x70
    NSString *_userId;	// 120 = 0x78
    _Bool _isUserSubscribedToFeed;	// 128 = 0x80
    struct {
        unsigned int backendArticleVersion:1;
        unsigned int publisherArticleVersion:1;
        unsigned int articleFeedCellHostType:1;
        unsigned int articleFeedCellSection:1;
        unsigned int articleParentFeedType:1;
        unsigned int concernReason:1;
        unsigned int contentType:1;
        unsigned int feedFeedType:1;
        unsigned int feedViewPresentationReason:1;
        unsigned int originProductType:1;
        unsigned int isUserSubscribedToFeed:1;
    } _has;	// 132 = 0x84
}

- (void).cxx_destruct;	// IMP=0x00000000000a1b8a
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) _Bool isUserSubscribedToFeed; // @synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed;
@property(retain, nonatomic) NSString *feedPresentationSearchString; // @synthesize feedPresentationSearchString=_feedPresentationSearchString;
@property(retain, nonatomic) NSString *articleParentFeedId; // @synthesize articleParentFeedId=_articleParentFeedId;
@property(nonatomic) long long backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property(nonatomic) long long publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property(retain, nonatomic) NSString *referencedArticleId; // @synthesize referencedArticleId=_referencedArticleId;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(retain, nonatomic) NSString *concernComments; // @synthesize concernComments=_concernComments;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(nonatomic) int reportVersion; // @synthesize reportVersion=_reportVersion;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000a17df
- (unsigned long long)hash;	// IMP=0x00000000000a1505
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a10eb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a0e25
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a0bb1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a0ba4
- (id)dictionaryRepresentation;	// IMP=0x000000000009f5f4
- (id)description;	// IMP=0x000000000009f545
@property(nonatomic) _Bool hasOriginProductType;
@property(nonatomic) int originProductType; // @synthesize originProductType=_originProductType;
@property(readonly, nonatomic) _Bool hasUserId;
@property(nonatomic) _Bool hasIsUserSubscribedToFeed;
@property(readonly, nonatomic) _Bool hasFeedPresentationSearchString;
- (int)StringAsFeedViewPresentationReason:(id)arg1;	// IMP=0x000000000009ee80
- (id)feedViewPresentationReasonAsString:(int)arg1;	// IMP=0x000000000009eb93
@property(nonatomic) _Bool hasFeedViewPresentationReason;
@property(nonatomic) int feedViewPresentationReason; // @synthesize feedViewPresentationReason=_feedViewPresentationReason;
- (int)StringAsArticleFeedCellSection:(id)arg1;	// IMP=0x000000000009e8a4
- (id)articleFeedCellSectionAsString:(int)arg1;	// IMP=0x000000000009e768
@property(nonatomic) _Bool hasArticleFeedCellSection;
@property(nonatomic) int articleFeedCellSection; // @synthesize articleFeedCellSection=_articleFeedCellSection;
- (int)StringAsArticleFeedCellHostType:(id)arg1;	// IMP=0x000000000009e5ac
- (id)articleFeedCellHostTypeAsString:(int)arg1;	// IMP=0x000000000009e4eb
@property(nonatomic) _Bool hasArticleFeedCellHostType;
@property(nonatomic) int articleFeedCellHostType; // @synthesize articleFeedCellHostType=_articleFeedCellHostType;
- (int)StringAsFeedFeedType:(id)arg1;	// IMP=0x000000000009e17c
- (id)feedFeedTypeAsString:(int)arg1;	// IMP=0x000000000009dffd
@property(nonatomic) _Bool hasFeedFeedType;
@property(nonatomic) int feedFeedType; // @synthesize feedFeedType=_feedFeedType;
- (int)StringAsArticleParentFeedType:(id)arg1;	// IMP=0x000000000009dc8c
- (id)articleParentFeedTypeAsString:(int)arg1;	// IMP=0x000000000009db0e
@property(nonatomic) _Bool hasArticleParentFeedType;
@property(nonatomic) int articleParentFeedType; // @synthesize articleParentFeedType=_articleParentFeedType;
@property(readonly, nonatomic) _Bool hasArticleParentFeedId;
@property(nonatomic) _Bool hasBackendArticleVersion;
@property(nonatomic) _Bool hasPublisherArticleVersion;
@property(readonly, nonatomic) _Bool hasReferencedArticleId;
@property(readonly, nonatomic) _Bool hasContentId;
- (int)StringAsContentType:(id)arg1;	// IMP=0x000000000009d8e4
- (id)contentTypeAsString:(int)arg1;	// IMP=0x000000000009d84c
@property(nonatomic) _Bool hasContentType;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) _Bool hasConcernComments;
@property(nonatomic) _Bool hasConcernReason;
@property(nonatomic) int concernReason; // @synthesize concernReason=_concernReason;
@property(readonly, nonatomic) _Bool hasClientId;

@end
