//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/VCTextReceiverDelegate-Protocol.h>
#import <AVConference/VCTextSender-Protocol.h>

@class NSString, VCTextReceiver, VCTextTransmitter;
@protocol VCTextReceiverDelegate;

__attribute__((visibility("hidden")))
@interface VCTextStream <VCTextSender, VCTextReceiverDelegate>
{
    VCTextReceiver *_textReceiver;	// 520 = 0x208
    VCTextTransmitter *_textTransmitter;	// 528 = 0x210
    id <VCTextReceiverDelegate> _receiveDelegate;	// 536 = 0x218
}

- (double)rtcpHeartbeatLeeway;	// IMP=0x0000000000057e49
@property(readonly, nonatomic) double lastReceivedRTCPPacketTime;
@property(readonly, nonatomic) double lastReceivedRTPPacketTime;
- (void)onRTCPTimeout;	// IMP=0x0000000000057e09
- (void)onRTPTimeout;	// IMP=0x0000000000057e03
- (void)onSendRTCPPacket;	// IMP=0x0000000000057d78
- (void)onResumeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000057d63
- (void)onPauseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000057d4e
- (void)onStopWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000057cf5
- (void)onStartWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000057c9c
- (_Bool)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000057684
- (_Bool)setupTextReceiverWithError:(id *)arg1;	// IMP=0x000000000005753c
- (void)setupTextTransmitter;	// IMP=0x0000000000057445
- (void)onCallIDChanged;	// IMP=0x000000000005743f
- (id)supportedPayloads;	// IMP=0x0000000000057432
- (void)didReceiveText:(id)arg1;	// IMP=0x0000000000057401
- (void)didReceiveCharacter:(unsigned short)arg1;	// IMP=0x0000000000057295
- (void)sendText:(id)arg1;	// IMP=0x00000000000570f5
- (void)sendCharacter:(unsigned short)arg1;	// IMP=0x0000000000056f51
@property(nonatomic) id <VCTextReceiverDelegate> receiveDelegate;
- (void)dealloc;	// IMP=0x0000000000056d24
- (id)init;	// IMP=0x0000000000056c24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

