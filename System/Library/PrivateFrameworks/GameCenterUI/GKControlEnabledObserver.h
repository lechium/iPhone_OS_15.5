//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIControl;

@interface GKControlEnabledObserver : NSObject
{
    UIControl *_control;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000015e859
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000015e70e
- (void)dealloc;	// IMP=0x000000000015e6aa
- (id)initWithControl:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000015e5e2

@end

