//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRDPinPairingDialog_ATV
{
    NSMutableArray *_clients;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    NSString *_titleKey;	// 24 = 0x18
    NSString *_pinKey;	// 32 = 0x20
    NSString *_messageKey;	// 40 = 0x28
    NSString *_timeoutKey;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000002d705
- (void)closeAll;	// IMP=0x001000000002d5ad
- (void)closeForClient:(id)arg1 userCancelled:(_Bool)arg2;	// IMP=0x001000000002d379
- (void)closeForClient:(id)arg1;	// IMP=0x001000000002d365
- (void)showWithPin:(id)arg1 forClient:(id)arg2;	// IMP=0x001000000002d176
- (void)dealloc;	// IMP=0x001000000002d138
- (id)init;	// IMP=0x001000000002d0db

@end
