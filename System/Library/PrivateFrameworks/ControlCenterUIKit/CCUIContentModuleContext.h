//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CCUIContentModuleContextDelegate;

@interface CCUIContentModuleContext : NSObject
{
    NSString *_moduleIdentifier;	// 8 = 0x8
    id <CCUIContentModuleContextDelegate> _delegate;	// 16 = 0x10
}

+ (void)performWithoutAnimationWhileHidden:(CDUnknownBlockType)arg1;	// IMP=0x000000000001c147
+ (void)performWithoutAnimationWhileHiddenInWindow:(id)arg1 actions:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c0c5
+ (void)setAnimationsPermitted:(_Bool)arg1 inWindow:(id)arg2;	// IMP=0x000000000001bfe6
+ (_Bool)areAnimationsPermittedInWindow:(id)arg1;	// IMP=0x000000000001bf87
+ (void)initialize;	// IMP=0x000000000001b30c
+ (id)_sharedOpenApplicationOptions;	// IMP=0x000000000001b22b
+ (id)_sharedOpenAppService;	// IMP=0x000000000001b1c6
- (void).cxx_destruct;	// IMP=0x000000000001c1dc
@property(nonatomic) __weak id <CCUIContentModuleContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *moduleIdentifier; // @synthesize moduleIdentifier=_moduleIdentifier;
- (struct CCUIModuleLayoutSize)moduleLayoutSizeForOrientation:(long long)arg1;	// IMP=0x000000000001bf29
- (id)sensorActivityDataForActiveSensorType:(unsigned long long)arg1;	// IMP=0x000000000001bec5
- (void)requestLayoutSizeUpdate;	// IMP=0x000000000001be15
- (void)dismissControlCenter;	// IMP=0x000000000001bd65
- (void)dismissModule;	// IMP=0x000000000001bcb5
- (void)requestExpandModule;	// IMP=0x000000000001bc05
- (void)setHomeGestureDismissalAllowed:(_Bool)arg1;	// IMP=0x000000000001bb66
- (void)enqueueStatusUpdate:(id)arg1;	// IMP=0x000000000001ba74
- (void)openApplication:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001b827
- (void)openApplication:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001b794
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001b505
- (void)requestAuthenticationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b3cf
- (id)initWithModuleIdentifier:(id)arg1;	// IMP=0x000000000001b35c

@end
