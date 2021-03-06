//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PLPhotoLibraryBundleController;
@protocol OS_dispatch_queue;

@interface PLTCCObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_observerQueue;	// 8 = 0x8
    PLPhotoLibraryBundleController *_libraryBundleController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000053840b
- (id)_systemPhotoLibrary;	// IMP=0x0000000000538193
- (void)_handleTCCEvent:(unsigned long long)arg1 auth_record:(id)arg2;	// IMP=0x0000000000537edb
- (void)registerAsTCCObserver;	// IMP=0x0000000000537e32
- (id)initWithLibraryBundleController:(id)arg1;	// IMP=0x0000000000537d3f

@end

