//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol WFUIKitParameterEditingControllerDelegate;

@interface WFUIKitParameterEditingController : NSObject
{
    id <WFUIKitParameterEditingControllerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002f9c2c
@property(nonatomic) __weak id <WFUIKitParameterEditingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)createViewControllerWithInitialState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002f9bf5

@end
