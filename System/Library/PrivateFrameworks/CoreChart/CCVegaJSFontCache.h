//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CCVegaJSFontCache : NSObject
{
    NSMutableDictionary *_cache;	// 8 = 0x8
    NSMutableDictionary *_styleCache;	// 16 = 0x10
    NSMutableDictionary *_internalNameCache;	// 24 = 0x18
}

+ (void)cleanUp;	// IMP=0x000000000000787d
+ (struct __CTFont *)cacheedFontForInternalName:(id)arg1;	// IMP=0x0000000000007799
+ (void)cacheFont:(struct __CTFont *)arg1 forInternalName:(id)arg2;	// IMP=0x00000000000076f3
+ (id)fontMetricsForTextStyle:(id)arg1 options:(id)arg2;	// IMP=0x00000000000074d8
+ (id)fontWithFontFamily:(id)arg1 fontSize:(double)arg2 fontWeight:(id)arg3 fontStyle:(id)arg4 fontVariant:(id)arg5 options:(id)arg6;	// IMP=0x00000000000072b7
+ (id)fontWithCSSFontString:(id)arg1 options:(id)arg2;	// IMP=0x0000000000007122
+ (id)sharedCache;	// IMP=0x00000000000070cd
- (void).cxx_destruct;	// IMP=0x000000000000791f
- (id)init;	// IMP=0x0000000000007041

@end

