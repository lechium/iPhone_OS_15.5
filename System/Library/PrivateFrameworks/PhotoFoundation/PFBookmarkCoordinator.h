//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet;

@interface PFBookmarkCoordinator : NSObject
{
    NSCountedSet *_managedPaths;	// 8 = 0x8
    NSCountedSet *_accessedPaths;	// 16 = 0x10
}

+ (_Bool)urlHasSandboxExtension:(id)arg1;	// IMP=0x0000000000009523
+ (id)sharedInstance;	// IMP=0x00000000000094c0
- (void).cxx_destruct;	// IMP=0x0000000000009498
- (void)logRefCountForUrl:(id)arg1 withPrefix:(id)arg2 sender:(id)arg3;	// IMP=0x0000000000009118
- (id)description;	// IMP=0x000000000000905e
- (void)addPowerBoxURL:(id)arg1;	// IMP=0x0000000000008fe1
- (void)stopAccessingURLs:(id)arg1;	// IMP=0x0000000000008e68
- (void)stopAccessingURL:(id)arg1;	// IMP=0x0000000000008ded
- (void)startAccessingURL:(id)arg1;	// IMP=0x0000000000008d6d
- (void)_decrementRefcountForURL:(id)arg1;	// IMP=0x0000000000008ba2
- (void)_incrementRefcountForURL:(id)arg1 callStart:(_Bool)arg2;	// IMP=0x00000000000088c0
- (id)startAccesingURLForBookmarkData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000085ac
- (id)init;	// IMP=0x0000000000008537

@end

