//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor;

@interface AAUIBadgeModelConfiguration : NSObject
{
    _Bool _useFullColorEnamel;	// 8 = 0x8
    _Bool _unearnedUsesTwoToneEnamel;	// 9 = 0x9
    _Bool _faceHasMetalInlay;	// 10 = 0xa
    NSString *_badgeModelPath;	// 16 = 0x10
    NSString *_badgeTexturePath;	// 24 = 0x18
    NSString *_shapeName;	// 32 = 0x20
    UIColor *_metalColor;	// 40 = 0x28
    UIColor *_modelEnamelColor;	// 48 = 0x30
    NSArray *_enamelTriColors;	// 56 = 0x38
}

+ (id)configurationWithModelPath:(id)arg1 texturePath:(id)arg2 plistPath:(id)arg3;	// IMP=0x000000000000e8c0
- (void).cxx_destruct;	// IMP=0x000000000000ef8e
@property(copy, nonatomic) NSArray *enamelTriColors; // @synthesize enamelTriColors=_enamelTriColors;
@property(nonatomic) _Bool faceHasMetalInlay; // @synthesize faceHasMetalInlay=_faceHasMetalInlay;
@property(nonatomic) _Bool unearnedUsesTwoToneEnamel; // @synthesize unearnedUsesTwoToneEnamel=_unearnedUsesTwoToneEnamel;
@property(copy, nonatomic) UIColor *modelEnamelColor; // @synthesize modelEnamelColor=_modelEnamelColor;
@property(nonatomic) _Bool useFullColorEnamel; // @synthesize useFullColorEnamel=_useFullColorEnamel;
@property(copy, nonatomic) UIColor *metalColor; // @synthesize metalColor=_metalColor;
@property(copy, nonatomic) NSString *shapeName; // @synthesize shapeName=_shapeName;
@property(copy, nonatomic) NSString *badgeTexturePath; // @synthesize badgeTexturePath=_badgeTexturePath;
@property(copy, nonatomic) NSString *badgeModelPath; // @synthesize badgeModelPath=_badgeModelPath;
@property(readonly, nonatomic) unsigned long long badgeShape;
- (id)init;	// IMP=0x000000000000e8b2
- (id)initWithModelPath:(id)arg1 texturePath:(id)arg2 shapeName:(id)arg3 metalColor:(id)arg4 useFullColorEnamel:(_Bool)arg5 modelEnamelColor:(id)arg6 unearnedUsesTwoToneEnamel:(_Bool)arg7 faceHasMetalInlay:(_Bool)arg8 enamelTricolors:(id)arg9;	// IMP=0x000000000000e772

@end
