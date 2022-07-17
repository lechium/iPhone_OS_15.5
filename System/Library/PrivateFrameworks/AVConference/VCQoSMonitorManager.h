//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCQoSMonitorManager
{
    NSMutableArray *_monitors;	// 16 = 0x10
    NSMutableDictionary *_sources;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;	// 32 = 0x20
    long long _reportingInterval;	// 40 = 0x28
    NSMutableArray *_moitors;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00000000001006da
@property(readonly, nonatomic) NSMutableArray *moitors; // @synthesize moitors=_moitors;
- (_Bool)doesQoSSourceExistForStreamToken:(id)arg1;	// IMP=0x000000000010141b
- (void)deregisterBlocksForService;	// IMP=0x000000000010139e
- (void)registerBlocksForService;	// IMP=0x0000000000100f3a
- (void)updateQoSReport:(id)arg1 toClientsWithToken:(long long)arg2;	// IMP=0x0000000000100cf7
- (void)unregisterQoSReportingSourceForToken:(long long)arg1;	// IMP=0x0000000000100adf
- (void)registerQoSReportingSourceForToken:(long long)arg1;	// IMP=0x000000000010089b
- (void)dealloc;	// IMP=0x0000000000100800
- (id)init;	// IMP=0x0000000000100729

@end
