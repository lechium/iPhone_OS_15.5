//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface FRDestructiveDataActionProvider : NSObject
{
}

- (void)consumeActionsUpToDestructiveActionSyncWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x002000000008fa1d
- (void)consumeNonDestructiveActionsSyncWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000008f9fb
- (id)init;	// IMP=0x001000000008f9cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
