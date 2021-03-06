//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSMessagesAppViewController, UIViewController;
@protocol AVTUIControllerPresentationDelegate;

@interface AVTUIControllerPresentation : NSObject
{
    UIViewController *_controller;	// 8 = 0x8
    MSMessagesAppViewController *_modalMessagesController;	// 16 = 0x10
    id <AVTUIControllerPresentationDelegate> _delegate;	// 24 = 0x18
}

+ (id)presentationWithWrappingForController:(id)arg1;	// IMP=0x00000000000a8800
+ (id)pendingGlobalPresentation;	// IMP=0x00000000000a8ab0
+ (void)setPendingGlobalPresentation:(id)arg1;	// IMP=0x00000000000a8a9c
- (void).cxx_destruct;	// IMP=0x00000000000a8a6d
@property(nonatomic) __weak id <AVTUIControllerPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MSMessagesAppViewController *modalMessagesController; // @synthesize modalMessagesController=_modalMessagesController;
@property(readonly, nonatomic) UIViewController *controller; // @synthesize controller=_controller;
- (void)viewWillBeObstructed;	// IMP=0x00000000000a8999
- (id)initWithController:(id)arg1;	// IMP=0x00000000000a892e

@end

