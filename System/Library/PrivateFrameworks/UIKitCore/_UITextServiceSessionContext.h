//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSString, UIResponder, UIView;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface _UITextServiceSessionContext : NSObject <NSSecureCoding>
{
    UIResponder<UITextInput> *_textInput;	// 8 = 0x8
    UIView *_view;	// 16 = 0x10
    NSString *_textWithContext;	// 24 = 0x18
    struct _NSRange _selectedRange;	// 32 = 0x20
    struct CGRect _presentationRect;	// 48 = 0x30
}

+ (struct CGRect)selectionBoundingBoxForTextInput:(id)arg1;	// IMP=0x00000000010ce4b8
+ (id)selectedTextRangeForTextInput:(id)arg1;	// IMP=0x00000000010ce41e
+ (id)sessionContextForType:(long long)arg1 withTextInput:(id)arg2;	// IMP=0x00000000010ce18e
+ (id)sessionContextWithText:(id)arg1 withRect:(struct CGRect)arg2 withRange:(struct _NSRange)arg3 withView:(id)arg4;	// IMP=0x00000000010ce0ef
+ (id)sessionContextWithText:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;	// IMP=0x00000000010ce06c
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000010cddef
- (void).cxx_destruct;	// IMP=0x00000000010ceb60
@property(readonly, nonatomic) struct CGRect presentationRect; // @synthesize presentationRect=_presentationRect;
@property(readonly, nonatomic) struct _NSRange selectedRange; // @synthesize selectedRange=_selectedRange;
@property(readonly, copy, nonatomic) NSString *textWithContext; // @synthesize textWithContext=_textWithContext;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) UIResponder<UITextInput> *textInput; // @synthesize textInput=_textInput;
- (void)convertRectToView:(id)arg1;	// IMP=0x00000000010cea6c
- (void)_gatherAdditionalContext;	// IMP=0x00000000010ce620
- (_Bool)_typeRequiresContext:(long long)arg1;	// IMP=0x00000000010ce613
- (id)initForType:(long long)arg1 withText:(id)arg2 withTextInput:(id)arg3 withView:(id)arg4;	// IMP=0x00000000010ce1eb
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000010cdeeb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000010cddf7

@end
