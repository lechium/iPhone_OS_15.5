//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _LSChangeObserver : NSObject
{
    CDUnknownBlockType block;	// 8 = 0x8
    unsigned int uid;	// 16 = 0x10
    struct NotifyToken notifyToken;	// 20 = 0x14
    int coalescingFlag;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x0000000000087c56
- (void).cxx_destruct;	// IMP=0x0000000000087c30

@end
