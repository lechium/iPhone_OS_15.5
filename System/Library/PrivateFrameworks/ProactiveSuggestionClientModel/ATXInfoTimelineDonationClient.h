//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _PASXPCClientHelper;

@interface ATXInfoTimelineDonationClient : NSObject
{
    _PASXPCClientHelper *_xpcClientHelper;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000000001c1c3
- (void).cxx_destruct;	// IMP=0x000000000001c568
- (void)timelineDidReloadForWidget:(id)arg1 parentApp:(id)arg2 withEntries:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000001c3db
- (id)_init;	// IMP=0x000000000001c245
- (id)init;	// IMP=0x000000000001c23f

@end
