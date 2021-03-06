//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIAlertViewDelegate-Protocol.h>

@class NSError, NSString, UIAlertView;

__attribute__((visibility("hidden")))
@interface UIDocumentAlertPresenter : NSObject <UIAlertViewDelegate>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    UIAlertView *_alert;	// 24 = 0x18
}

+ (id)_presentAlertWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000005c2262
- (void).cxx_destruct;	// IMP=0x00000000005c2588
- (void)alertViewCancel:(id)arg1;	// IMP=0x00000000005c2570
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;	// IMP=0x00000000005c24e4
- (void)_forceFinishNow;	// IMP=0x00000000005c24ad
- (void)dealloc;	// IMP=0x00000000005c221e
- (id)initWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000005c2173

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

