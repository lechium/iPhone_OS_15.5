//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <BaseBoardUI/CAStateControllerDelegate-Protocol.h>

@class CALayer, CAStateController, NSArray, NSDictionary, NSObject, NSString;
@protocol CAStateControllerDelegate;

@interface BSUICAPackageView : UIView <CAStateControllerDelegate>
{
    CAStateController *_stateController;	// 8 = 0x8
    NSObject<CAStateControllerDelegate> *_stateControllerDelegate;	// 16 = 0x10
    CALayer *_rootLayer;	// 24 = 0x18
    struct CGSize _originalSize;	// 32 = 0x20
    NSString *_pendingCompletionToState;	// 48 = 0x30
    NSString *_pendingCompletionFromState;	// 56 = 0x38
    CDUnknownBlockType _pendingCompletion;	// 64 = 0x40
    NSDictionary *_publishedObjectMap;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000000268d
- (void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(_Bool)arg3;	// IMP=0x000000000000251e
- (void)stateController:(id)arg1 transitionDidStart:(id)arg2 speed:(float)arg3;	// IMP=0x0000000000002465
- (void)stateController:(id)arg1 didSetStateOfLayer:(id)arg2;	// IMP=0x00000000000023b6
- (void)layoutSubviews;	// IMP=0x000000000000228f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000002277
@property(nonatomic) __weak NSObject<CAStateControllerDelegate> *stateControllerDelegate;
- (_Bool)setState:(id)arg1 onLayer:(id)arg2 animated:(_Bool)arg3 transitionSpeed:(double)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000001f40
- (_Bool)setState:(id)arg1 animated:(_Bool)arg2 transitionSpeed:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000001f1a
- (_Bool)setState:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000001efd
- (_Bool)setState:(id)arg1;	// IMP=0x0000000000001ee6
@property(readonly, copy, nonatomic) NSArray *publishedObjectNames;
- (id)publishedObjectWithName:(id)arg1;	// IMP=0x0000000000001e9c
- (id)initWithPackageName:(id)arg1 inBundle:(id)arg2;	// IMP=0x0000000000001854

@end
