//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/BSInvalidatable-Protocol.h>

@class NSString, SBAppPlatterDragPreview;

@interface SBAppPlatterDragPreviewDelayCleanupAssertion : NSObject <BSInvalidatable, BSDescriptionProviding>
{
    _Bool _invalidated;	// 8 = 0x8
    SBAppPlatterDragPreview *_dragPreview;	// 16 = 0x10
    NSString *_reason;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003cfb98
@property(nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) __weak SBAppPlatterDragPreview *dragPreview; // @synthesize dragPreview=_dragPreview;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000003cfb0b
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000003cfabb
- (id)succinctDescriptionBuilder;	// IMP=0x00000000003cfa9f
- (id)succinctDescription;	// IMP=0x00000000003cfa4f
@property(readonly, copy) NSString *description;
- (void)invalidate;	// IMP=0x00000000003cf9be
- (void)dealloc;	// IMP=0x00000000003cf980
- (id)initWithDragPreview:(id)arg1 reason:(id)arg2;	// IMP=0x00000000003cf8dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

