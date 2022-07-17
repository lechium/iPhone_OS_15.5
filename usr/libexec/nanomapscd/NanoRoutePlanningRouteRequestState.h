//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NanoRouteManager;

__attribute__((visibility("hidden")))
@interface NanoRoutePlanningRouteRequestState
{
    NanoRouteManager *_routeManager;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000111a8
- (void)stop;	// IMP=0x0010000000011196
- (void)cancelRequest;	// IMP=0x00100000000110d8
- (void)_processIncomingRoutes:(id)arg1 traffic:(id)arg2 traceRecordingData:(id)arg3 error:(id)arg4;	// IMP=0x0010000000010e31
- (void)start;	// IMP=0x00100000000107d1
- (void)dealloc;	// IMP=0x001000000001076c

@end
