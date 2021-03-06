//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection;

@interface ACDDataclassOwnersManager : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSLock *_connectionLock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007459f
- (id)_dataclassOwnersManagerConnection;	// IMP=0x00000000000743da
- (_Bool)performDataclassActions:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 withError:(id *)arg4;	// IMP=0x00000000000740fc
- (id)actionsForDisablingDataclass:(id)arg1 onAccount:(id)arg2 withError:(id *)arg3;	// IMP=0x0000000000073e0b
- (id)actionsForEnablingDataclass:(id)arg1 onAccount:(id)arg2 withError:(id *)arg3;	// IMP=0x0000000000073b1a
- (id)actionsForDeletingAccount:(id)arg1 affectingDataclass:(id)arg2 withError:(id *)arg3;	// IMP=0x0000000000073829
- (id)actionsForAddingAccount:(id)arg1 affectingDataclass:(id)arg2 withError:(id *)arg3;	// IMP=0x00000000000734d5
- (_Bool)isPerformingDataclassActionsForAccount:(id)arg1;	// IMP=0x000000000007333b
- (void)preloadDataclassOwnersWithError:(id *)arg1;	// IMP=0x0000000000073101
- (id)init;	// IMP=0x00000000000730ab

@end

