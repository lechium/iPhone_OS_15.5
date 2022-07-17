//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/NSCopying-Protocol.h>

@class AVTEditingModelColors, NSDictionary;

@interface AVTAvatarEditorColorDefaultsProvider : NSObject <NSCopying>
{
    AVTEditingModelColors *_editingColors;	// 8 = 0x8
    NSDictionary *_categoryMapping;	// 16 = 0x10
    NSDictionary *_definitions;	// 24 = 0x18
}

+ (long long)colorIndexForKey:(id)arg1;	// IMP=0x000000000001c5fc
+ (long long)categoryForKey:(id)arg1;	// IMP=0x000000000001c588
+ (id)keyForCategory:(long long)arg1 colorIndex:(long long)arg2;	// IMP=0x000000000001c51c
- (void).cxx_destruct;	// IMP=0x000000000001cb6c
@property(retain, nonatomic) NSDictionary *definitions; // @synthesize definitions=_definitions;
@property(retain, nonatomic) NSDictionary *categoryMapping; // @synthesize categoryMapping=_categoryMapping;
@property(retain, nonatomic) AVTEditingModelColors *editingColors; // @synthesize editingColors=_editingColors;
- (id)defaultColorPresetForCategory:(long long)arg1 destination:(long long)arg2 withConfiguration:(id)arg3;	// IMP=0x000000000001cacb
- (id)defaultColorForCategory:(long long)arg1 destination:(long long)arg2 withConfiguration:(id)arg3;	// IMP=0x000000000001c88b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c75f
- (id)initWithColorDefaultsDictionary:(id)arg1 editingColors:(id)arg2;	// IMP=0x000000000001c679

@end
