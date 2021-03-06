//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveSuggestionClientModel/ATXProtoBufWrapper-Protocol.h>

@class NSString;

@interface ATXLightweightProactiveSuggestion : NSObject <ATXProtoBufWrapper>
{
    unsigned char _consumerSubType;	// 8 = 0x8
    NSString *_executableIdentifier;	// 16 = 0x10
    long long _executableType;	// 24 = 0x18
}

+ (id)lightWeightSuggestionsFromSuggestions:(id)arg1;	// IMP=0x0000000000045f0f
+ (id)protoLightWeightSuggestionsFromLightWeightSuggestions:(id)arg1;	// IMP=0x0000000000045cf9
+ (id)lightWeightSuggestionsFromProtoLightWeightSuggestions:(id)arg1;	// IMP=0x0000000000045ad9
+ (id)lightWeightSuggestionDescriptionsFromLightWeightSuggestions:(id)arg1;	// IMP=0x000000000004592f
- (void).cxx_destruct;	// IMP=0x000000000004591f
@property(nonatomic) unsigned char consumerSubType; // @synthesize consumerSubType=_consumerSubType;
@property(readonly, nonatomic) long long executableType; // @synthesize executableType=_executableType;
@property(readonly, nonatomic) NSString *executableIdentifier; // @synthesize executableIdentifier=_executableIdentifier;
- (id)proto;	// IMP=0x00000000000457ec
- (id)initWithProto:(id)arg1;	// IMP=0x0000000000045584
- (id)encodeAsProto;	// IMP=0x0000000000045534
- (id)initWithProtoData:(id)arg1;	// IMP=0x0000000000045498
- (_Bool)isEqualToATXLightweightProactiveSuggestion:(id)arg1;	// IMP=0x000000000004541c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000453b4
- (id)description;	// IMP=0x00000000000452aa
- (id)initWithExecutableIdentifier:(id)arg1 executableType:(long long)arg2;	// IMP=0x0000000000045234
- (id)initWithProactiveSuggestion:(id)arg1;	// IMP=0x000000000004516e
- (id)init;	// IMP=0x0000000000045168

@end

