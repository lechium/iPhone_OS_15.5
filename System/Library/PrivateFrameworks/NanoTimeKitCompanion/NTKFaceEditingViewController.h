//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NTKFace, NTKFaceEditView;

@interface NTKFaceEditingViewController : UIViewController
{
    NTKFaceEditView *_editView;	// 8 = 0x8
    NTKFace *_face;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001bc47
@property(readonly, nonatomic) NTKFace *face; // @synthesize face=_face;
- (void)deactivateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001bc19
- (void)willDeactivate;	// IMP=0x000000000001bbfc
- (void)activate;	// IMP=0x000000000001bbdf
- (void)willActivate;	// IMP=0x000000000001bbc2
- (void)loadView;	// IMP=0x000000000001bb31
- (void)faceColorEditOptionsChanged;	// IMP=0x000000000001bb14
- (void)dealloc;	// IMP=0x000000000001ba8a
@property(readonly, nonatomic) long long currentEditMode;
- (id)initWithFace:(id)arg1;	// IMP=0x000000000001b99f

@end
