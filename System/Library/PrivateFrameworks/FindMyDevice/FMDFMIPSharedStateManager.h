//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface FMDFMIPSharedStateManager : NSObject
{
    NSURL *_fmipSharedFileStaticURL;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_stateManagerQueue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000000000e769
- (void).cxx_destruct;	// IMP=0x000000000000f33e
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *stateManagerQueue; // @synthesize stateManagerQueue=_stateManagerQueue;
@property(retain) NSURL *fmipSharedFileStaticURL; // @synthesize fmipSharedFileStaticURL=_fmipSharedFileStaticURL;
- (id)_fmipSharedFileURL;	// IMP=0x000000000000f15a
- (_Bool)_removeSharedInfo;	// IMP=0x000000000000f07c
- (_Bool)_writeSharedInfo:(id)arg1;	// IMP=0x000000000000ef98
- (id)_readSharedInfo;	// IMP=0x000000000000eebe
- (unsigned long long)lostModeType;	// IMP=0x000000000000ed75
- (_Bool)fmipActive;	// IMP=0x000000000000ec28
- (void)recalculateLostMode;	// IMP=0x000000000000e9ed
- (void)setFMiPActive:(_Bool)arg1;	// IMP=0x000000000000e816
- (id)init;	// IMP=0x000000000000e7be

@end

