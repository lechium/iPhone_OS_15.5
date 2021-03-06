//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUILikenessBadgeTypeProvider-Protocol.h>
#import <ContactsUICore/CNUIPRLikenessProvider-Protocol.h>

@class CNCache, NSData, NSString, UIImage;

@interface CNUIPRLikenessBadgeImageProvider : NSObject <CNUIPRLikenessProvider, CNUILikenessBadgeTypeProvider>
{
    unsigned long long _badgeType;	// 8 = 0x8
    CNCache *_cache;	// 16 = 0x10
    NSData *_badgeImageData;	// 24 = 0x18
    UIImage *_badgeImage;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000016d9c
@property(retain, nonatomic) UIImage *badgeImage; // @synthesize badgeImage=_badgeImage;
@property(retain, nonatomic) NSData *badgeImageData; // @synthesize badgeImageData=_badgeImageData;
@property(readonly, nonatomic) CNCache *cache; // @synthesize cache=_cache;
@property(nonatomic) unsigned long long badgeType; // @synthesize badgeType=_badgeType;
- (unsigned long long)_cnui_likenessType;	// IMP=0x0000000000016d3d
- (struct CGImage *)renderCircularImageForSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x0000000000016b68
- (struct CGImage *)renderRoundedRectImageForSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x0000000000016a88
- (struct CGImage *)_cnui_imageForSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x0000000000016907
- (struct CGImage *)badgeCGImage;	// IMP=0x0000000000016861
- (id)initWithBadge:(id)arg1;	// IMP=0x000000000001676a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

