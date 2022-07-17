//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HAPPairingIdentity, NSArray;

@interface HMDAppleAccessoryPairingControllerDataSource
{
    NSArray *_inProgressPairingAccessories;	// 8 = 0x8
    HAPPairingIdentity *_controllerIdentity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000850833
@property(retain, nonatomic) HAPPairingIdentity *controllerIdentity; // @synthesize controllerIdentity=_controllerIdentity;
@property(retain, nonatomic) NSArray *inProgressPairingAccessories; // @synthesize inProgressPairingAccessories=_inProgressPairingAccessories;
- (void)deletePairingAccessoryState:(id)arg1;	// IMP=0x000000000085077b
- (void)updatePairingAccessoryState:(id)arg1;	// IMP=0x00000000008506eb
- (void)updateControllerIdentity:(id)arg1;	// IMP=0x000000000085065d
- (id)initWithContext:(id)arg1;	// IMP=0x00000000008502d8

@end
