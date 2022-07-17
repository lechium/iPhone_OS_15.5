//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TSgPTPPortStatistics : NSObject
{
    int _portType;	// 8 = 0x8
    int _portRole;	// 12 = 0xc
    unsigned int _receivedSyncCounter;	// 16 = 0x10
    unsigned int _receivedFollowUpCounter;	// 20 = 0x14
    unsigned int _receivedAnnounceCounter;	// 24 = 0x18
    unsigned int _receivedSignalCounter;	// 28 = 0x1c
    unsigned int _receivedPacketDiscardCounter;	// 32 = 0x20
    unsigned int _syncReceiptTimeoutCounter;	// 36 = 0x24
    unsigned int _announceReceiptTimeoutCounter;	// 40 = 0x28
    unsigned int _allowedLostResponsesExceededCounter;	// 44 = 0x2c
    unsigned int _transmittedSyncCounter;	// 48 = 0x30
    unsigned int _transmittedFollowUpCounter;	// 52 = 0x34
    unsigned int _transmittedAnnounceCounter;	// 56 = 0x38
    unsigned int _transmittedSignalCounter;	// 60 = 0x3c
    unsigned int _transmittedPacketDiscardCounter;	// 64 = 0x40
    unsigned int _attemptedSyncCounter;	// 68 = 0x44
    unsigned int _attemptedFollowUpCounter;	// 72 = 0x48
    unsigned int _attemptedAnnounceCounter;	// 76 = 0x4c
    unsigned int _attemptedSignalCounter;	// 80 = 0x50
    unsigned int _rawDelayExceededCounter;	// 84 = 0x54
    unsigned int _rawDelayMeasurementCounter;	// 88 = 0x58
    unsigned int _receivedPDelayRequestCounter;	// 92 = 0x5c
    unsigned int _transmittedPDelayResponseCounter;	// 96 = 0x60
    unsigned int _transmittedPDelayResponseFollowUpCounter;	// 100 = 0x64
    unsigned int _attemptedPDelayResponseCounter;	// 104 = 0x68
    unsigned int _attemptedPDelayResponseFollowUpCounter;	// 108 = 0x6c
    unsigned int _transmittedPDelayRequestCounter;	// 112 = 0x70
    unsigned int _attemptedPDelayRequestCounter;	// 116 = 0x74
    unsigned int _receivedPDelayResponseCounter;	// 120 = 0x78
    unsigned int _receivedPDelayResponseFollowUpCounter;	// 124 = 0x7c
    unsigned int _receivedDelayRequestCounter;	// 128 = 0x80
    unsigned int _transmittedDelayResponseCounter;	// 132 = 0x84
    unsigned int _attemptedDelayResponseCounter;	// 136 = 0x88
    unsigned int _transmittedDelayRequestCounter;	// 140 = 0x8c
    unsigned int _attemptedDelayRequestCounter;	// 144 = 0x90
    unsigned int _receivedDelayResponseCounter;	// 148 = 0x94
    unsigned int _supersededSyncCounter;	// 152 = 0x98
    unsigned int _supersededDelayCounter;	// 156 = 0x9c
    NSString *_portIdentifier;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000002533d
@property(readonly, nonatomic) unsigned int supersededDelayCounter; // @synthesize supersededDelayCounter=_supersededDelayCounter;
@property(readonly, nonatomic) unsigned int supersededSyncCounter; // @synthesize supersededSyncCounter=_supersededSyncCounter;
@property(readonly, nonatomic) unsigned int receivedDelayResponseCounter; // @synthesize receivedDelayResponseCounter=_receivedDelayResponseCounter;
@property(readonly, nonatomic) unsigned int attemptedDelayRequestCounter; // @synthesize attemptedDelayRequestCounter=_attemptedDelayRequestCounter;
@property(readonly, nonatomic) unsigned int transmittedDelayRequestCounter; // @synthesize transmittedDelayRequestCounter=_transmittedDelayRequestCounter;
@property(readonly, nonatomic) unsigned int attemptedDelayResponseCounter; // @synthesize attemptedDelayResponseCounter=_attemptedDelayResponseCounter;
@property(readonly, nonatomic) unsigned int transmittedDelayResponseCounter; // @synthesize transmittedDelayResponseCounter=_transmittedDelayResponseCounter;
@property(readonly, nonatomic) unsigned int receivedDelayRequestCounter; // @synthesize receivedDelayRequestCounter=_receivedDelayRequestCounter;
@property(readonly, nonatomic) unsigned int receivedPDelayResponseFollowUpCounter; // @synthesize receivedPDelayResponseFollowUpCounter=_receivedPDelayResponseFollowUpCounter;
@property(readonly, nonatomic) unsigned int receivedPDelayResponseCounter; // @synthesize receivedPDelayResponseCounter=_receivedPDelayResponseCounter;
@property(readonly, nonatomic) unsigned int attemptedPDelayRequestCounter; // @synthesize attemptedPDelayRequestCounter=_attemptedPDelayRequestCounter;
@property(readonly, nonatomic) unsigned int transmittedPDelayRequestCounter; // @synthesize transmittedPDelayRequestCounter=_transmittedPDelayRequestCounter;
@property(readonly, nonatomic) unsigned int attemptedPDelayResponseFollowUpCounter; // @synthesize attemptedPDelayResponseFollowUpCounter=_attemptedPDelayResponseFollowUpCounter;
@property(readonly, nonatomic) unsigned int attemptedPDelayResponseCounter; // @synthesize attemptedPDelayResponseCounter=_attemptedPDelayResponseCounter;
@property(readonly, nonatomic) unsigned int transmittedPDelayResponseFollowUpCounter; // @synthesize transmittedPDelayResponseFollowUpCounter=_transmittedPDelayResponseFollowUpCounter;
@property(readonly, nonatomic) unsigned int transmittedPDelayResponseCounter; // @synthesize transmittedPDelayResponseCounter=_transmittedPDelayResponseCounter;
@property(readonly, nonatomic) unsigned int receivedPDelayRequestCounter; // @synthesize receivedPDelayRequestCounter=_receivedPDelayRequestCounter;
@property(readonly, nonatomic) unsigned int rawDelayMeasurementCounter; // @synthesize rawDelayMeasurementCounter=_rawDelayMeasurementCounter;
@property(readonly, nonatomic) unsigned int rawDelayExceededCounter; // @synthesize rawDelayExceededCounter=_rawDelayExceededCounter;
@property(readonly, nonatomic) unsigned int attemptedSignalCounter; // @synthesize attemptedSignalCounter=_attemptedSignalCounter;
@property(readonly, nonatomic) unsigned int attemptedAnnounceCounter; // @synthesize attemptedAnnounceCounter=_attemptedAnnounceCounter;
@property(readonly, nonatomic) unsigned int attemptedFollowUpCounter; // @synthesize attemptedFollowUpCounter=_attemptedFollowUpCounter;
@property(readonly, nonatomic) unsigned int attemptedSyncCounter; // @synthesize attemptedSyncCounter=_attemptedSyncCounter;
@property(readonly, nonatomic) unsigned int transmittedPacketDiscardCounter; // @synthesize transmittedPacketDiscardCounter=_transmittedPacketDiscardCounter;
@property(readonly, nonatomic) unsigned int transmittedSignalCounter; // @synthesize transmittedSignalCounter=_transmittedSignalCounter;
@property(readonly, nonatomic) unsigned int transmittedAnnounceCounter; // @synthesize transmittedAnnounceCounter=_transmittedAnnounceCounter;
@property(readonly, nonatomic) unsigned int transmittedFollowUpCounter; // @synthesize transmittedFollowUpCounter=_transmittedFollowUpCounter;
@property(readonly, nonatomic) unsigned int transmittedSyncCounter; // @synthesize transmittedSyncCounter=_transmittedSyncCounter;
@property(readonly, nonatomic) unsigned int allowedLostResponsesExceededCounter; // @synthesize allowedLostResponsesExceededCounter=_allowedLostResponsesExceededCounter;
@property(readonly, nonatomic) unsigned int announceReceiptTimeoutCounter; // @synthesize announceReceiptTimeoutCounter=_announceReceiptTimeoutCounter;
@property(readonly, nonatomic) unsigned int syncReceiptTimeoutCounter; // @synthesize syncReceiptTimeoutCounter=_syncReceiptTimeoutCounter;
@property(readonly, nonatomic) unsigned int receivedPacketDiscardCounter; // @synthesize receivedPacketDiscardCounter=_receivedPacketDiscardCounter;
@property(readonly, nonatomic) unsigned int receivedSignalCounter; // @synthesize receivedSignalCounter=_receivedSignalCounter;
@property(readonly, nonatomic) unsigned int receivedAnnounceCounter; // @synthesize receivedAnnounceCounter=_receivedAnnounceCounter;
@property(readonly, nonatomic) unsigned int receivedFollowUpCounter; // @synthesize receivedFollowUpCounter=_receivedFollowUpCounter;
@property(readonly, nonatomic) unsigned int receivedSyncCounter; // @synthesize receivedSyncCounter=_receivedSyncCounter;
@property(readonly, nonatomic) int portRole; // @synthesize portRole=_portRole;
@property(readonly, nonatomic) int portType; // @synthesize portType=_portType;
@property(readonly, copy, nonatomic) NSString *portIdentifier; // @synthesize portIdentifier=_portIdentifier;
- (id)initWithPort:(id)arg1;	// IMP=0x0000000000024593
- (id)init;	// IMP=0x0000000000024507

@end
