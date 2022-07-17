//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@protocol FANavigationControllerDelegate;

@interface FANavigationController : UINavigationController
{
    id <FANavigationControllerDelegate> _familyDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001525b
@property(nonatomic) __weak id <FANavigationControllerDelegate> familyDelegate; // @synthesize familyDelegate=_familyDelegate;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001514d
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000015058
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000014f79
- (_Bool)_isEmpty;	// IMP=0x0000000000014f31

@end
