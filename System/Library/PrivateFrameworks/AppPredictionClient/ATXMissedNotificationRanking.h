//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXJSONSerializableProtocol-Protocol.h>
#import <AppPredictionClient/ATXProtoBufWrapper-Protocol.h>
#import <AppPredictionClient/BMStoreData-Protocol.h>
#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class ATXDigestTimeline, ATXMissedNotificationRankingBiomeStream, ATXSharedDigestEngagementTrackingMetrics, NSArray, NSString, NSUUID;

@interface ATXMissedNotificationRanking : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, BMStoreData>
{
    _Bool _hasLoggedCollapsed;	// 8 = 0x8
    _Bool _hasLoggedExpanded;	// 9 = 0x9
    _Bool _hasLoggedUpcomingExpanded;	// 10 = 0xa
    _Bool _hasLoggedDeliveredExpanded;	// 11 = 0xb
    _Bool _hasLoggedUpcomingCollapsed;	// 12 = 0xc
    _Bool _hasLoggedDeliveredCollapsed;	// 13 = 0xd
    _Bool _hasLoggedRemoval;	// 14 = 0xe
    double _creationTimestamp;	// 16 = 0x10
    NSArray *_rankedGroups;	// 24 = 0x18
    NSUUID *_uuid;	// 32 = 0x20
    NSString *_rankerId;	// 40 = 0x28
    NSString *_modeIdString;	// 48 = 0x30
    ATXSharedDigestEngagementTrackingMetrics *_digestEngagementTrackingMetrics;	// 56 = 0x38
    ATXDigestTimeline *_digestTimeline;	// 64 = 0x40
    ATXMissedNotificationRankingBiomeStream *_loggingStream;	// 72 = 0x48
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x0000000000028ff4
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000028ec8
- (void).cxx_destruct;	// IMP=0x0000000000029259
@property(nonatomic) _Bool hasLoggedRemoval; // @synthesize hasLoggedRemoval=_hasLoggedRemoval;
@property(nonatomic) _Bool hasLoggedDeliveredCollapsed; // @synthesize hasLoggedDeliveredCollapsed=_hasLoggedDeliveredCollapsed;
@property(nonatomic) _Bool hasLoggedUpcomingCollapsed; // @synthesize hasLoggedUpcomingCollapsed=_hasLoggedUpcomingCollapsed;
@property(nonatomic) _Bool hasLoggedDeliveredExpanded; // @synthesize hasLoggedDeliveredExpanded=_hasLoggedDeliveredExpanded;
@property(nonatomic) _Bool hasLoggedUpcomingExpanded; // @synthesize hasLoggedUpcomingExpanded=_hasLoggedUpcomingExpanded;
@property(nonatomic) _Bool hasLoggedExpanded; // @synthesize hasLoggedExpanded=_hasLoggedExpanded;
@property(nonatomic) _Bool hasLoggedCollapsed; // @synthesize hasLoggedCollapsed=_hasLoggedCollapsed;
@property(retain, nonatomic) ATXMissedNotificationRankingBiomeStream *loggingStream; // @synthesize loggingStream=_loggingStream;
@property(copy, nonatomic) ATXDigestTimeline *digestTimeline; // @synthesize digestTimeline=_digestTimeline;
@property(copy, nonatomic) ATXSharedDigestEngagementTrackingMetrics *digestEngagementTrackingMetrics; // @synthesize digestEngagementTrackingMetrics=_digestEngagementTrackingMetrics;
@property(copy, nonatomic) NSString *modeIdString; // @synthesize modeIdString=_modeIdString;
@property(copy, nonatomic) NSString *rankerId; // @synthesize rankerId=_rankerId;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSArray *rankedGroups; // @synthesize rankedGroups=_rankedGroups;
@property(readonly, nonatomic) double creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
- (id)json;	// IMP=0x00000000000290d2
- (id)jsonDict;	// IMP=0x00000000000290c0
- (id)serialize;	// IMP=0x00000000000290ae
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000028f49
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000028ed0
- (id)proto;	// IMP=0x0000000000028cd1
- (id)initWithProto:(id)arg1;	// IMP=0x0000000000028824
- (id)encodeAsProto;	// IMP=0x00000000000287d4
- (id)initWithProtoData:(id)arg1;	// IMP=0x0000000000028738
- (id)jsonRepresentation;	// IMP=0x00000000000286e8
- (id)initFromJSON:(id)arg1;	// IMP=0x000000000002866a
- (void)logRemoval;	// IMP=0x00000000000285dd
- (void)logCollapsedViewWithIsUpcoming:(_Bool)arg1;	// IMP=0x000000000002850d
- (void)logExpandedViewWithIsUpcoming:(_Bool)arg1;	// IMP=0x000000000002843d
- (void)logView;	// IMP=0x0000000000028395
- (void)logCollapsedPreview;	// IMP=0x00000000000282ea
- (id)allNotificationIds;	// IMP=0x0000000000028027
- (_Bool)doesRankingShareContentWithOtherRanking:(id)arg1;	// IMP=0x0000000000027f96
- (id)initWithGroups:(id)arg1 modeId:(id)arg2 ranker:(id)arg3;	// IMP=0x0000000000027e60
- (id)initWithNotificationArrays:(id)arg1 modeId:(id)arg2 ranker:(id)arg3;	// IMP=0x0000000000027d29
- (id)initWithNotifications:(id)arg1 modeId:(id)arg2 ranker:(id)arg3;	// IMP=0x0000000000027c87
- (id)initWithNotifications:(id)arg1 modeId:(id)arg2;	// IMP=0x0000000000027c03
- (id)init;	// IMP=0x0000000000027bfd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
