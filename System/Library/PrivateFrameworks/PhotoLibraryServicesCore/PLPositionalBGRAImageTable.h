//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PLPositionalBGRAImageTable
{
}

+ (const struct __CFString *)colorSpaceName;	// IMP=0x000000000008e532
+ (unsigned long long)metalPixelFormat;	// IMP=0x000000000008e527
- (struct CGImage *)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2;	// IMP=0x000000000008e672
- (void)getImageDataOffset:(long long *)arg1 size:(struct CGSize *)arg2 bytesPerRow:(unsigned long long *)arg3 fromEntryFooter:(struct PLImageTableEntryFooter_s *)arg4;	// IMP=0x000000000008e542

@end
