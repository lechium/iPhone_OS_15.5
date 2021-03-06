//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/PHPickerViewControllerDelegate-Protocol.h>
#import <NanoTimeKitCompanion/UIAdaptivePresentationControllerDelegate-Protocol.h>
#import <NanoTimeKitCompanion/UINavigationControllerDelegate-Protocol.h>

@class NSString;

@interface NTKCPhotosAddController : NSObject <PHPickerViewControllerDelegate, UINavigationControllerDelegate, UIAdaptivePresentationControllerDelegate>
{
    CDUnknownBlockType _completion;	// 8 = 0x8
}

+ (id)_sharedInstance;	// IMP=0x0000000000070363
+ (void)presentPhotosAddControllerFromViewController:(id)arg1 configuration:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000701a9
+ (void)presentSinglePhotoAddControllerFromViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000070099
+ (void)presentPhotosAddControllerFromViewController:(id)arg1 selectionLimit:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006fff5
+ (void)presentPhotosAddControllerFromViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000006ffde
+ (id)pickerConfigurationWithLimit:(unsigned long long)arg1;	// IMP=0x000000000006fe76
- (void).cxx_destruct;	// IMP=0x0000000000070818
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)picker:(id)arg1 didFinishPicking:(id)arg2;	// IMP=0x00000000000703e9
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x00000000000703b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

