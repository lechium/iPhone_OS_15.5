//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface DDURLPreviewAction
{
}

+ (_Bool)handlesUrl:(id)arg1 result:(struct __DDResult *)arg2;	// IMP=0x000000000000a800
+ (id)validatedURLWithURL:(id)arg1 result:(struct __DDResult *)arg2;	// IMP=0x000000000000a6ac
- (id)commitURL;	// IMP=0x000000000000a977
- (void)setPreviewMode:(_Bool)arg1;	// IMP=0x000000000000a92b
- (_Bool)requiresEmbeddingNavigationController;	// IMP=0x000000000000a923
- (void)safariViewControllerDidFinish:(id)arg1;	// IMP=0x000000000000a91d
- (id)createViewController;	// IMP=0x000000000000a86a
- (id)menuActions;	// IMP=0x000000000000a268
- (_Bool)showMenuTitle;	// IMP=0x000000000000a260

@end

