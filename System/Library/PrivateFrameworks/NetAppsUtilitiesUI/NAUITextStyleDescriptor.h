//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetAppsUtilitiesUI/NSCopying-Protocol.h>

@class NSString;

@interface NAUITextStyleDescriptor : NSObject <NSCopying>
{
    _Bool _allowsAccessibilitySizes;	// 8 = 0x8
    _Bool _allowsSmallSizes;	// 9 = 0x9
    unsigned int _symbolicTraits;	// 12 = 0xc
    NSString *_textStyle;	// 16 = 0x10
}

+ (id)na_identity;	// IMP=0x000000000000268a
+ (id)defaultFontForTextStyleDescriptor:(id)arg1;	// IMP=0x000000000000257d
+ (id)fontWithTextStyleDescriptor:(id)arg1;	// IMP=0x0000000000002482
+ (id)descriptorWithTextStyle:(id)arg1;	// IMP=0x0000000000002241
- (void).cxx_destruct;	// IMP=0x0000000000002aa9
@property(readonly, nonatomic) _Bool allowsSmallSizes; // @synthesize allowsSmallSizes=_allowsSmallSizes;
@property(readonly, nonatomic) _Bool allowsAccessibilitySizes; // @synthesize allowsAccessibilitySizes=_allowsAccessibilitySizes;
@property(readonly, nonatomic) unsigned int symbolicTraits; // @synthesize symbolicTraits=_symbolicTraits;
@property(readonly, copy, nonatomic) NSString *textStyle; // @synthesize textStyle=_textStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002a79
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002a03
- (unsigned long long)hash;	// IMP=0x00000000000029a8
- (id)description;	// IMP=0x0000000000002888
- (id)initWithTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2 allowsAccessibilitySizes:(_Bool)arg3 allowsSmallSizes:(_Bool)arg4;	// IMP=0x00000000000025fa
- (id)init;	// IMP=0x00000000000025ec
- (id)descriptorByDisallowingSmallSizes;	// IMP=0x00000000000023ea
- (id)descriptorByDisallowingAccessibilitySizes;	// IMP=0x0000000000002352
- (id)descriptorByAddingSymbolicTraits:(unsigned int)arg1 removingSymbolicTraits:(unsigned int)arg2;	// IMP=0x000000000000229c

@end
