//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CNUIPRLikenessLoadingGroupPlaceholderProvider
{
    unsigned long long _backgroundStyle;	// 24 = 0x18
}

@property(readonly, nonatomic) unsigned long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
- (struct CGImage *)renderRoundedRectImageForSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x000000000004a8e2
- (struct CGImage *)renderCircularImageForSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x000000000004a887
- (id)initWithBackgroundStyle:(unsigned long long)arg1;	// IMP=0x000000000004a827

@end

