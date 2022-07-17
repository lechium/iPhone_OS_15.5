//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIApplication.h>

@class NSString, UIWindow;

@interface SafariViewServiceApplication : UIApplication
{
    long long _currentKeyboardModifierFlags;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x002000000000139b
@property(readonly, nonatomic) long long currentKeyboardModifierFlags;
- (void)buildMenuWithBuilder:(id)arg1;	// IMP=0x001000000000164e
- (void)handleKeyUIEvent:(id)arg1;	// IMP=0x00100000000015d9
- (id)newSharedSiteMetadataManager;	// IMP=0x00100000000014b9
- (void)applicationDidFinishLaunching:(id)arg1;	// IMP=0x0010000000001457

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
