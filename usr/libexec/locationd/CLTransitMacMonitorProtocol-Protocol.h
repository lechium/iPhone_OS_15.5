//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLIntersiloServiceProtocol-Protocol.h"

@protocol CLTransitMacMonitorClientProtocol;

@protocol CLTransitMacMonitorProtocol <CLIntersiloServiceProtocol>
- (void)stopMonitoringTransitStateForClient:(byref id <CLTransitMacMonitorClientProtocol>)arg1;
- (void)startMonitoringTransitStateForClient:(byref id <CLTransitMacMonitorClientProtocol>)arg1;
@end

