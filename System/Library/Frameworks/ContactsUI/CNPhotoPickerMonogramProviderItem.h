//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/CNVisualIdentityPickerTextEditableProviderItem-Protocol.h>

@class CNAvatarImageRenderer, CNVisualIdentity, NSData, NSString, UIColor;
@protocol CNAvatarImageRenderingScope;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerMonogramProviderItem <CNVisualIdentityPickerTextEditableProviderItem>
{
    _Bool _isContactImage;	// 8 = 0x8
    _Bool _hasUnknownColor;	// 9 = 0x9
    _Bool _isVariantOptionItem;	// 10 = 0xa
    NSString *_monogramText;	// 16 = 0x10
    CNVisualIdentity *_visualIdentity;	// 24 = 0x18
    CNAvatarImageRenderer *_avatarRenderer;	// 32 = 0x20
    id <CNAvatarImageRenderingScope> _renderingScope;	// 40 = 0x28
    NSData *_monogramData;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001a08e4
@property(nonatomic) _Bool isVariantOptionItem; // @synthesize isVariantOptionItem=_isVariantOptionItem;
@property(retain, nonatomic) NSData *monogramData; // @synthesize monogramData=_monogramData;
@property(nonatomic) _Bool hasUnknownColor; // @synthesize hasUnknownColor=_hasUnknownColor;
@property(nonatomic) _Bool isContactImage; // @synthesize isContactImage=_isContactImage;
@property(retain, nonatomic) id <CNAvatarImageRenderingScope> renderingScope; // @synthesize renderingScope=_renderingScope;
@property(retain, nonatomic) CNAvatarImageRenderer *avatarRenderer; // @synthesize avatarRenderer=_avatarRenderer;
@property(retain, nonatomic) CNVisualIdentity *visualIdentity; // @synthesize visualIdentity=_visualIdentity;
@property(retain, nonatomic) NSString *monogramText; // @synthesize monogramText=_monogramText;
- (unsigned long long)hash;	// IMP=0x00000000001a074d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a05ad
- (id)updatedProviderItemWithText:(id)arg1;	// IMP=0x00000000001a04d7
- (id)contactImageForMetadataStore;	// IMP=0x00000000001a0349
- (id)createColorVariantItemsExcludingSelf;	// IMP=0x00000000001a02b9
- (id)createColorVariantItems;	// IMP=0x00000000001a01f5
- (id)createVariantsItemsWithVariantsManager:(id)arg1;	// IMP=0x00000000001a00f5
- (id)monogramVariantItemForColor:(id)arg1;	// IMP=0x000000000019fec7
- (void)updateVisualIdentity:(id)arg1;	// IMP=0x000000000019fd53
- (void)updateWithMonogramData:(id)arg1;	// IMP=0x000000000019fced
- (void)renderMonogramData;	// IMP=0x000000000019fa00
- (id)generateThumbnailImageDataIfNeeded;	// IMP=0x000000000019f998
- (id)thumbnailImageData;	// IMP=0x000000000019f8f5
- (id)imageData;	// IMP=0x000000000019f852
- (id)variantIdentifier;	// IMP=0x000000000019f7d8
- (id)localizedVariantsTitle;	// IMP=0x000000000019f77c
- (_Bool)isGrayMonogramItem;	// IMP=0x000000000019f719
- (_Bool)allowsMoveAndScale;	// IMP=0x000000000019f711
- (_Bool)allowsEditing;	// IMP=0x000000000019f6b7
- (_Bool)shouldShowCaption;	// IMP=0x000000000019f6af
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) NSString *itemText;
- (unsigned long long)imageType;	// IMP=0x000000000019f59d
- (_Bool)allowsVariants;	// IMP=0x000000000019f521
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019f3af
- (id)initWithImageData:(id)arg1 thumbnailImageData:(id)arg2 fullscreenImageData:(id)arg3 cropRect:(struct CGRect)arg4 renderingScope:(id)arg5 avatarRenderer:(id)arg6 isVariantOptionItem:(_Bool)arg7;	// IMP=0x000000000019f2b0

@end
