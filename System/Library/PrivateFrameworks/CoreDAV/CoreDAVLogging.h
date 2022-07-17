//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CoreDAVLogging : NSObject
{
    NSMutableDictionary *_logDelegates;	// 8 = 0x8
    NSMapTable *_primaryLogDelegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateMuckingQueue;	// 24 = 0x18
}

+ (id)sharedLogging;	// IMP=0x0000000000024515
- (void).cxx_destruct;	// IMP=0x0000000000025bb5
- (void)_logOldMessageForAccountInfoProvider:(id)arg1 level:(unsigned char)arg2 format:(const char *)arg3;	// IMP=0x000000000002582a
- (void)logDiagnosticForProvider:(id)arg1 withLevel:(long long)arg2 format:(id)arg3 args:(struct __va_list_tag [1])arg4;	// IMP=0x0000000000025518
- (id)logHandleForAccountInfoProvider:(id)arg1;	// IMP=0x0000000000025365
- (id)delegatesToLogTransmittedDataForAccountInfoProvider:(id)arg1;	// IMP=0x0000000000025157
- (_Bool)_shouldOutputAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2;	// IMP=0x0000000000024fd8
- (_Bool)shouldLogAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2;	// IMP=0x0000000000024e59
- (id)_delegatesToLogForProvider:(id)arg1;	// IMP=0x0000000000024b61
- (void)removeLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2;	// IMP=0x0000000000024832
- (void)addLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2;	// IMP=0x0000000000024608
- (id)init;	// IMP=0x000000000002456a

@end
