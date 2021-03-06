//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIAlertActionMutablePropertyObservering-Protocol.h>

@class NSString, UIAlertAction, _UIAlertControllerActionView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerActionViewInterfaceAction <UIAlertActionMutablePropertyObservering>
{
    UIAlertAction *_underlyingAlertAction;	// 8 = 0x8
    _Bool _valid;	// 16 = 0x10
}

+ (id)actionWithAlertControllerActionView:(id)arg1;	// IMP=0x000000000008a98d
- (void).cxx_destruct;	// IMP=0x000000000008adf8
@property(readonly, nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(readonly, nonatomic) UIAlertAction *underlyingAlertAction; // @synthesize underlyingAlertAction=_underlyingAlertAction;
- (void)_action:(id)arg1 updatedTitleTextColor:(id)arg2;	// IMP=0x000000000008adc2
- (void)_action:(id)arg1 updatedImageTintColor:(id)arg2;	// IMP=0x000000000008adad
- (void)_action:(id)arg1 changedToBePreferred:(_Bool)arg2;	// IMP=0x000000000008ad99
- (void)_action:(id)arg1 changedToChecked:(_Bool)arg2;	// IMP=0x000000000008ad93
- (void)_action:(id)arg1 changedToEnabled:(_Bool)arg2;	// IMP=0x000000000008ad7f
- (void)_action:(id)arg1 changedToTitleTextAlignment:(long long)arg2;	// IMP=0x000000000008ad6a
- (void)_action:(id)arg1 changedToTitle:(id)arg2;	// IMP=0x000000000008ad55
- (long long)type;	// IMP=0x000000000008acff
- (long long)_typeForDeterminingViewRepresentation;	// IMP=0x000000000008acf4
@property(readonly, nonatomic) _UIAlertControllerActionView *alertControllerActionView; // @dynamic alertControllerActionView;
- (id)leadingImage;	// IMP=0x000000000008ac92
- (id)classificationTitle;	// IMP=0x000000000008ac42
- (void)dealloc;	// IMP=0x000000000008ac04
- (void)invalidate;	// IMP=0x000000000008ab6c
- (void)_initializeStateFromUnderlyingAlertAction;	// IMP=0x000000000008a9e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

