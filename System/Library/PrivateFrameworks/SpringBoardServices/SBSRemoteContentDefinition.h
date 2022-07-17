//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSDescriptionProviding-Protocol.h>
#import <SpringBoardServices/BSXPCCoding-Protocol.h>
#import <SpringBoardServices/NSCopying-Protocol.h>

@class NSDictionary, NSString;
@protocol OS_xpc_object;

@interface SBSRemoteContentDefinition : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying>
{
    NSString *_serviceName;	// 8 = 0x8
    NSString *_viewControllerClassName;	// 16 = 0x10
    NSObject<OS_xpc_object> *_xpcEndpoint;	// 24 = 0x18
    NSDictionary *_userInfo;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000015e0a
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcEndpoint; // @synthesize xpcEndpoint=_xpcEndpoint;
@property(readonly, copy, nonatomic) NSString *viewControllerClassName; // @synthesize viewControllerClassName=_viewControllerClassName;
@property(readonly, copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000015d54
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000015bc5
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000015b75
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000015b59
- (id)succinctDescription;	// IMP=0x0000000000015b09
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x0000000000015a7e
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x0000000000015989
@property(readonly, copy) NSString *description;
- (id)initWithServiceName:(id)arg1 viewControllerClassName:(id)arg2 xpcEndpoint:(id)arg3 userInfo:(id)arg4;	// IMP=0x000000000001576f
- (id)initWithServiceName:(id)arg1 viewControllerClassName:(id)arg2;	// IMP=0x0000000000015757
- (id)init;	// IMP=0x0000000000015741

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
