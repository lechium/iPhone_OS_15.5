//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObjectContext.h>

#import <HomeKitDaemon/HMFAsyncContext-Protocol.h>

@interface HMDManagedObjectContext : NSManagedObjectContext <HMFAsyncContext>
{
}

- (_Bool)save:(id *)arg1;	// IMP=0x00000000002a48cc
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x00000000002a4829
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002a4786
- (void)assertIsExecuting;	// IMP=0x00000000002a4774

@end

