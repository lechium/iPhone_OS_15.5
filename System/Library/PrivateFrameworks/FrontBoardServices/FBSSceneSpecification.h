//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>

@class NSString;

@interface FBSSceneSpecification : NSObject <NSCopying, BSDescriptionProviding>
{
    _Bool _forLocalSynchronousSceneClientProvider;	// 8 = 0x8
}

+ (id)specification;	// IMP=0x000000000003ae57
+ (void)initialize;	// IMP=0x000000000003ab5a
+ (CDUnknownFunctionPointerType)_swizzleMethodOnClass:(Class)arg1 originalSelector:(SEL)arg2 block:(id)arg3;	// IMP=0x000000000003aa4f
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000003b486
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000003b436
- (id)succinctDescriptionBuilder;	// IMP=0x000000000003b41a
- (id)succinctDescription;	// IMP=0x000000000003b3ca
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003af33
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003af14
- (id)_copyForLocalSynchronousSceneClientProvider;	// IMP=0x000000000003aefd
- (_Bool)isValid;	// IMP=0x000000000003aeac
@property(readonly, nonatomic) Class transitionContextClass;
@property(readonly, nonatomic) Class clientSettingsClass;
@property(readonly, nonatomic) Class settingsClass;
@property(readonly, nonatomic) Class clientAgentClass;
@property(readonly, nonatomic) Class hostAgentClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

