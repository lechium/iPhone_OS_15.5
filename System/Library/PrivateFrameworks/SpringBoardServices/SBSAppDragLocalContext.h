//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString, NSURL, NSUserActivity, UIView;

@interface SBSAppDragLocalContext : NSObject
{
    _Bool _cancelsViaScaleAndFade;	// 8 = 0x8
    _Bool _sourceLocal;	// 9 = 0x9
    NSString *_applicationBundleIdentifier;	// 16 = 0x10
    NSSet *_launchActions;	// 24 = 0x18
    long long _startLocation;	// 32 = 0x20
    NSSet *_containedIconIdentifiers;	// 40 = 0x28
    NSString *_activeCustomIconDataSourceUniqueIdentifier;	// 48 = 0x30
    NSArray *_customIconDataSourceConfigurations;	// 56 = 0x38
    unsigned long long _gridSizeClass;	// 64 = 0x40
    NSString *_draggedSceneIdentifier;	// 72 = 0x48
    NSURL *_launchURL;	// 80 = 0x50
    NSUserActivity *_userActivity;	// 88 = 0x58
    UIView *_portaledPreview;	// 96 = 0x60
    NSString *_droppedIconIdentifier;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000003da6f
@property(copy, nonatomic) NSString *droppedIconIdentifier; // @synthesize droppedIconIdentifier=_droppedIconIdentifier;
@property(nonatomic, getter=isSourceLocal) _Bool sourceLocal; // @synthesize sourceLocal=_sourceLocal;
@property(nonatomic) _Bool cancelsViaScaleAndFade; // @synthesize cancelsViaScaleAndFade=_cancelsViaScaleAndFade;
@property(retain, nonatomic) UIView *portaledPreview; // @synthesize portaledPreview=_portaledPreview;
@property(retain, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(copy, nonatomic) NSURL *launchURL; // @synthesize launchURL=_launchURL;
@property(copy, nonatomic) NSString *draggedSceneIdentifier; // @synthesize draggedSceneIdentifier=_draggedSceneIdentifier;
@property(nonatomic) unsigned long long gridSizeClass; // @synthesize gridSizeClass=_gridSizeClass;
@property(copy, nonatomic) NSArray *customIconDataSourceConfigurations; // @synthesize customIconDataSourceConfigurations=_customIconDataSourceConfigurations;
@property(copy, nonatomic) NSString *activeCustomIconDataSourceUniqueIdentifier; // @synthesize activeCustomIconDataSourceUniqueIdentifier=_activeCustomIconDataSourceUniqueIdentifier;
@property(copy, nonatomic) NSSet *containedIconIdentifiers; // @synthesize containedIconIdentifiers=_containedIconIdentifiers;
@property(readonly, nonatomic) long long startLocation; // @synthesize startLocation=_startLocation;
@property(readonly, copy, nonatomic) NSSet *launchActions; // @synthesize launchActions=_launchActions;
@property(copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
- (id)succinctDescriptionBuilder;	// IMP=0x000000000003d922
- (id)succinctDescription;	// IMP=0x000000000003d8d2
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000003d70b
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000003d6bb
- (id)description;	// IMP=0x000000000003d6a2
- (id)initWithApplicationBundleIdentifier:(id)arg1 withLaunchActions:(id)arg2 startLocation:(long long)arg3;	// IMP=0x000000000003d5e3

@end

