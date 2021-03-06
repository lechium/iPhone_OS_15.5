//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIKBKeyplaneChangeContext;
@protocol _UIRemoteKeyboardControllerDelegate;

@protocol _UIRemoteKeyboardViewSource <NSObject>
@property(nonatomic) _Bool dontDismissReachability;
@property(readonly, nonatomic) _Bool isOnScreenRotating;
@property(retain, nonatomic) id <_UIRemoteKeyboardControllerDelegate> controllerDelegate;
- (void)updateForKeyplaneChangeWithContext:(UIKBKeyplaneChangeContext *)arg1;
- (void)checkPlaceholdersForRemoteKeyboards;
@end

