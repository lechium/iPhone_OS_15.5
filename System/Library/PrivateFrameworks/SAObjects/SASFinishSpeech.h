//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface SASFinishSpeech <SAServerBoundCommand>
{
}

+ (id)finishSpeechWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000007319
+ (id)finishSpeech;	// IMP=0x0000000000007307
- (_Bool)requiresResponse;	// IMP=0x00000000000073ef
@property(nonatomic) double totalAudioRecorded;
@property(copy, nonatomic) NSDictionary *serverFeatureLatencyDistribution;
@property(nonatomic) long long packetCount;
@property(copy, nonatomic) NSArray *orderedContext;
@property(copy, nonatomic) NSArray *featuresAtEndpoint;
@property(copy, nonatomic) NSString *endpoint;
- (id)encodedClassName;	// IMP=0x00000000000072fa
- (id)groupIdentifier;	// IMP=0x00000000000072e6

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

