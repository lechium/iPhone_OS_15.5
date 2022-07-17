//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIDragInteraction.h>

@class NSString, UIGestureRecognizer;
@protocol SBAppPlatterDragSourceViewProviding;

@interface SBWindowDragInteraction : UIDragInteraction
{
    UIGestureRecognizer *_gestureRecognizer;	// 8 = 0x8
    id <SBAppPlatterDragSourceViewProviding> _sourceViewProvider;	// 16 = 0x10
    NSString *_sceneIdentifier;	// 24 = 0x18
    NSString *_bundleIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000005fe714
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property(nonatomic) __weak id <SBAppPlatterDragSourceViewProviding> sourceViewProvider; // @synthesize sourceViewProvider=_sourceViewProvider;
@property(readonly, nonatomic) __weak UIGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (struct CGPoint)_locationInView:(id)arg1;	// IMP=0x00000000005fe611
- (id)initWithDelegate:(id)arg1 gestureRecognizer:(id)arg2;	// IMP=0x00000000005fe5a0

@end
