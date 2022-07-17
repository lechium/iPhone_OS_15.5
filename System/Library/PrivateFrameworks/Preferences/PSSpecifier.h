//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface PSSpecifier : NSObject
{
    id target;	// 8 = 0x8
    SEL getter;	// 16 = 0x10
    SEL setter;	// 24 = 0x18
    SEL action;	// 32 = 0x20
    SEL cancel;	// 40 = 0x28
    Class detailControllerClass;	// 48 = 0x30
    long long cellType;	// 56 = 0x38
    Class editPaneClass;	// 64 = 0x40
    long long keyboardType;	// 72 = 0x48
    long long autoCapsType;	// 80 = 0x50
    long long autoCorrectionType;	// 88 = 0x58
    unsigned long long textFieldType;	// 96 = 0x60
    NSString *_name;	// 104 = 0x68
    NSArray *_values;	// 112 = 0x70
    NSDictionary *_titleDict;	// 120 = 0x78
    NSDictionary *_shortTitleDict;	// 128 = 0x80
    id _userInfo;	// 136 = 0x88
    NSMutableDictionary *_properties;	// 144 = 0x90
    SEL _confirmationAction;	// 152 = 0x98
    SEL _confirmationCancelAction;	// 160 = 0xa0
    SEL _buttonAction;	// 168 = 0xa8
    SEL _controllerLoadAction;	// 176 = 0xb0
    _Bool _showContentString;	// 184 = 0xb8
    SEL _confirmationAlternateAction;	// 192 = 0xc0
    id _weakUserInfo;	// 200 = 0xc8
}

+ (long long)keyboardTypeForString:(id)arg1;	// IMP=0x000000000002bda0
+ (long long)autoCapsTypeForString:(id)arg1;	// IMP=0x000000000002bd11
+ (long long)autoCorrectionTypeForNumber:(id)arg1;	// IMP=0x000000000002bced
+ (id)specifierWithSpecifier:(id)arg1;	// IMP=0x0000000000029b01
+ (id)groupSpecifierWithID:(id)arg1 name:(id)arg2;	// IMP=0x0000000000029a8d
+ (id)groupSpecifierWithID:(id)arg1;	// IMP=0x0000000000029a79
+ (id)emptyGroupSpecifier;	// IMP=0x0000000000029a65
+ (id)groupSpecifierWithName:(id)arg1;	// IMP=0x0000000000029a2b
+ (id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7;	// IMP=0x0000000000029971
+ (id)deleteButtonSpecifierWithName:(id)arg1 target:(id)arg2 action:(SEL)arg3;	// IMP=0x0000000000088c52
- (void).cxx_destruct;	// IMP=0x000000000002c56f
@property(nonatomic) _Bool showContentString; // @synthesize showContentString=_showContentString;
@property(nonatomic) __weak id weakUserInfo; // @synthesize weakUserInfo=_weakUserInfo;
@property(nonatomic) SEL controllerLoadAction; // @synthesize controllerLoadAction=_controllerLoadAction;
@property(nonatomic) SEL buttonAction; // @synthesize buttonAction=_buttonAction;
@property(nonatomic) SEL confirmationCancelAction; // @synthesize confirmationCancelAction=_confirmationCancelAction;
@property(nonatomic) SEL confirmationAlternateAction; // @synthesize confirmationAlternateAction=_confirmationAlternateAction;
@property(nonatomic) SEL confirmationAction; // @synthesize confirmationAction=_confirmationAction;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
@property(retain, nonatomic) NSDictionary *shortTitleDictionary; // @synthesize shortTitleDictionary=_shortTitleDict;
@property(retain, nonatomic) NSDictionary *titleDictionary; // @synthesize titleDictionary=_titleDict;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) Class editPaneClass; // @synthesize editPaneClass;
@property(nonatomic) long long cellType; // @synthesize cellType;
@property(nonatomic) Class detailControllerClass; // @synthesize detailControllerClass;
@property(nonatomic) __weak id target; // @synthesize target;
- (_Bool)isEqualToSpecifier:(id)arg1;	// IMP=0x000000000002c000
- (long long)titleCompare:(id)arg1;	// IMP=0x000000000002bf6f
- (void)setKeyboardType:(long long)arg1 autoCaps:(long long)arg2 autoCorrection:(long long)arg3;	// IMP=0x000000000002bf55
@property(retain, nonatomic) NSString *identifier;
- (id)description;	// IMP=0x000000000002bb46
- (void)setupIconImageWithPath:(id)arg1;	// IMP=0x000000000002b602
- (void)setupIconImageWithBundle:(id)arg1;	// IMP=0x000000000002b2d2
- (void)setValues:(id)arg1 titles:(id)arg2 shortTitles:(id)arg3 usingLocalizedTitleSorting:(_Bool)arg4;	// IMP=0x000000000002ada6
- (void)setValues:(id)arg1 titles:(id)arg2 shortTitles:(id)arg3;	// IMP=0x000000000002ac4d
- (void)setValues:(id)arg1 titles:(id)arg2;	// IMP=0x000000000002ac38
- (void)loadValuesAndTitlesFromDataSource;	// IMP=0x000000000002aa80
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x000000000002aa6e
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000002aa5c
- (void)performConfirmationCancelAction;	// IMP=0x000000000002a8e0
- (void)performConfirmationAlternateAction;	// IMP=0x000000000002a764
- (void)performConfirmationAction;	// IMP=0x000000000002a5e8
- (void)performButtonAction;	// IMP=0x000000000002a46c
- (void)performControllerLoadAction;	// IMP=0x000000000002a2f0
- (SEL)legacyCancel;	// IMP=0x000000000002a2e6
- (void)setLegacyCancel:(SEL)arg1;	// IMP=0x000000000002a2dc
- (SEL)legacyAction;	// IMP=0x000000000002a2d2
- (void)setLegacyAction:(SEL)arg1;	// IMP=0x000000000002a2c8
- (void)performLegacyAction;	// IMP=0x000000000002a158
- (id)performGetter;	// IMP=0x000000000002a04f
- (_Bool)hasValidGetter;	// IMP=0x0000000000029fe8
- (void)performSetterWithValue:(id)arg1;	// IMP=0x0000000000029ed2
- (_Bool)hasValidSetter;	// IMP=0x0000000000029e6b
- (id)properties;	// IMP=0x0000000000029e5a
- (void)setProperties:(id)arg1;	// IMP=0x0000000000029e27
- (void)removePropertyForKey:(id)arg1;	// IMP=0x0000000000029e0e
- (void)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000029dee
- (id)propertyForKey:(id)arg1;	// IMP=0x0000000000029dd5
- (id)initWithName:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7;	// IMP=0x000000000002987a
- (id)init;	// IMP=0x000000000002980f
- (void)_addLinkSpec:(id)arg1;	// IMP=0x0000000000085853
- (void)addFooterHyperlinkWithRange:(struct _NSRange)arg1 target:(id)arg2 action:(SEL)arg3;	// IMP=0x0000000000085800
- (void)addFooterHyperlinkWithRange:(struct _NSRange)arg1 url:(id)arg2;	// IMP=0x00000000000857ad

@end
