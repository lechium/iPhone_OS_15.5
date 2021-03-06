//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPairingManager, NSString;

@interface IDSDXPCPairedDeviceManager : NSObject
{
    IDSPairingManager *_pairingManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000481d50
@property(retain, nonatomic) IDSPairingManager *pairingManager; // @synthesize pairingManager=_pairingManager;
- (void)getPairedDeviceInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000004819a0
- (void)getLocalDeviceInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000481520
- (id)initWithPairingManager:(id)arg1;	// IMP=0x0010000000481460

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

