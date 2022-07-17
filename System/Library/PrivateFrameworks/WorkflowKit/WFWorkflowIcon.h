//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSCopying-Protocol.h>
#import <WorkflowKit/NSSecureCoding-Protocol.h>

@class NSData, WFColor, WFIcon;

@interface WFWorkflowIcon : NSObject <NSCopying, NSSecureCoding>
{
    unsigned short _glyphCharacter;	// 8 = 0x8
    long long _backgroundColorValue;	// 16 = 0x10
    NSData *_customImageData;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002fb93a
+ (unsigned short)defaultGlyphCharacter;	// IMP=0x00000000002fb92f
+ (unsigned long long)randomPaletteColor;	// IMP=0x00000000002fb8dd
- (void).cxx_destruct;	// IMP=0x00000000002fb8cd
@property(readonly, copy, nonatomic) NSData *customImageData; // @synthesize customImageData=_customImageData;
@property(readonly, nonatomic) unsigned short glyphCharacter; // @synthesize glyphCharacter=_glyphCharacter;
@property(readonly, nonatomic) long long backgroundColorValue; // @synthesize backgroundColorValue=_backgroundColorValue;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002fb8a4
- (unsigned long long)hash;	// IMP=0x00000000002fb862
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002fb799
@property(readonly, nonatomic) WFIcon *icon;
@property(readonly, nonatomic) WFColor *backgroundColor;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002fb521
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002fb3ff
- (id)initWithBackgroundColorValue:(long long)arg1 glyphCharacter:(unsigned short)arg2 customImageData:(id)arg3;	// IMP=0x00000000002fb362
- (id)initWithPaletteColor:(unsigned long long)arg1 glyphCharacter:(unsigned short)arg2 customImageData:(id)arg3;	// IMP=0x00000000002fb2cb
- (id)init;	// IMP=0x00000000002fb270

@end
