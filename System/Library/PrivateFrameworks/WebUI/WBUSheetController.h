//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIAlertController, WebUIAlert;

@interface WBUSheetController : NSObject
{
    UIAlertController *_alertController;	// 8 = 0x8
    WebUIAlert *_alert;	// 16 = 0x10
    NSMutableArray *_alertInvocationQueue;	// 24 = 0x18
    id _delegate;	// 32 = 0x20
}

+ (id)alertControllerForAlert:(id)arg1 automaticallyDismiss:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000002045
- (void).cxx_destruct;	// IMP=0x00000000000020c4
- (void)_alertDidDismissWithAction:(int)arg1;	// IMP=0x0000000000001f12
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000001f01
- (void)hideSheet;	// IMP=0x0000000000001e74
- (void)showSheetForAlert:(id)arg1 inView:(id)arg2;	// IMP=0x0000000000001e62
- (void)showSheetForAlert:(id)arg1;	// IMP=0x0000000000001c0c
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000001b8e

@end

