//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSString, SATTSSpeechSynthesisVoice;

@interface SATTSFetchSpeechSynthesisVoiceRequest <SAServerBoundCommand>
{
}

+ (id)fetchSpeechSynthesisVoiceRequestWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000036525
+ (id)fetchSpeechSynthesisVoiceRequest;	// IMP=0x0000000000036513
- (_Bool)requiresResponse;	// IMP=0x00000000000365d3
@property(copy, nonatomic) NSString *languageCode;
@property(copy, nonatomic) NSString *gender;
@property(retain, nonatomic) SATTSSpeechSynthesisVoice *filteredVoiceKey;
@property(copy, nonatomic) NSArray *clientVoiceKeyList;
- (id)encodedClassName;	// IMP=0x0000000000036506
- (id)groupIdentifier;	// IMP=0x00000000000364f2

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

