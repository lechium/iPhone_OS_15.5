//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLTimedPerfCheck : NSObject
{
    _Bool _isSessionCompleted;	// 8 = 0x8
    struct os_unfair_lock_s _sessionCompletedLock;	// 12 = 0xc
    struct pc_session *_pc_session;	// 16 = 0x10
    double _initialProcessMemoryPeak;	// 24 = 0x18
    double _initialProcessMemoryCurrent;	// 32 = 0x20
}

+ (id)start;	// IMP=0x0000000000080bed
- (struct PLUnitMultiplier)perfUnitsFromPerfCheckInfo:(id)arg1;	// IMP=0x00000000000807cd
- (id)perfCheckLogStringWithPerfCheckInfo:(id)arg1;	// IMP=0x00000000000804ca
- (id)endSessionAndReturnPerfCheckExtraInformation;	// IMP=0x0000000000080053
- (id)stop;	// IMP=0x0000000000080041
- (void)setup;	// IMP=0x000000000007fe43
- (void)dealloc;	// IMP=0x000000000007fe01
- (id)init;	// IMP=0x000000000007fdaa

@end
