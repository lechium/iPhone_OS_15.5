//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIContentEffectDescriptor-Protocol.h>

@class NSArray, NSString, UITargetedPreview;

__attribute__((visibility("hidden")))
@interface _UIWindowSceneActivationEffectDescriptor : NSObject <_UIContentEffectDescriptor>
{
    UITargetedPreview *_targetedPreview;	// 8 = 0x8
}

+ (id)descriptorWithPreview:(id)arg1;	// IMP=0x0000000001241942
- (void).cxx_destruct;	// IMP=0x0000000001241aff
@property(readonly, nonatomic) UITargetedPreview *targetedPreview; // @synthesize targetedPreview=_targetedPreview;
- (_Bool)canTransitionInPlaceToEffectWithDescriptor:(id)arg1;	// IMP=0x0000000001241a26
@property(readonly, nonatomic) NSArray *compatibleDescriptors;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

