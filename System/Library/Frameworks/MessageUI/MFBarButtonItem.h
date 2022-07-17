//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIBarButtonItem.h>

@class UIImage;

@interface MFBarButtonItem : UIBarButtonItem
{
    UIImage *_enabledImage;	// 8 = 0x8
    UIImage *_disabledImage;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000020bc7
@property(retain, nonatomic) UIImage *disabledImage; // @synthesize disabledImage=_disabledImage;
@property(retain, nonatomic) UIImage *enabledImage; // @synthesize enabledImage=_enabledImage;
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000020a95
- (id)initWithImage:(id)arg1 disabledImage:(id)arg2 style:(long long)arg3 target:(id)arg4 action:(SEL)arg5;	// IMP=0x00000000000209bb

@end
