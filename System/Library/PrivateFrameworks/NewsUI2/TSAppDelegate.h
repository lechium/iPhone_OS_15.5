//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

#import <NewsUI2/UIApplicationDelegate-Protocol.h>

@class MISSING_TYPE, UIWindow;

@interface TSAppDelegate : UIResponder <UIApplicationDelegate>
{
    MISSING_TYPE *$__lazy_storage_$_resolverManager;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_resolvers;	// 16 = 0x10
    MISSING_TYPE *window;	// 64 = 0x40
    MISSING_TYPE *swiftSingletonPool;	// 72 = 0x48
    MISSING_TYPE *objcSingletonPool;	// 80 = 0x50
    MISSING_TYPE *$__lazy_storage_$_menuManager;	// 88 = 0x58
    MISSING_TYPE *$__lazy_storage_$_commandCenter;	// 104 = 0x68
    MISSING_TYPE *$__lazy_storage_$_tracker;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000052d710
- (id)init;	// IMP=0x000000000052d6c0
- (void)bootstrapWithApplication:(id)arg1;	// IMP=0x000000000052d4f0
@property(nonatomic, retain) UIWindow *window; // @synthesize window;

@end
