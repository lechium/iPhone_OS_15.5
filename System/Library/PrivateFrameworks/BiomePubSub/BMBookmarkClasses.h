//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface BMBookmarkClasses : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableSet *_allowed;	// 16 = 0x10
    _Bool _addedBMStoreBookmark;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000000001b002
- (void).cxx_destruct;	// IMP=0x000000000001b2ac
- (id)allowedClassesForSecureCodingBMBookmark;	// IMP=0x000000000001b23f
- (void)allowClassesForSecureCodingBMBookmark:(id)arg1;	// IMP=0x000000000001b1eb
- (id)init;	// IMP=0x000000000001b057

@end
