//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

#import <ChatKit/NSDiscardableContent-Protocol.h>

@interface UIImage (ChatKitAdditions) <NSDiscardableContent>
+ (id)__ck_actionImageForSubscriptionShortName:(id)arg1 maxSubscriptionLabelWidth:(double)arg2;	// IMP=0x0000000000153b17
+ (id)ckTemplateImageNamed:(id)arg1;	// IMP=0x0000000000153ac2
+ (id)ckImageNamed:(id)arg1 withTintColor:(id)arg2;	// IMP=0x0000000000153a38
+ (id)ckImageWithData:(id)arg1;	// IMP=0x0000000000152d9c
+ (id)abImageNamed:(id)arg1;	// IMP=0x0000000000152ced
+ (id)ckColorImageOfSize:(struct CGSize)arg1 withColor:(id)arg2;	// IMP=0x0000000000152c30
+ (id)ckImageNamed:(id)arg1 compatibleWithTraitCollection:(id)arg2;	// IMP=0x0000000000152b96
+ (id)ckImageNamed:(id)arg1;	// IMP=0x0000000000152b82
+ (id)placeholderExtensionIcon;	// IMP=0x00000000001f3050
+ (id)badgeIconForImageNamed:(id)arg1 inBundle:(id)arg2;	// IMP=0x00000000001f2fe8
- (id)ckImageWithTintColor:(id)arg1;	// IMP=0x000000000015389b
- (void)decode;	// IMP=0x000000000015386a
- (id)ck_imageCroppedToCircle;	// IMP=0x00000000001536c3
- (id)__ck_ASTCRepresentation;	// IMP=0x0000000000153575
- (struct CGRect)__ck_contentsCenter;	// IMP=0x00000000001534d5
- (id)__ck_imageWithOrientation:(long long)arg1;	// IMP=0x0000000000153087
- (id)__ck_resizableBalloonWithBalloonDescriptor:(struct CKBalloonDescriptor_t)arg1 framed:(_Bool)arg2;	// IMP=0x0000000000152e9a
- (_Bool)isContentDiscarded;	// IMP=0x00000000001f3145
- (void)discardContentIfPossible;	// IMP=0x00000000001f313f
- (void)endContentAccess;	// IMP=0x00000000001f3139
- (_Bool)beginContentAccess;	// IMP=0x00000000001f3131
- (id)iconForInterfaceStyle:(long long)arg1;	// IMP=0x00000000001f2ed5
@end

