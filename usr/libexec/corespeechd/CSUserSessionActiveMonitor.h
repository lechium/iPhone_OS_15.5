//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSUserSessionActiveMonitor
{
}

+ (id)sharedInstance;	// IMP=0x00400000000cfdef
- (_Bool)isUserActive;	// IMP=0x00400000000cfe50
- (void)_stopMonitoring;	// IMP=0x00100000000cfe4a
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000cfe44

@end
