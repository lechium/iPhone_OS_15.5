//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface RBSProcessBeforeTranslocationBundlePathPredicate
{
    NSString *_beforeTranslocationBundlePath;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002c0c7
- (_Bool)matchesProcess:(id)arg1;	// IMP=0x000000000002c036
- (id)beforeTranslocationBundlePath;	// IMP=0x000000000002c024
- (id)init;	// IMP=0x000000000002bfe2
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000002bfa0

@end

