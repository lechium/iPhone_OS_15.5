//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PairedSync/NSSecureCoding-Protocol.h>

@class NSUUID, PSYTestInput;

@interface PSYSyncOptions : NSObject <NSSecureCoding>
{
    _Bool _dryRun;	// 8 = 0x8
    _Bool _terminateDuringDryRun;	// 9 = 0x9
    PSYTestInput *_testInput;	// 16 = 0x10
    NSUUID *_pairingIdentifier;	// 24 = 0x18
    NSUUID *_sessionIdentifier;	// 32 = 0x20
    unsigned long long _syncSessionType;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000011f43
- (void).cxx_destruct;	// IMP=0x00000000000122b0
@property(nonatomic) unsigned long long syncSessionType; // @synthesize syncSessionType=_syncSessionType;
@property(retain, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) NSUUID *pairingIdentifier; // @synthesize pairingIdentifier=_pairingIdentifier;
@property(retain, nonatomic) PSYTestInput *testInput; // @synthesize testInput=_testInput;
@property(nonatomic) _Bool terminateDuringDryRun; // @synthesize terminateDuringDryRun=_terminateDuringDryRun;
@property(nonatomic) _Bool dryRun; // @synthesize dryRun=_dryRun;
- (id)description;	// IMP=0x000000000001216a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000120a0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011f4b

@end
