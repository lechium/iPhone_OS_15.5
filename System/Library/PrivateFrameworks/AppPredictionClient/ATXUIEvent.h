//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXProactiveSuggestionUIInteractionProtocol-Protocol.h>

@class NSString;
@protocol ATXProactiveSuggestionUIInteractionProtocol;

@interface ATXUIEvent : NSObject <ATXProactiveSuggestionUIInteractionProtocol>
{
    unsigned char _consumerSubType;	// 8 = 0x8
    NSObject<ATXProactiveSuggestionUIInteractionProtocol> *_event;	// 16 = 0x10
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x00000000000dca3d
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000dc76c
+ (id)uiEventWithShortcutsEditorEvent:(id)arg1;	// IMP=0x00000000000dc0b7
+ (id)uiEventWithLockscreenEvent:(id)arg1;	// IMP=0x00000000000dc065
+ (id)uiEventWithAppDirectoryEvent:(id)arg1;	// IMP=0x00000000000dc013
+ (id)uiEventWithSpotlightEvent:(id)arg1;	// IMP=0x00000000000dbfc1
+ (id)uiEventWithHomeScreenEvent:(id)arg1;	// IMP=0x00000000000dbf6f
- (void).cxx_destruct;	// IMP=0x00000000000dcdb6
@property(readonly, nonatomic) NSObject<ATXProactiveSuggestionUIInteractionProtocol> *event; // @synthesize event=_event;
@property(readonly, nonatomic) unsigned char consumerSubType; // @synthesize consumerSubType=_consumerSubType;
- (_Bool)isEqualToATXUIEvent:(id)arg1;	// IMP=0x00000000000dcd1e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000dccb6
- (id)json;	// IMP=0x00000000000dcc4b
- (id)jsonDict;	// IMP=0x00000000000dcaa1
- (id)serialize;	// IMP=0x00000000000dca8f
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000dc9a5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000dc92c
- (_Bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;	// IMP=0x00000000000dc774
- (id)encodeAsProto;	// IMP=0x00000000000dc71c
- (id)proto;	// IMP=0x00000000000dc672
- (id)initWithProto:(id)arg1;	// IMP=0x00000000000dc441
- (id)initWithProtoData:(id)arg1;	// IMP=0x00000000000dc3a5
- (void)updateUIFeedbackSession:(id)arg1 uiCacheConsumerSubType:(unsigned char)arg2;	// IMP=0x00000000000dc38f
- (id)blendingUICacheUpdateUUIDForUICacheConsumerSubType:(unsigned char)arg1;	// IMP=0x00000000000dc379
- (id)sessionIdentifierForSessionType:(long long)arg1 uiCacheConsumerSubType:(unsigned char)arg2;	// IMP=0x00000000000dc363
- (id)sessionProcessingOptionsForSessionType:(long long)arg1;	// IMP=0x00000000000dc34d
- (id)shortcutsEditorEvent;	// IMP=0x00000000000dc304
- (id)lockscreenEvent;	// IMP=0x00000000000dc2bb
- (id)appDirectoryEvent;	// IMP=0x00000000000dc272
- (id)spotlightEvent;	// IMP=0x00000000000dc229
- (id)homeScreenEvent;	// IMP=0x00000000000dc1e0
- (id)initWithConsumerSubType:(unsigned char)arg1 event:(id)arg2;	// IMP=0x00000000000dc113
@property(readonly, nonatomic) unsigned char consumerSubTypeForUIStream;
- (id)init;	// IMP=0x00000000000dbf69

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

