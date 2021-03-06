//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBAppSessionEnd : PBCodable <NSCopying>
{
    long long _appSessionDuration;	// 8 = 0x8
    int _appsAutoSubscribeFeedCount;	// 16 = 0x10
    NSMutableArray *_autoSubscribedFeedIds;	// 24 = 0x18
    int _channelSubscriptionCount;	// 32 = 0x20
    NSMutableArray *_groupableFeedIds;	// 40 = 0x28
    int _internalAutoSubscribeFeedCount;	// 48 = 0x30
    NSMutableArray *_lastVisibleViews;	// 56 = 0x38
    NSMutableArray *_notificationChannelIds;	// 64 = 0x40
    int _notificationEnabledChannelsCount;	// 72 = 0x48
    int _notitificationsEnabledChannelsCount;	// 76 = 0x4c
    NSMutableArray *_paidSubscriptionChannelIds;	// 80 = 0x50
    int _portraitAutoSubscribeFeedCount;	// 88 = 0x58
    int _safariAutoSubscribeFeedCount;	// 92 = 0x5c
    int _sessionEndReason;	// 96 = 0x60
    NSMutableArray *_subscribedFeedIds;	// 104 = 0x68
    int _topicSubscriptionCount;	// 112 = 0x70
    _Bool _breakingNewsAvailableDuringSession;	// 116 = 0x74
    _Bool _breakingNewsDismissedDuringSession;	// 117 = 0x75
    _Bool _syncedOtherUserIdDuringSession;	// 118 = 0x76
    struct {
        unsigned int appSessionDuration:1;
        unsigned int appsAutoSubscribeFeedCount:1;
        unsigned int channelSubscriptionCount:1;
        unsigned int internalAutoSubscribeFeedCount:1;
        unsigned int notificationEnabledChannelsCount:1;
        unsigned int notitificationsEnabledChannelsCount:1;
        unsigned int portraitAutoSubscribeFeedCount:1;
        unsigned int safariAutoSubscribeFeedCount:1;
        unsigned int sessionEndReason:1;
        unsigned int topicSubscriptionCount:1;
        unsigned int breakingNewsAvailableDuringSession:1;
        unsigned int breakingNewsDismissedDuringSession:1;
        unsigned int syncedOtherUserIdDuringSession:1;
    } _has;	// 120 = 0x78
}

+ (Class)groupableFeedIdsType;	// IMP=0x00000000001cdc7f
+ (Class)autoSubscribedFeedIdsType;	// IMP=0x00000000001cdbad
+ (Class)subscribedFeedIdsType;	// IMP=0x00000000001cda3b
+ (Class)notificationChannelIdsType;	// IMP=0x00000000001cd91d
+ (Class)paidSubscriptionChannelIdsType;	// IMP=0x00000000001cd7ff
+ (Class)lastVisibleViewsType;	// IMP=0x00000000001cd64d
- (void).cxx_destruct;	// IMP=0x00000000001d1254
@property(nonatomic) _Bool syncedOtherUserIdDuringSession; // @synthesize syncedOtherUserIdDuringSession=_syncedOtherUserIdDuringSession;
@property(nonatomic) int internalAutoSubscribeFeedCount; // @synthesize internalAutoSubscribeFeedCount=_internalAutoSubscribeFeedCount;
@property(nonatomic) int appsAutoSubscribeFeedCount; // @synthesize appsAutoSubscribeFeedCount=_appsAutoSubscribeFeedCount;
@property(nonatomic) int safariAutoSubscribeFeedCount; // @synthesize safariAutoSubscribeFeedCount=_safariAutoSubscribeFeedCount;
@property(nonatomic) int portraitAutoSubscribeFeedCount; // @synthesize portraitAutoSubscribeFeedCount=_portraitAutoSubscribeFeedCount;
@property(retain, nonatomic) NSMutableArray *groupableFeedIds; // @synthesize groupableFeedIds=_groupableFeedIds;
@property(retain, nonatomic) NSMutableArray *autoSubscribedFeedIds; // @synthesize autoSubscribedFeedIds=_autoSubscribedFeedIds;
@property(nonatomic) _Bool breakingNewsDismissedDuringSession; // @synthesize breakingNewsDismissedDuringSession=_breakingNewsDismissedDuringSession;
@property(nonatomic) _Bool breakingNewsAvailableDuringSession; // @synthesize breakingNewsAvailableDuringSession=_breakingNewsAvailableDuringSession;
@property(retain, nonatomic) NSMutableArray *subscribedFeedIds; // @synthesize subscribedFeedIds=_subscribedFeedIds;
@property(nonatomic) int notificationEnabledChannelsCount; // @synthesize notificationEnabledChannelsCount=_notificationEnabledChannelsCount;
@property(retain, nonatomic) NSMutableArray *notificationChannelIds; // @synthesize notificationChannelIds=_notificationChannelIds;
@property(nonatomic) int notitificationsEnabledChannelsCount; // @synthesize notitificationsEnabledChannelsCount=_notitificationsEnabledChannelsCount;
@property(retain, nonatomic) NSMutableArray *paidSubscriptionChannelIds; // @synthesize paidSubscriptionChannelIds=_paidSubscriptionChannelIds;
@property(nonatomic) long long appSessionDuration; // @synthesize appSessionDuration=_appSessionDuration;
@property(nonatomic) int topicSubscriptionCount; // @synthesize topicSubscriptionCount=_topicSubscriptionCount;
@property(nonatomic) int channelSubscriptionCount; // @synthesize channelSubscriptionCount=_channelSubscriptionCount;
@property(retain, nonatomic) NSMutableArray *lastVisibleViews; // @synthesize lastVisibleViews=_lastVisibleViews;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001d0922
- (unsigned long long)hash;	// IMP=0x00000000001d0677
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d024e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001cf88d
- (void)writeTo:(id)arg1;	// IMP=0x00000000001cf119
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001cf10c
- (id)dictionaryRepresentation;	// IMP=0x00000000001cdeba
- (id)description;	// IMP=0x00000000001cde0b
@property(nonatomic) _Bool hasSyncedOtherUserIdDuringSession;
@property(nonatomic) _Bool hasInternalAutoSubscribeFeedCount;
@property(nonatomic) _Bool hasAppsAutoSubscribeFeedCount;
@property(nonatomic) _Bool hasSafariAutoSubscribeFeedCount;
@property(nonatomic) _Bool hasPortraitAutoSubscribeFeedCount;
- (id)groupableFeedIdsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001cdc62
- (unsigned long long)groupableFeedIdsCount;	// IMP=0x00000000001cdc45
- (void)addGroupableFeedIds:(id)arg1;	// IMP=0x00000000001cdbdb
- (void)clearGroupableFeedIds;	// IMP=0x00000000001cdbbe
- (id)autoSubscribedFeedIdsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001cdb90
- (unsigned long long)autoSubscribedFeedIdsCount;	// IMP=0x00000000001cdb73
- (void)addAutoSubscribedFeedIds:(id)arg1;	// IMP=0x00000000001cdb09
- (void)clearAutoSubscribedFeedIds;	// IMP=0x00000000001cdaec
@property(nonatomic) _Bool hasBreakingNewsDismissedDuringSession;
@property(nonatomic) _Bool hasBreakingNewsAvailableDuringSession;
- (id)subscribedFeedIdsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001cda1e
- (unsigned long long)subscribedFeedIdsCount;	// IMP=0x00000000001cda01
- (void)addSubscribedFeedIds:(id)arg1;	// IMP=0x00000000001cd997
- (void)clearSubscribedFeedIds;	// IMP=0x00000000001cd97a
@property(nonatomic) _Bool hasNotificationEnabledChannelsCount;
- (id)notificationChannelIdsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001cd900
- (unsigned long long)notificationChannelIdsCount;	// IMP=0x00000000001cd8e3
- (void)addNotificationChannelIds:(id)arg1;	// IMP=0x00000000001cd879
- (void)clearNotificationChannelIds;	// IMP=0x00000000001cd85c
@property(nonatomic) _Bool hasNotitificationsEnabledChannelsCount;
- (id)paidSubscriptionChannelIdsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001cd7e2
- (unsigned long long)paidSubscriptionChannelIdsCount;	// IMP=0x00000000001cd7c5
- (void)addPaidSubscriptionChannelIds:(id)arg1;	// IMP=0x00000000001cd75b
- (void)clearPaidSubscriptionChannelIds;	// IMP=0x00000000001cd73e
@property(nonatomic) _Bool hasAppSessionDuration;
@property(nonatomic) _Bool hasTopicSubscriptionCount;
@property(nonatomic) _Bool hasChannelSubscriptionCount;
- (id)lastVisibleViewsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001cd630
- (unsigned long long)lastVisibleViewsCount;	// IMP=0x00000000001cd613
- (void)addLastVisibleViews:(id)arg1;	// IMP=0x00000000001cd5a9
- (void)clearLastVisibleViews;	// IMP=0x00000000001cd58c
- (int)StringAsSessionEndReason:(id)arg1;	// IMP=0x00000000001cd454
- (id)sessionEndReasonAsString:(int)arg1;	// IMP=0x00000000001cd3a1
@property(nonatomic) _Bool hasSessionEndReason;
@property(nonatomic) int sessionEndReason; // @synthesize sessionEndReason=_sessionEndReason;

@end

