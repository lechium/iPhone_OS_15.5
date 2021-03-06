//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIAlertController, UIView, UIViewController;
@protocol PhotoOptionsPickerDelegate;

__attribute__((visibility("hidden")))
@interface PhotoOptionsPicker : NSObject
{
    UIAlertController *_photoOptionsActionSheet;	// 8 = 0x8
    UIView *_anchoringView;	// 16 = 0x10
    UIViewController *_presentingViewController;	// 24 = 0x18
    id <PhotoOptionsPickerDelegate> _delegate;	// 32 = 0x20
}

+ (_Bool)_supportsPhotoLibrary;	// IMP=0x004000000081430a
+ (_Bool)_supportsCamera;	// IMP=0x001000000081429d
+ (long long)preferredSourceType;	// IMP=0x0010000000814246
+ (unsigned long long)numberOfSupportedSourceTypes;	// IMP=0x00100000008141ff
- (void).cxx_destruct;	// IMP=0x0020000000814325
- (void)_captureUserAction:(int)arg1;	// IMP=0x00100000008141de
- (void)dismissPhotoOptionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000008141c0
- (void)presentPhotoOptionsWithPreparationBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000813ff0
- (void)_createAlertController;	// IMP=0x0010000000813aa0
- (id)initWithPresentingViewController:(id)arg1 sourceView:(id)arg2 delegate:(id)arg3;	// IMP=0x00100000008139d8

@end

