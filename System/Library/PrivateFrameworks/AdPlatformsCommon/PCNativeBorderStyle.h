//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AdPlatformsCommon/NSSecureCoding-Protocol.h>

@class PCNativeColor;

@interface PCNativeBorderStyle : NSObject <NSSecureCoding>
{
    PCNativeColor *_color;	// 8 = 0x8
    double _width;	// 16 = 0x10
    double _cornerRadius;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000705e
- (void).cxx_destruct;	// IMP=0x000000000000721f
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) PCNativeColor *color; // @synthesize color=_color;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000711e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000007066

@end

