//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveSuggestionClientModel/ATXProactiveSuggestionUIInteractionProtocol-Protocol.h>

@class ATXShortcutsEditorEventMetadata, NSArray, NSDate, NSString, NSUUID;

@interface ATXShortcutsEditorEvent : NSObject <ATXProactiveSuggestionUIInteractionProtocol>
{
    double _absoluteDate;	// 8 = 0x8
    unsigned char _consumerSubType;	// 16 = 0x10
    unsigned long long _eventType;	// 24 = 0x18
    NSUUID *_blendingCacheUUID;	// 32 = 0x20
    NSArray *_suggestionUUIDs;	// 40 = 0x28
    ATXShortcutsEditorEventMetadata *_metadata;	// 48 = 0x30
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x0000000000006ef2
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000006dd9
- (void).cxx_destruct;	// IMP=0x000000000000777d
@property(retain, nonatomic) ATXShortcutsEditorEventMetadata *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSArray *suggestionUUIDs; // @synthesize suggestionUUIDs=_suggestionUUIDs;
@property(retain, nonatomic) NSUUID *blendingCacheUUID; // @synthesize blendingCacheUUID=_blendingCacheUUID;
@property(nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
@property(readonly, nonatomic) unsigned char consumerSubType; // @synthesize consumerSubType=_consumerSubType;
- (_Bool)isEqualToATXShortcutsEditorEvent:(id)arg1;	// IMP=0x0000000000007624
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000075bc
@property(readonly) unsigned long long hash;
- (id)proto;	// IMP=0x00000000000072f5
- (id)initWithProtoData:(id)arg1;	// IMP=0x0000000000007259
- (id)initWithProto:(id)arg1;	// IMP=0x0000000000006fa6
- (id)encodeAsProto;	// IMP=0x0000000000006f56
- (id)serialize;	// IMP=0x0000000000006f44
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006e5a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000006de1
- (id)json;	// IMP=0x0000000000006d6e
- (id)jsonDict;	// IMP=0x0000000000006ba6
@property(readonly, copy) NSString *description;
- (void)updateUIFeedbackSession:(id)arg1 uiCacheConsumerSubType:(unsigned char)arg2;	// IMP=0x00000000000067ef
- (id)sessionIdentifierForSessionType:(long long)arg1 uiCacheConsumerSubType:(unsigned char)arg2;	// IMP=0x00000000000067d4
- (id)blendingUICacheUpdateUUIDForUICacheConsumerSubType:(unsigned char)arg1;	// IMP=0x00000000000067c6
- (id)sessionProcessingOptionsForSessionType:(long long)arg1;	// IMP=0x000000000000678e
@property(readonly, nonatomic) unsigned char consumerSubTypeForUIStream;
@property(retain, nonatomic) NSDate *date;
- (id)initWithAbsoluteDate:(double)arg1 eventType:(unsigned long long)arg2 blendingCacheUUID:(id)arg3 suggestionUUIDs:(id)arg4 metadata:(id)arg5;	// IMP=0x00000000000065e7
- (id)initWithDate:(id)arg1 eventType:(unsigned long long)arg2 blendingCacheUUID:(id)arg3 suggestionUUIDs:(id)arg4 metadata:(id)arg5;	// IMP=0x0000000000006546
- (id)init;	// IMP=0x0000000000006540

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
