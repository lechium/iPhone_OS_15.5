//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AVTAvatarAttributeEditorLayoutProvider : NSObject
{
}

+ (id)editorToActionsTransitionStartingLayoutInContainerOfSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2 userInfoViewHeight:(double)arg3 RTL:(_Bool)arg4 environment:(id)arg5;	// IMP=0x00000000000d709d
+ (id)actionsToEditorTransitionStartingLayoutInContainerOfSize:(struct CGSize)arg1 attributesContentViewExtraHeight:(double)arg2 insets:(struct UIEdgeInsets)arg3 userInfoViewHeight:(double)arg4 RTL:(_Bool)arg5 avatarViewStartFrame:(struct CGRect)arg6 avatarViewAlpha:(double)arg7 environment:(id)arg8;	// IMP=0x00000000000d6fa5
+ (id)defaultLayoutInContainerOfSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2 userInfoViewHeight:(double)arg3 RTL:(_Bool)arg4 environment:(id)arg5 maxGroupLabelWidth:(double)arg6;	// IMP=0x00000000000d6e87
+ (id)defaultLayoutInContainerOfSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2 userInfoViewHeight:(double)arg3 RTL:(_Bool)arg4 environment:(id)arg5;	// IMP=0x00000000000d6e6f
+ (_Bool)shouldShowSideGroupPickerForContainerSize:(struct CGSize)arg1 forEnvironment:(id)arg2;	// IMP=0x00000000000d6e3a

@end
