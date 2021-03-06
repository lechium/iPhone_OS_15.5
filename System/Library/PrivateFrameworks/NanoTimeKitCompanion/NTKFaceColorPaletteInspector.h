//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle, NSString, UIColor;

@interface NTKFaceColorPaletteInspector : NSObject
{
    _Bool _isTritium;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
    NSString *_pigmentName;	// 24 = 0x18
    NSString *_propertyName;	// 32 = 0x20
    NSBundle *_bundleLocation;	// 40 = 0x28
    NSString *_pathLocation;	// 48 = 0x30
    NSString *_fallbackMethodName;	// 56 = 0x38
    UIColor *_color;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000305449
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) _Bool isTritium; // @synthesize isTritium=_isTritium;
@property(retain, nonatomic) NSString *fallbackMethodName; // @synthesize fallbackMethodName=_fallbackMethodName;
@property(retain, nonatomic) NSString *pathLocation; // @synthesize pathLocation=_pathLocation;
@property(retain, nonatomic) NSBundle *bundleLocation; // @synthesize bundleLocation=_bundleLocation;
@property(retain, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
@property(retain, nonatomic) NSString *pigmentName; // @synthesize pigmentName=_pigmentName;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (id)description;	// IMP=0x00000000003051b6

@end

