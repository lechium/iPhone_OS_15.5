//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TipsCore/TPSAppController.h>

@class MISSING_TYPE;

@interface TPSUIAppController : TPSAppController
{
    MISSING_TYPE *syncQueue;	// 8 = 0x8
    MISSING_TYPE *attributedStringCache;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000c7d0
- (void)resetAttributedStringCache;	// IMP=0x000000000000c770
- (void)updateAttributedString:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x000000000000c500
- (id)attributedStringForIdentifier:(id)arg1;	// IMP=0x000000000000c230
- (id)assetConfigurationForAssets:(id)arg1 language:(id)arg2 sizeClass:(long long)arg3 style:(long long)arg4;	// IMP=0x000000000000bef0
- (void)contentWillUpdate;	// IMP=0x000000000000be30
- (id)init;	// IMP=0x000000000000bc00

@end
