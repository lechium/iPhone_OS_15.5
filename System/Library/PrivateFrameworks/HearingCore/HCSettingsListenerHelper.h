//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HCSettings, NSMutableArray;

@interface HCSettingsListenerHelper : NSObject
{
    id _listenerAddress;	// 8 = 0x8
    HCSettings *_delegate;	// 16 = 0x10
    NSMutableArray *_selectorKeys;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000537f
- (void)dealloc;	// IMP=0x00000000000051a2
- (void)addSelectorKey:(SEL)arg1;	// IMP=0x0000000000005133
- (id)initWithListenerAddress:(id)arg1 andDelegate:(id)arg2;	// IMP=0x000000000000507e

@end
