//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacementUndocked <NSSecureCoding>
{
    struct CGPoint _normalizedOffset;	// 40 = 0x28
    struct UIEdgeInsets _chromeBuffer;	// 56 = 0x38
}

+ (struct CGPoint)computeOffsetForOffset:(struct CGPoint)arg1 withSize:(struct CGSize)arg2 chromeBuffer:(struct UIEdgeInsets)arg3 onScreenSize:(struct CGSize)arg4;	// IMP=0x0000000000a3a8f1
+ (id)placementWithUndockedOffset:(struct CGPoint)arg1 chromeBuffer:(struct UIEdgeInsets)arg2;	// IMP=0x0000000000a3a5f5
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000a3a5ed
+ (id)infoWithPoint:(struct CGPoint)arg1;	// IMP=0x0000000000a3a2d8
@property(nonatomic) struct CGPoint normalizedOffset; // @synthesize normalizedOffset=_normalizedOffset;
@property(nonatomic) struct UIEdgeInsets chromeBuffer; // @synthesize chromeBuffer=_chromeBuffer;
- (struct CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(_Bool)arg2;	// IMP=0x0000000000a3acad
- (_Bool)isUndocked;	// IMP=0x0000000000a3aca5
- (_Bool)inputViewWillAppear;	// IMP=0x0000000000a3ac9d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a3abf0
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;	// IMP=0x0000000000a3aa35
- (double)heightOfInputViews:(id)arg1;	// IMP=0x0000000000a3a956
- (void)setOffset:(struct CGPoint)arg1;	// IMP=0x0000000000a3a8a7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a3a79a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a3a65e
- (Class)applicatorClassForKeyboard:(_Bool)arg1;	// IMP=0x0000000000a3a5dc
- (id)applicatorInfoForOwner:(id)arg1;	// IMP=0x0000000000a3a380

@end
