//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/BSSettingDescriptionProvider-Protocol.h>
#import <FrontBoardServices/BSXPCCoding-Protocol.h>
#import <FrontBoardServices/FBSDisplayLayoutElement-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>

@class BSMutableSettings, NSString;

@interface FBSDisplayLayoutElement : NSObject <NSCopying, BSXPCCoding, BSSettingDescriptionProvider, BSDescriptionProviding, FBSDisplayLayoutElement>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    struct CGRect _frame;	// 24 = 0x18
    struct CGRect _referenceFrame;	// 56 = 0x38
    long long _level;	// 88 = 0x58
    _Bool _fillsDisplayBounds;	// 96 = 0x60
    _Bool _application;	// 97 = 0x61
    _Bool _keyboardFocus;	// 98 = 0x62
    BSMutableSettings *_otherSettings;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000000fed2
@property(nonatomic) _Bool hasKeyboardFocus; // @synthesize hasKeyboardFocus=_keyboardFocus;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic, getter=isUIApplicationElement) _Bool UIApplicationElement; // @synthesize UIApplicationElement=_application;
@property(nonatomic) _Bool fillsDisplayBounds; // @synthesize fillsDisplayBounds=_fillsDisplayBounds;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) struct CGRect referenceFrame; // @synthesize referenceFrame=_referenceFrame;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (Class)fallbackXPCEncodableClass;	// IMP=0x000000000000fde9
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x000000000000fc5f
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x000000000000fa83
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000f986
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000000f974
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000000f924
- (id)succinctDescriptionBuilder;	// IMP=0x000000000000f80d
- (id)succinctDescription;	// IMP=0x000000000000f7bd
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;	// IMP=0x000000000000f7b5
- (id)keyDescriptionForSetting:(unsigned long long)arg1;	// IMP=0x000000000000f7ad
- (void)setOtherSettings:(id)arg1;	// IMP=0x000000000000f725
@property(readonly, copy, nonatomic) BSMutableSettings *otherSettings; // @synthesize otherSettings=_otherSettings;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000f171
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x000000000000f149
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000000f09e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

