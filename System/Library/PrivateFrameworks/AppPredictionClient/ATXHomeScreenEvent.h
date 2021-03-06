//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXProactiveSuggestionUIInteractionProtocol-Protocol.h>

@class ATXHomeScreenEventMetadata, NSArray, NSDate, NSString;

@interface ATXHomeScreenEvent : NSObject <ATXProactiveSuggestionUIInteractionProtocol>
{
    double _absoluteDate;	// 8 = 0x8
    _Bool _isSuggestedWidget;	// 16 = 0x10
    unsigned char _consumerSubType;	// 17 = 0x11
    NSString *_eventTypeString;	// 24 = 0x18
    NSString *_reason;	// 32 = 0x20
    NSString *_blendingCacheId;	// 40 = 0x28
    NSString *_stackId;	// 48 = 0x30
    NSString *_widgetBundleId;	// 56 = 0x38
    NSString *_widgetKind;	// 64 = 0x40
    NSString *_appBundleId;	// 72 = 0x48
    unsigned long long _widgetSize;	// 80 = 0x50
    unsigned long long _stackKind;	// 88 = 0x58
    unsigned long long _stackLocation;	// 96 = 0x60
    NSString *_intentDescription;	// 104 = 0x68
    NSString *_widgetUniqueId;	// 112 = 0x70
    NSArray *_suggestionIds;	// 120 = 0x78
    ATXHomeScreenEventMetadata *_metadata;	// 128 = 0x80
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000091d0f
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x0000000000090fdb
+ (id)eventForPageShownWithIndex:(unsigned long long)arg1 widgetsByStack:(id)arg2 blendingCacheIdentifier:(id)arg3;	// IMP=0x00000000000908eb
- (void).cxx_destruct;	// IMP=0x0000000000092380
@property(retain, nonatomic) ATXHomeScreenEventMetadata *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSArray *suggestionIds; // @synthesize suggestionIds=_suggestionIds;
@property(retain, nonatomic) NSString *widgetUniqueId; // @synthesize widgetUniqueId=_widgetUniqueId;
@property(retain, nonatomic) NSString *intentDescription; // @synthesize intentDescription=_intentDescription;
@property(nonatomic) unsigned long long stackLocation; // @synthesize stackLocation=_stackLocation;
@property(nonatomic) unsigned long long stackKind; // @synthesize stackKind=_stackKind;
@property(nonatomic) unsigned long long widgetSize; // @synthesize widgetSize=_widgetSize;
@property(readonly, nonatomic) unsigned char consumerSubType; // @synthesize consumerSubType=_consumerSubType;
@property(nonatomic) _Bool isSuggestedWidget; // @synthesize isSuggestedWidget=_isSuggestedWidget;
@property(retain, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(retain, nonatomic) NSString *widgetKind; // @synthesize widgetKind=_widgetKind;
@property(retain, nonatomic) NSString *widgetBundleId; // @synthesize widgetBundleId=_widgetBundleId;
@property(retain, nonatomic) NSString *stackId; // @synthesize stackId=_stackId;
@property(retain, nonatomic) NSString *blendingCacheId; // @synthesize blendingCacheId=_blendingCacheId;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSString *eventTypeString; // @synthesize eventTypeString=_eventTypeString;
- (id)_uuidArrayFromStringArray:(id)arg1;	// IMP=0x0000000000092193
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000092106
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009208d
- (_Bool)checkAndReportDecodingFailureIfNeededFordouble:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;	// IMP=0x0000000000091ecf
- (_Bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;	// IMP=0x0000000000091d17
- (_Bool)isEqualToATXHomeScreenEvent:(id)arg1;	// IMP=0x0000000000091989
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000091921
- (id)encodeAsProto;	// IMP=0x00000000000918d1
- (id)proto;	// IMP=0x0000000000091741
- (id)initWithProto:(id)arg1;	// IMP=0x000000000009144c
- (id)initWithProtoData:(id)arg1;	// IMP=0x00000000000913b0
- (id)json;	// IMP=0x0000000000091345
- (id)jsonDict;	// IMP=0x000000000009103f
- (id)serialize;	// IMP=0x000000000009102d
@property(readonly, nonatomic) unsigned int dataVersion;
- (void)updateUIFeedbackSession:(id)arg1 uiCacheConsumerSubType:(unsigned char)arg2;	// IMP=0x0000000000090ce4
- (unsigned char)feedbackConsumerSubType;	// IMP=0x0000000000090c20
- (id)blendingUICacheUpdateUUIDForUICacheConsumerSubType:(unsigned char)arg1;	// IMP=0x0000000000090be9
- (id)sessionIdentifierForSessionType:(long long)arg1 uiCacheConsumerSubType:(unsigned char)arg2;	// IMP=0x0000000000090bdb
- (id)sessionProcessingOptionsForSessionType:(long long)arg1;	// IMP=0x0000000000090a8c
@property(readonly, nonatomic) unsigned char consumerSubTypeForUIStream;
@property(retain, nonatomic) NSDate *date;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

