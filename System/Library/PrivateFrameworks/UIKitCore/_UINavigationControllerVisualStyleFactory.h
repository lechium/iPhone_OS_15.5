//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UINavigationControllerVisualStyleProviding-Protocol.h>

@class NSString;
@protocol _UINavigationControllerVisualStyleProviding;

@interface _UINavigationControllerVisualStyleFactory : NSObject <_UINavigationControllerVisualStyleProviding>
{
    id <_UINavigationControllerVisualStyleProviding> _visualStyleProvider;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000000007e48be
- (void).cxx_destruct;	// IMP=0x00000000007e4a19
@property(retain, nonatomic) id <_UINavigationControllerVisualStyleProviding> visualStyleProvider; // @synthesize visualStyleProvider=_visualStyleProvider;
- (id)init;	// IMP=0x00000000007e49a8
- (id)styleForNavigationController:(id)arg1;	// IMP=0x00000000007e4925
- (void)registerVisualStyleProvider:(id)arg1;	// IMP=0x00000000007e4913

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

