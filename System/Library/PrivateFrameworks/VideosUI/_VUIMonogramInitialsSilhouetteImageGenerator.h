//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _VUIMonogramInitialsSilhouetteImageGenerator
{
}

+ (id)monogramImageWithDescription:(id)arg1;	// IMP=0x000000000020c600
+ (void)drawInitialsWithRect:(struct CGRect)arg1 andDescription:(id)arg2;	// IMP=0x000000000020bc66
+ (id)_initialsForFirstName:(id)arg1 lastName:(id)arg2;	// IMP=0x000000000020baef
- (void)cancelLoad:(id)arg1;	// IMP=0x000000000020d071
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000020cc99
- (id)imageKeyForObject:(id)arg1;	// IMP=0x000000000020c844

@end
