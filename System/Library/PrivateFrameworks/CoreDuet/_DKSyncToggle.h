//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _DKSyncToggle : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    NSObject *_object;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    SEL _enableSelector;	// 32 = 0x20
    SEL _disableSelector;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000025992
- (void)_setEnabled:(_Bool)arg1;	// IMP=0x0000000000025800
- (void)dealloc;	// IMP=0x00000000000257b7
- (id)initWithObject:(id)arg1 name:(id)arg2 enableSelector:(SEL)arg3 disableSelector:(SEL)arg4;	// IMP=0x000000000002570b

@end
