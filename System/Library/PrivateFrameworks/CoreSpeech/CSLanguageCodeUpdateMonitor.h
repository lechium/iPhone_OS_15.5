//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSLanguageCodeUpdateMonitor
{
}

+ (id)sharedInstance;	// IMP=0x00000000000f9d22
- (void)notifySiriLanguageCodeChanged:(id)arg1;	// IMP=0x00000000000f9dea
- (void)_stopMonitoring;	// IMP=0x00000000000f9dc7
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00000000000f9d9b

@end
