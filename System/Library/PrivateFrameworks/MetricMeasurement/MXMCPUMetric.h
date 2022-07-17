//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MXMInstrument, NSNumber, NSString;

@interface MXMCPUMetric
{
}

+ (id)instrumentThread;	// IMP=0x0000000000009818
+ (id)currentProcess;	// IMP=0x00000000000097de
- (_Bool)harvestData:(id *)arg1 error:(id *)arg2;	// IMP=0x0000000000009d67
- (id)_constructProbe;	// IMP=0x0000000000009d4e
- (_Bool)_shouldConstructProbe;	// IMP=0x0000000000009d1b
@property(readonly, nonatomic) NSNumber *processIdentifier;
@property(readonly, nonatomic) NSString *processName;
- (id)initWithIdentifier:(id)arg1 filter:(id)arg2;	// IMP=0x0000000000009bc2
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x0000000000009b68
- (id)initWithProcessName:(id)arg1;	// IMP=0x00000000000099dd
- (id)initWithProcessIdentifier:(int)arg1;	// IMP=0x000000000000984a

// Remaining properties
@property(readonly, copy, nonatomic) MXMInstrument *instrument; // @dynamic instrument;

@end
