//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>
#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>

@interface NTKPhotoAnalysis : NSObject <NSCopying, NSSecureCoding>
{
    CDStruct_77693742 _data;	// 8 = 0x8
    unsigned int _version;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001eead3
+ (id)analysisWithImage:(id)arg1 alignment:(unsigned long long)arg2 deviceSizeClass:(unsigned long long)arg3;	// IMP=0x00000000001ee35f
+ (id)invalidAnalysis;	// IMP=0x00000000001ee312
+ (id)defaultAnalysis;	// IMP=0x00000000001ee2d3
+ (_Bool)_dictionaryHasValidValues:(id)arg1;	// IMP=0x00000000001eda81
+ (_Bool)_dictionaryPassesBasicCheck:(id)arg1;	// IMP=0x00000000001ed9eb
+ (_Bool)isValidDictionary:(id)arg1;	// IMP=0x00000000001ed992
@property(readonly, nonatomic) unsigned int version; // @synthesize version=_version;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001eeadb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001ee987
- (id)encodeAsDictionary;	// IMP=0x00000000001ee66e
- (id)initWithStructure:(CDStruct_77693742)arg1;	// IMP=0x00000000001ee263
- (id)initFromDictionary:(id)arg1;	// IMP=0x00000000001edf3b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001edd95
@property(readonly, nonatomic) CDStruct_77693742 structure; // @dynamic structure;
@property(readonly, nonatomic) float shadowBrightness; // @dynamic shadowBrightness;
@property(readonly, nonatomic) float shadowSaturation; // @dynamic shadowSaturation;
@property(readonly, nonatomic) float shadowHue; // @dynamic shadowHue;
@property(readonly, nonatomic) float bgBrightness; // @dynamic bgBrightness;
@property(readonly, nonatomic) float bgSaturation; // @dynamic bgSaturation;
@property(readonly, nonatomic) float bgHue; // @dynamic bgHue;
@property(readonly, nonatomic) float textBrightness; // @dynamic textBrightness;
@property(readonly, nonatomic) float textSaturation; // @dynamic textSaturation;
@property(readonly, nonatomic) float textHue; // @dynamic textHue;
@property(readonly, nonatomic, getter=isColoredText) _Bool coloredText; // @dynamic coloredText;
@property(readonly, nonatomic, getter=isComplexBackground) _Bool complexBackground; // @dynamic complexBackground;

@end
