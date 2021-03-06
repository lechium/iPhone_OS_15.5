//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString, NTPBDate;

@interface NTPBIssueReadingHistoryItem : PBCodable <NSCopying>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_issueID;	// 16 = 0x10
    NTPBDate *_lastBadgedPBDate;	// 24 = 0x18
    NTPBDate *_lastEngagedPBDate;	// 32 = 0x20
    NTPBDate *_lastRemovedFromMyMagazinesPBDate;	// 40 = 0x28
    NTPBDate *_lastSeenPBDate;	// 48 = 0x30
    NSString *_lastVisitedArticleID;	// 56 = 0x38
    NTPBDate *_lastVisitedPBDate;	// 64 = 0x40
    NSString *_lastVisitedPageID;	// 72 = 0x48
}

@property(retain, nonatomic) NTPBDate *lastSeenPBDate; // @synthesize lastSeenPBDate=_lastSeenPBDate;
@property(retain, nonatomic) NTPBDate *lastRemovedFromMyMagazinesPBDate; // @synthesize lastRemovedFromMyMagazinesPBDate=_lastRemovedFromMyMagazinesPBDate;
@property(retain, nonatomic) NTPBDate *lastEngagedPBDate; // @synthesize lastEngagedPBDate=_lastEngagedPBDate;
@property(retain, nonatomic) NTPBDate *lastBadgedPBDate; // @synthesize lastBadgedPBDate=_lastBadgedPBDate;
@property(retain, nonatomic) NSString *lastVisitedPageID; // @synthesize lastVisitedPageID=_lastVisitedPageID;
@property(retain, nonatomic) NSString *lastVisitedArticleID; // @synthesize lastVisitedArticleID=_lastVisitedArticleID;
@property(retain, nonatomic) NTPBDate *lastVisitedPBDate; // @synthesize lastVisitedPBDate=_lastVisitedPBDate;
@property(retain, nonatomic) NSString *issueID; // @synthesize issueID=_issueID;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001dbf3
- (unsigned long long)hash;	// IMP=0x000000000001dae6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001d8ea
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001d72c
- (void)writeTo:(id)arg1;	// IMP=0x000000000001d611
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001d604
- (id)dictionaryRepresentation;	// IMP=0x000000000001d09c
- (id)description;	// IMP=0x000000000001d025
@property(readonly, nonatomic) _Bool hasLastSeenPBDate;
@property(readonly, nonatomic) _Bool hasLastRemovedFromMyMagazinesPBDate;
@property(readonly, nonatomic) _Bool hasLastEngagedPBDate;
@property(readonly, nonatomic) _Bool hasLastBadgedPBDate;
@property(readonly, nonatomic) _Bool hasLastVisitedPageID;
@property(readonly, nonatomic) _Bool hasLastVisitedArticleID;
@property(readonly, nonatomic) _Bool hasLastVisitedPBDate;
@property(readonly, nonatomic) _Bool hasIssueID;
@property(readonly, nonatomic) _Bool hasIdentifier;
- (void)dealloc;	// IMP=0x000000000001cea8

@end

