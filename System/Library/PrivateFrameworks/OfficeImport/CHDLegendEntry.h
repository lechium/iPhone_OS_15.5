//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDResources;

__attribute__((visibility("hidden")))
@interface CHDLegendEntry : NSObject
{
    unsigned long long mFontIndex;	// 8 = 0x8
    unsigned int mEntryIndex;	// 16 = 0x10
    EDResources *mResources;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003958c6
- (id)description;	// IMP=0x0000000000395888
- (void)setEntryIndex:(unsigned int)arg1;	// IMP=0x000000000021e12f
- (unsigned int)entryIndex;	// IMP=0x000000000039587f
- (void)setFont:(id)arg1;	// IMP=0x000000000024a9b6
- (id)font;	// IMP=0x00000000003957e6
- (id)initWithResources:(id)arg1;	// IMP=0x000000000021e09e
- (void)setFontIndex:(unsigned long long)arg1;	// IMP=0x000000000021e125
- (unsigned long long)fontIndex;	// IMP=0x00000000003958d4

@end
