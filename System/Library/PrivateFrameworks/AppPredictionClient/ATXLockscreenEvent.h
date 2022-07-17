//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXProactiveSuggestionUIInteractionProtocol-Protocol.h>

@class NSArray, NSDate, NSString, NSUUID;

@interface ATXLockscreenEvent : NSObject <ATXProactiveSuggestionUIInteractionProtocol>
{
    double _absoluteDate;	// 8 = 0x8
    int _eventType;	// 16 = 0x10
    NSUUID *_blendingCacheId;	// 24 = 0x18
    NSArray *_suggestionIds;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000008fbc6
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000008f3b3
- (void).cxx_destruct;	// IMP=0x000000000008ff72
@property(retain, nonatomic) NSArray *suggestionIds; // @synthesize suggestionIds=_suggestionIds;
@property(retain, nonatomic) NSUUID *blendingCacheId; // @synthesize blendingCacheId=_blendingCacheId;
@property(nonatomic) int eventType; // @synthesize eventType=_eventType;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToATXLockscreenEvent:(id)arg1;	// IMP=0x000000000008fdb9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008fd51
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008fc47
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008fbce
- (id)proto;	// IMP=0x000000000008f984
- (id)initWithProtoData:(id)arg1;	// IMP=0x000000000008f8e8
- (id)initWithProto:(id)arg1;	// IMP=0x000000000008f68d
- (id)encodeAsProto;	// IMP=0x000000000008f63d
- (id)jsonDict;	// IMP=0x000000000008f417
- (id)serialize;	// IMP=0x000000000008f405
@property(readonly, nonatomic) unsigned int dataVersion;
- (void)updateUIFeedbackSession:(id)arg1 uiCacheConsumerSubType:(unsigned char)arg2;	// IMP=0x000000000008f300
- (id)sessionProcessingOptionsForSessionType:(long long)arg1;	// IMP=0x000000000008f2d1
- (id)sessionIdentifierForSessionType:(long long)arg1 uiCacheConsumerSubType:(unsigned char)arg2;	// IMP=0x000000000008f2c4
- (id)blendingUICacheUpdateUUIDForUICacheConsumerSubType:(unsigned char)arg1;	// IMP=0x000000000008f2b6
@property(readonly, nonatomic) unsigned char consumerSubTypeForUIStream;
@property(retain, nonatomic) NSDate *date;
- (id)initWithAbsoluteDate:(double)arg1 eventType:(int)arg2 blendingCacheId:(id)arg3 suggestionIds:(id)arg4;	// IMP=0x000000000008f19b
- (id)initWithDate:(id)arg1 eventType:(int)arg2 blendingCacheId:(id)arg3 suggestionIds:(id)arg4;	// IMP=0x000000000008f116
- (id)init;	// IMP=0x000000000008f110

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
