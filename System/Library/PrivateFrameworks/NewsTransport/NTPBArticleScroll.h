//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString, NTPBAlternateHeadline, NTPBIssueData, NTPBIssueExposureData, NTPBIssueViewData;

@interface NTPBArticleScroll : PBCodable <NSCopying>
{
    NTPBAlternateHeadline *_alternateHeadline;	// 8 = 0x8
    NSString *_articleId;	// 16 = 0x10
    NSData *_articleSessionId;	// 24 = 0x18
    NSData *_articleViewingSessionId;	// 32 = 0x20
    NSData *_feedViewExposureId;	// 40 = 0x28
    NSMutableArray *_fractionalCohortMemberships;	// 48 = 0x30
    NTPBIssueData *_issueData;	// 56 = 0x38
    NTPBIssueExposureData *_issueExposureData;	// 64 = 0x40
    NTPBIssueViewData *_issueViewData;	// 72 = 0x48
    NSString *_referencedArticleId;	// 80 = 0x50
    int _scrollHostViewType;	// 88 = 0x58
    NSString *_scrollVelocity;	// 96 = 0x60
    float _scrollingVelocity;	// 104 = 0x68
    NSString *_sectionHeadlineId;	// 112 = 0x70
    NSString *_sourceChannelId;	// 120 = 0x78
    NSString *_verticalScrollPositionEnd;	// 128 = 0x80
    float _verticalScrollPositionEnding;	// 136 = 0x88
    NSString *_verticalScrollPositionStart;	// 144 = 0x90
    float _verticalScrollPositionStarting;	// 152 = 0x98
    _Bool _adSupportedChannel;	// 156 = 0x9c
    struct {
        unsigned int scrollHostViewType:1;
        unsigned int scrollingVelocity:1;
        unsigned int verticalScrollPositionEnding:1;
        unsigned int verticalScrollPositionStarting:1;
        unsigned int adSupportedChannel:1;
    } _has;	// 160 = 0xa0
}

+ (Class)fractionalCohortMembershipType;	// IMP=0x0000000000214caf
- (void).cxx_destruct;	// IMP=0x00000000002173bf
@property(retain, nonatomic) NTPBIssueExposureData *issueExposureData; // @synthesize issueExposureData=_issueExposureData;
@property(retain, nonatomic) NTPBIssueViewData *issueViewData; // @synthesize issueViewData=_issueViewData;
@property(retain, nonatomic) NTPBIssueData *issueData; // @synthesize issueData=_issueData;
@property(retain, nonatomic) NTPBAlternateHeadline *alternateHeadline; // @synthesize alternateHeadline=_alternateHeadline;
@property(retain, nonatomic) NSMutableArray *fractionalCohortMemberships; // @synthesize fractionalCohortMemberships=_fractionalCohortMemberships;
@property(nonatomic) float scrollingVelocity; // @synthesize scrollingVelocity=_scrollingVelocity;
@property(nonatomic) float verticalScrollPositionEnding; // @synthesize verticalScrollPositionEnding=_verticalScrollPositionEnding;
@property(nonatomic) float verticalScrollPositionStarting; // @synthesize verticalScrollPositionStarting=_verticalScrollPositionStarting;
@property(retain, nonatomic) NSString *sectionHeadlineId; // @synthesize sectionHeadlineId=_sectionHeadlineId;
@property(nonatomic) _Bool adSupportedChannel; // @synthesize adSupportedChannel=_adSupportedChannel;
@property(retain, nonatomic) NSData *feedViewExposureId; // @synthesize feedViewExposureId=_feedViewExposureId;
@property(retain, nonatomic) NSString *scrollVelocity; // @synthesize scrollVelocity=_scrollVelocity;
@property(retain, nonatomic) NSString *verticalScrollPositionEnd; // @synthesize verticalScrollPositionEnd=_verticalScrollPositionEnd;
@property(retain, nonatomic) NSString *verticalScrollPositionStart; // @synthesize verticalScrollPositionStart=_verticalScrollPositionStart;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSData *articleViewingSessionId; // @synthesize articleViewingSessionId=_articleViewingSessionId;
@property(retain, nonatomic) NSData *articleSessionId; // @synthesize articleSessionId=_articleSessionId;
@property(retain, nonatomic) NSString *referencedArticleId; // @synthesize referencedArticleId=_referencedArticleId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000216d3f
- (unsigned long long)hash;	// IMP=0x0000000000216830
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002163a7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000215ee8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000215b69
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000215b5c
- (id)dictionaryRepresentation;	// IMP=0x0000000000214dc3
- (id)description;	// IMP=0x0000000000214d14
@property(readonly, nonatomic) _Bool hasIssueExposureData;
@property(readonly, nonatomic) _Bool hasIssueViewData;
@property(readonly, nonatomic) _Bool hasIssueData;
@property(readonly, nonatomic) _Bool hasAlternateHeadline;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000214c92
- (unsigned long long)fractionalCohortMembershipsCount;	// IMP=0x0000000000214c75
- (void)addFractionalCohortMembership:(id)arg1;	// IMP=0x0000000000214c0b
- (void)clearFractionalCohortMemberships;	// IMP=0x0000000000214bee
@property(nonatomic) _Bool hasScrollingVelocity;
@property(nonatomic) _Bool hasVerticalScrollPositionEnding;
@property(nonatomic) _Bool hasVerticalScrollPositionStarting;
@property(readonly, nonatomic) _Bool hasSectionHeadlineId;
@property(nonatomic) _Bool hasAdSupportedChannel;
@property(readonly, nonatomic) _Bool hasFeedViewExposureId;
@property(readonly, nonatomic) _Bool hasScrollVelocity;
@property(readonly, nonatomic) _Bool hasVerticalScrollPositionEnd;
@property(readonly, nonatomic) _Bool hasVerticalScrollPositionStart;
@property(nonatomic) _Bool hasScrollHostViewType;
@property(nonatomic) int scrollHostViewType; // @synthesize scrollHostViewType=_scrollHostViewType;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(readonly, nonatomic) _Bool hasArticleViewingSessionId;
@property(readonly, nonatomic) _Bool hasArticleSessionId;
@property(readonly, nonatomic) _Bool hasReferencedArticleId;
@property(readonly, nonatomic) _Bool hasArticleId;

@end

