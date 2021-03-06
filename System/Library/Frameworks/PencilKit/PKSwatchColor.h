//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface PKSwatchColor : NSObject
{
    UIColor *_color;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

+ (id)swatchColor:(id)arg1 identifier:(id)arg2;	// IMP=0x0000000000126565
- (void).cxx_destruct;	// IMP=0x0000000000126694
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)initWithColor:(id)arg1 identifier:(id)arg2;	// IMP=0x00000000001265d5

@end

