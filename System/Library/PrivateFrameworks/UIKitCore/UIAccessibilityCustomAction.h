//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, UIImage;

@interface UIAccessibilityCustomAction : NSObject
{
    UIImage *_image;	// 8 = 0x8
    NSAttributedString *_attributedName;	// 16 = 0x10
    id _target;	// 24 = 0x18
    SEL _selector;	// 32 = 0x20
    CDUnknownBlockType _actionHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000011548
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(copy, nonatomic) NSAttributedString *attributedName; // @synthesize attributedName=_attributedName;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *name;
- (id)initWithAttributedName:(id)arg1 actionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000112bb
- (id)initWithName:(id)arg1 actionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001121d
- (id)initWithAttributedName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;	// IMP=0x0000000000011168
- (id)initWithName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;	// IMP=0x00000000000110b3
- (id)initWithAttributedName:(id)arg1 image:(id)arg2 actionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010fec
- (id)initWithName:(id)arg1 image:(id)arg2 actionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010f25
- (id)initWithAttributedName:(id)arg1 image:(id)arg2 target:(id)arg3 selector:(SEL)arg4;	// IMP=0x0000000000010e49
- (id)initWithName:(id)arg1 image:(id)arg2 target:(id)arg3 selector:(SEL)arg4;	// IMP=0x0000000000010d6d
- (id)init;	// IMP=0x0000000000010cef

@end
