//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <InstallCoordination/NSSecureCoding-Protocol.h>

@class IXPromisedOutOfBandTransferSeed;

@interface IXPromisedOutOfBandTransfer <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003b004
- (Class)seedClass;	// IMP=0x000000000003b03b
- (id)initWithSeed:(id)arg1;	// IMP=0x000000000003b00c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003afd5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003afa6
- (id)initWithName:(id)arg1 client:(unsigned long long)arg2 diskSpaceNeeded:(unsigned long long)arg3;	// IMP=0x000000000003abde

// Remaining properties
@property(nonatomic, getter=isComplete) _Bool complete; // @dynamic complete;
@property(nonatomic) double percentComplete; // @dynamic percentComplete;
@property(retain, nonatomic) IXPromisedOutOfBandTransferSeed *seed; // @dynamic seed;

@end

