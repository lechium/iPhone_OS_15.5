//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AVCRTCPReceiverReport
{
    unsigned int _reportedSourceSSRC;	// 16 = 0x10
    unsigned char _fractionLost;	// 20 = 0x14
    unsigned int _cumulativePacketsLost;	// 24 = 0x18
    unsigned int _extendedHighestSequenceNumber;	// 28 = 0x1c
    unsigned int _interarrivalJitter;	// 32 = 0x20
    unsigned int _lastSRTimestamp;	// 36 = 0x24
    unsigned int _delaySinceLastSR;	// 40 = 0x28
}

@property(nonatomic) unsigned int delaySinceLastSR; // @synthesize delaySinceLastSR=_delaySinceLastSR;
@property(nonatomic) unsigned int lastSRTimestamp; // @synthesize lastSRTimestamp=_lastSRTimestamp;
@property(nonatomic) unsigned int interarrivalJitter; // @synthesize interarrivalJitter=_interarrivalJitter;
@property(nonatomic) unsigned int extendedHighestSequenceNumber; // @synthesize extendedHighestSequenceNumber=_extendedHighestSequenceNumber;
@property(nonatomic) unsigned int cumulativePacketsLost; // @synthesize cumulativePacketsLost=_cumulativePacketsLost;
@property(nonatomic) unsigned char fractionLost; // @synthesize fractionLost=_fractionLost;
@property(nonatomic) unsigned int reportedSourceSSRC; // @synthesize reportedSourceSSRC=_reportedSourceSSRC;
- (id)description;	// IMP=0x000000000003f5f1
- (id)initWithRTCPPacket:(struct tagRTCPPACKET *)arg1;	// IMP=0x000000000003f537

@end

