//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXFontAttributes-Protocol.h>

@class NSNumber, NSString;

@interface SXFontAttributes : NSObject <SXFontAttributes>
{
    NSString *_familyName;	// 8 = 0x8
    long long _weight;	// 16 = 0x10
    long long _width;	// 24 = 0x18
    long long _style;	// 32 = 0x20
    NSNumber *_grade;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000ced52
@property(readonly, nonatomic) NSNumber *grade; // @synthesize grade=_grade;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) long long width; // @synthesize width=_width;
@property(readonly, nonatomic) long long weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
- (id)stringForWidth:(long long)arg1;	// IMP=0x00000000000cec5d
- (id)stringForWeight:(long long)arg1;	// IMP=0x00000000000ceb80
- (id)stringForStyle:(long long)arg1;	// IMP=0x00000000000ceb3d
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ce975
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ce8ef
@property(readonly) unsigned long long hash;
- (id)initWithFamilyName:(id)arg1 weight:(long long)arg2 width:(long long)arg3 style:(long long)arg4 grade:(id)arg5;	// IMP=0x00000000000ce7d7
- (id)initWithFamilyName:(id)arg1 weight:(long long)arg2 width:(long long)arg3 style:(long long)arg4;	// IMP=0x00000000000ce7b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

