//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SBAppClipPlaceholderWorkspaceEntity
{
    _Bool _needsUpdate;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    NSString *_futureSceneIdentifier;	// 24 = 0x18
}

+ (_Bool)isAppClipUpdateAvailableForBundleIdentifier:(id)arg1;	// IMP=0x00000000002191ec
- (void).cxx_destruct;	// IMP=0x0000000000219913
@property(readonly, nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;
@property(readonly, copy, nonatomic) NSString *futureSceneIdentifier; // @synthesize futureSceneIdentifier=_futureSceneIdentifier;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000021983e
- (unsigned long long)hash;	// IMP=0x0000000000219821
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000219711
- (id)appClipPlaceholderEntity;	// IMP=0x0000000000219708
- (_Bool)isAppClipPlaceholderEntity;	// IMP=0x0000000000219700
- (Class)viewControllerClass;	// IMP=0x00000000002196ef
- (CDUnknownBlockType)entityGenerator;	// IMP=0x00000000002194c0
- (_Bool)wantsExclusiveForeground;	// IMP=0x00000000002194b8
- (_Bool)supportsPresentationAtAnySize;	// IMP=0x00000000002194b0
- (_Bool)_supportsLayoutRole:(long long)arg1;	// IMP=0x00000000002194a3
- (id)initWithBundleIdentifier:(id)arg1 futureSceneIdentifier:(id)arg2 needsUpdate:(_Bool)arg3;	// IMP=0x000000000021929e

@end

