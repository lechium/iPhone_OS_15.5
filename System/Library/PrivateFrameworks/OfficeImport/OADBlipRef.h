//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class NSMutableArray, NSString, OADBlip;

__attribute__((visibility("hidden")))
@interface OADBlipRef : NSObject <NSCopying>
{
    int mIndex;	// 8 = 0x8
    NSString *mName;	// 16 = 0x10
    NSMutableArray *mEffects;	// 24 = 0x18
    OADBlip *mBlip;	// 32 = 0x20
}

+ (id)inflatedExtensionForGzippedExtension:(id)arg1;	// IMP=0x000000000030aea5
+ (int)blipTypeForImageData:(id)arg1;	// IMP=0x000000000030abd2
+ (int)blipTypeForContentType:(id)arg1;	// IMP=0x00000000001ac7ba
+ (int)blipTypeForExtension:(id)arg1;	// IMP=0x000000000030a666
+ (id)blipRefWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3;	// IMP=0x00000000001acf0a
+ (id)blipRefWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3 effects:(id)arg4;	// IMP=0x00000000001acf31
- (void).cxx_destruct;	// IMP=0x000000000030afc6
- (id)description;	// IMP=0x000000000030af88
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000104bbd
- (unsigned long long)hash;	// IMP=0x0000000000103fe7
- (id)effects;	// IMP=0x00000000001b42ed
- (_Bool)isNull;	// IMP=0x000000000030af6d
- (void)removeEffectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000030a650
- (id)effectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000103ef2
- (unsigned long long)effectCount;	// IMP=0x0000000000103edc
- (void)setEffects:(id)arg1;	// IMP=0x00000000001b42fd
- (void)addEffect:(id)arg1;	// IMP=0x00000000000dcc0f
- (void)setBlip:(id)arg1;	// IMP=0x00000000000dd662
- (id)blip;	// IMP=0x00000000000afd38
- (void)setName:(id)arg1;	// IMP=0x000000000030a63f
- (id)name;	// IMP=0x00000000001acfe5
- (void)setIndex:(int)arg1;	// IMP=0x000000000030a634
- (int)index;	// IMP=0x00000000000afd47
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022267b
- (id)initWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3;	// IMP=0x00000000000ae437
- (id)initWithIndex:(int)arg1 name:(id)arg2 blip:(id)arg3 effects:(id)arg4;	// IMP=0x00000000000ae44e
- (id)init;	// IMP=0x000000000030a624

@end

