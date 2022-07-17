//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MessageUI/NSSecureCoding-Protocol.h>

@class UIImage;

@interface MFAttachmentDragPreviewInfo : NSObject <NSSecureCoding>
{
    _Bool _isInlineImage;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    struct CGPoint _center;	// 24 = 0x18
    struct CGSize _displaySize;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001b3fd
- (void).cxx_destruct;	// IMP=0x000000000001bae1
@property(nonatomic) struct CGSize displaySize; // @synthesize displaySize=_displaySize;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(nonatomic) _Bool isInlineImage; // @synthesize isInlineImage=_isInlineImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)targetedDragPreviewInContainer:(id)arg1 centerOffset:(struct CGPoint)arg2;	// IMP=0x000000000001b67a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001b509
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001b405

@end
