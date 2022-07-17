//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSUserActivity, UITargetedPreview, UIWindowSceneActivationRequestOptions;
@protocol _UIWindowSceneActivator;

@interface UIWindowSceneActivationConfiguration : NSObject <NSCopying>
{
    NSUserActivity *_userActivity;	// 8 = 0x8
    UIWindowSceneActivationRequestOptions *_options;	// 16 = 0x10
    UITargetedPreview *_preview;	// 24 = 0x18
    unsigned long long __animationSource;	// 32 = 0x20
    id <_UIWindowSceneActivator> __sceneActivator;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002ad286
@property(nonatomic, setter=_setSceneActivator:) __weak id <_UIWindowSceneActivator> _sceneActivator; // @synthesize _sceneActivator=__sceneActivator;
@property(nonatomic, setter=_setAnimationSource:) unsigned long long _animationSource; // @synthesize _animationSource=__animationSource;
@property(retain, nonatomic) UITargetedPreview *preview; // @synthesize preview=_preview;
@property(retain, nonatomic) UIWindowSceneActivationRequestOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
- (id)description;	// IMP=0x00000000002acf93
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002ace45
- (id)initWithUserActivity:(id)arg1;	// IMP=0x00000000002acdda

@end
