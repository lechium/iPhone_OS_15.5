//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVConference/VCControlChannelDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VCSessionMessaging : NSObject <VCControlChannelDelegate>
{
    NSMutableDictionary *topics;	// 8 = 0x8
    id controlChannelWeak;	// 16 = 0x10
    NSMutableDictionary *participants;	// 24 = 0x18
}

- (void)controlChannel:(id)arg1 clearTransactionCacheForParticipant:(id)arg2;	// IMP=0x000000000032689d
- (void)controlChannel:(id)arg1 sendReliableMessage:(id)arg2 didSucceed:(_Bool)arg3 toParticipant:(id)arg4;	// IMP=0x00000000003267e2
- (void)controlChannel:(id)arg1 topic:(id)arg2 payload:(id)arg3 transactionID:(unsigned int)arg4 fromParticipant:(id)arg5;	// IMP=0x000000000032672d
- (id)allocMessageFromPayload:(id)arg1 forTopic:(id)arg2 participantID:(id)arg3;	// IMP=0x00000000003265f3
- (void)controlChannel:(id)arg1 receivedMessage:(id)arg2 transactionID:(unsigned int)arg3 fromParticipant:(id)arg4;	// IMP=0x00000000003265df
- (void)searchMatchingTopic:(id)arg1 payload:(id)arg2 transactionID:(unsigned int)arg3 fromParticipant:(id)arg4;	// IMP=0x00000000003262a2
- (id)newDictionaryFromUnpackedMessage:(id)arg1 forTopic:(id)arg2 controlChannelVersion:(int)arg3;	// IMP=0x000000000032623e
- (id)newPackedMessageFromDictionary:(id)arg1 forTopic:(id)arg2 controlChannelVersion:(int)arg3;	// IMP=0x00000000003261b1
- (id)newDictionaryFromUnpackedMessageV2:(id)arg1;	// IMP=0x0000000000325f6b
- (id)newPackedMessageFromDictionaryV2:(id)arg1;	// IMP=0x0000000000325d80
- (id)newDictionaryFromUnpackedMomentsMessage:(id)arg1;	// IMP=0x0000000000325b80
- (id)newPackedMessageFromMomentsDictionary:(id)arg1;	// IMP=0x00000000003259c1
- (id)newDictionaryFromUnpackedMessage:(id)arg1;	// IMP=0x000000000032572b
- (id)newPackedMessageFromDictionary:(id)arg1;	// IMP=0x0000000000325555
- (_Bool)sendReliableMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000325386
- (void)sendMessageDictionary:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3;	// IMP=0x000000000032516e
- (void)sendMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3;	// IMP=0x0000000000324ffe
- (void)sendMessage:(id)arg1 withTopic:(id)arg2;	// IMP=0x0000000000324eb8
- (void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(_Bool)arg3 sendCompletionHandler:(CDUnknownBlockType)arg4 receiveHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000324deb
- (void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(_Bool)arg3 requireReliable:(_Bool)arg4 sendMessageDictionaryCompletionHandler:(CDUnknownBlockType)arg5 receiveMessageDictionaryHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000324bfa
- (void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(_Bool)arg3 sendMessageDictionaryCompletionHandler:(CDUnknownBlockType)arg4 receiveMessageDictionaryHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000324bd6
- (void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(_Bool)arg3 receiveHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000324bb4
- (void)dealloc;	// IMP=0x0000000000324ab4
- (void)stopMessaging;	// IMP=0x00000000003249f1
- (void)startMessaging;	// IMP=0x00000000003248b9
- (void)addParticipant:(id)arg1 controlChannelProtocolVersion:(int)arg2;	// IMP=0x000000000032486f
- (id)initWithControlChannel:(id)arg1 remoteVersion:(id)arg2;	// IMP=0x00000000003247b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
