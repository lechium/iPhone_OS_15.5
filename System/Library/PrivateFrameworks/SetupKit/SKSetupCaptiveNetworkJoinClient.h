//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SKSetupCaptiveNetworkJoinClient
{
    _Bool _captiveNetworkLoginDone;	// 144 = 0x90
    _Bool _captiveNetworkProbingSuccess;	// 145 = 0x91
}

- (void)_run;	// IMP=0x000000000000f648
- (void)_postEvent:(id)arg1;	// IMP=0x000000000000f589
- (void)_captiveProbeResponse:(id)arg1;	// IMP=0x000000000000f4d0
- (void)_captiveProbeRequest;	// IMP=0x000000000000f3a8
- (void)_invalidate;	// IMP=0x000000000000f379
- (id)init;	// IMP=0x000000000000f324

@end
