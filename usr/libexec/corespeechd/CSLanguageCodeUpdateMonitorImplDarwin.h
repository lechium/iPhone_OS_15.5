//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CSLanguageCodeUpdateMonitorImplDarwin
{
    NSString *_currentLanguageCode;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000cdb54
- (void)_notifyObserver:(id)arg1 withLanguageCode:(id)arg2;	// IMP=0x00100000000cdad2
- (void)_didReceiveLanguageCodeUpdate:(id)arg1;	// IMP=0x00100000000cd8f0
- (void)notifySiriLanguageCodeChanged:(id)arg1;	// IMP=0x00100000000cd867
- (void)_stopMonitoring;	// IMP=0x00100000000cd7e8
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000000cd769
- (id)init;	// IMP=0x00100000000cd6bc

@end
