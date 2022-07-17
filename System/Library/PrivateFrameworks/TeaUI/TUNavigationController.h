//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <TeaUI/UIViewControllerStatusBarPartStyleProvider-Protocol.h>

@class NSString;

@interface TUNavigationController : UINavigationController <UIViewControllerStatusBarPartStyleProvider>
{
}

- (long long)convert:(long long)arg1;	// IMP=0x0000000000005e6c
@property(readonly, nonatomic) long long preferredTrailingStatusBarStyle;
@property(readonly, nonatomic) long long preferredCenterStatusBarStyle;
@property(readonly, nonatomic) long long preferredLeadingStatusBarStyle;
@property(readonly, nonatomic) long long ts_preferredTrailingStatusBarStyle;
@property(readonly, nonatomic) long long ts_preferredCenterStatusBarStyle;
@property(readonly, nonatomic) long long ts_preferredLeadingStatusBarStyle;
- (id)initWithRootViewController:(id)arg1;	// IMP=0x0000000000005cb9
- (id)initWithRootViewController:(id)arg1 navigationBarClass:(Class)arg2;	// IMP=0x0000000000005b63

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
