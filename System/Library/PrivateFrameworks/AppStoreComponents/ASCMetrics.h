//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCPendingPromises;
@protocol ASCServices;

@interface ASCMetrics : NSObject
{
    id <ASCServices> _connection;	// 8 = 0x8
    ASCPendingPromises *_pendingProcesses;	// 16 = 0x10
}

+ (id)sharedMetrics;	// IMP=0x00000000000392a1
- (void).cxx_destruct;	// IMP=0x000000000003a9f6
@property(readonly, nonatomic) ASCPendingPromises *pendingProcesses; // @synthesize pendingProcesses=_pendingProcesses;
@property(readonly, nonatomic) id <ASCServices> connection; // @synthesize connection=_connection;
- (void)logErrorMessage:(id)arg1;	// IMP=0x000000000003a8da
- (id)processViewRenderWithPredicate:(id)arg1;	// IMP=0x000000000003a4a7
- (id)processViewMetrics:(id)arg1 atInvocationPoint:(id)arg2 withActivity:(id)arg3;	// IMP=0x000000000003a176
- (id)processMetricsData:(id)arg1 withActivity:(id)arg2;	// IMP=0x000000000003a15f
- (id)recordQToken:(id)arg1 campaignToken:(id)arg2 advertisementID:(id)arg3 withLockup:(id)arg4;	// IMP=0x0000000000039d32
- (id)recordCampaignToken:(id)arg1 providerToken:(id)arg2 withLockup:(id)arg3;	// IMP=0x00000000000399cf
- (id)processMetricsData:(id)arg1 pageFields:(id)arg2 activity:(id)arg3;	// IMP=0x00000000000395e0
- (void)daemonConnectionWasLost:(id)arg1;	// IMP=0x00000000000394e0
- (void)dealloc;	// IMP=0x000000000003946b
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000000039347

@end
