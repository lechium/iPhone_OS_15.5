//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface _NTKBundleBundleComplicationLoader
{
    NSArray *_urls;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007b132
@property(retain, nonatomic) NSArray *urls; // @synthesize urls=_urls;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007b0ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007b044
- (void)_loadClassesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007aea5
- (void)_enumerateBundles:(CDUnknownBlockType)arg1;	// IMP=0x000000000007aba3

@end

