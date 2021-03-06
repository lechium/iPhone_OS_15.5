//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Coordination/COClusterRoleMonitorClientInterface-Protocol.h>

@class COClusterRoleMonitor, NSString;

__attribute__((visibility("hidden")))
@interface COClusterRoleMonitorClientInterfaceMediator : NSObject <COClusterRoleMonitorClientInterface>
{
    COClusterRoleMonitor *_monitor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000027717
@property(readonly, nonatomic) __weak COClusterRoleMonitor *monitor; // @synthesize monitor=_monitor;
- (void)snapshotOfCluster:(id)arg1 didChangeTo:(id)arg2;	// IMP=0x000000000002768a
- (void)membersWithRole:(id)arg1 inCluster:(id)arg2 didChangeTo:(id)arg3;	// IMP=0x00000000000275f5
- (void)roleOfMember:(id)arg1 inCluster:(id)arg2 didChangeTo:(id)arg3;	// IMP=0x0000000000027560
- (id)initWithClusterRoleMonitor:(id)arg1;	// IMP=0x00000000000274fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

