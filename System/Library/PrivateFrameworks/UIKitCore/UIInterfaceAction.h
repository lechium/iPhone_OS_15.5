//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSPointerArray, NSString, UIColor, UIImage, UIInterfaceActionRepresentationView, UIInterfaceActionVisualStyle, UIView, UIViewController;
@protocol _UIInterfaceActionPresenting;

@interface UIInterfaceAction : NSObject <NSCopying>
{
    _Bool _enabled;	// 8 = 0x8
    _Bool _preferred;	// 9 = 0x9
    _Bool _focused;	// 10 = 0xa
    UIView *_customContentView;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    UIViewController *_customContentViewController;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    long long _titleAlignment;	// 48 = 0x30
    NSString *_classificationTitle;	// 56 = 0x38
    UIImage *_leadingImage;	// 64 = 0x40
    UIImage *_trailingImage;	// 72 = 0x48
    CDUnknownBlockType _handler;	// 80 = 0x50
    NSPointerArray *_weakDisplayPropertyObservers;	// 88 = 0x58
    UIInterfaceActionRepresentationView *__visualRepresentation;	// 96 = 0x60
    id <_UIInterfaceActionPresenting> __presentingController;	// 104 = 0x68
    UIInterfaceActionVisualStyle *_visualStyle;	// 112 = 0x70
    UIColor *_titleTextColor;	// 120 = 0x78
    UIColor *_imageTintColor;	// 128 = 0x80
    struct CGSize _leadingImageLayoutSize;	// 136 = 0x88
    struct CGSize _trailingImageLayoutSize;	// 152 = 0x98
}

+ (id)_observableDisplayProperties;	// IMP=0x0000000000029026
+ (void)_setInterfaceActionCanInvokeActionsWithoutPresentingController:(_Bool)arg1;	// IMP=0x000000000002901a
+ (id)actionWithCustomContentView:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000028bd9
+ (id)actionWithCustomContentViewController:(id)arg1;	// IMP=0x0000000000028b71
+ (id)actionWithTitle:(id)arg1 type:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000028aed
+ (_Bool)changedProperties:(id)arg1 containsAny:(id)arg2;	// IMP=0x000000000002894c
- (void).cxx_destruct;	// IMP=0x0000000000029bd6
@property(retain, nonatomic, getter=_imageTintColor, setter=_setImageTintColor:) UIColor *imageTintColor; // @synthesize imageTintColor=_imageTintColor;
@property(retain, nonatomic, getter=_titleTextColor, setter=_setTitleTextColor:) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(retain, nonatomic, getter=_visualStyle, setter=_setVisualStyle:) UIInterfaceActionVisualStyle *visualStyle; // @synthesize visualStyle=_visualStyle;
@property(nonatomic, getter=_isFocused, setter=_setIsFocused:) _Bool focused; // @synthesize focused=_focused;
@property(nonatomic, getter=_isPreferred, setter=_setIsPreferred:) _Bool preferred; // @synthesize preferred=_preferred;
@property(nonatomic, setter=_setPresentingController:) __weak id <_UIInterfaceActionPresenting> _presentingController; // @synthesize _presentingController=__presentingController;
@property(nonatomic, setter=_setVisualRepresentation:) __weak UIInterfaceActionRepresentationView *_visualRepresentation; // @synthesize _visualRepresentation=__visualRepresentation;
@property(readonly, nonatomic) NSPointerArray *weakDisplayPropertyObservers; // @synthesize weakDisplayPropertyObservers=_weakDisplayPropertyObservers;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UIImage *trailingImage; // @synthesize trailingImage=_trailingImage;
@property(retain, nonatomic) UIImage *leadingImage; // @synthesize leadingImage=_leadingImage;
@property(copy, nonatomic) NSString *classificationTitle; // @synthesize classificationTitle=_classificationTitle;
@property(nonatomic) long long titleAlignment; // @synthesize titleAlignment=_titleAlignment;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIViewController *customContentViewController; // @synthesize customContentViewController=_customContentViewController;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)_notifyObserversDidChangeActionProperty:(id)arg1;	// IMP=0x0000000000029903
- (void)_notifyObserversVisualStyleDidChange;	// IMP=0x0000000000029794
@property(readonly, nonatomic) long long _typeForDeterminingViewRepresentation;
- (void)_removeActionDisplayPropertyObserver:(id)arg1;	// IMP=0x00000000000296cb
- (void)_addActionDisplayPropertyObserver:(id)arg1;	// IMP=0x000000000002966b
- (void)_invokeHandlerWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002957d
@property(nonatomic) struct CGSize trailingImageLayoutSize; // @synthesize trailingImageLayoutSize=_trailingImageLayoutSize;
@property(nonatomic) struct CGSize leadingImageLayoutSize; // @synthesize leadingImageLayoutSize=_leadingImageLayoutSize;
- (struct CGSize)_layoutSizeForImageProperty:(id)arg1;	// IMP=0x000000000002939c
@property(readonly, nonatomic) UIView *customContentView; // @synthesize customContentView=_customContentView;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000028f74
- (id)description;	// IMP=0x0000000000028de8
- (id)initWithTitle:(id)arg1 type:(long long)arg2 customContentViewController:(id)arg3 customContentView:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000028c5f

@end

