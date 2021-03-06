//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class AUAudioUnitViewService, AURemoteHost;

@interface AURemoteExtensionContext : NSExtensionContext
{
    AURemoteHost *_host;	// 8 = 0x8
    _Bool _isUIExtension;	// 16 = 0x10
    _Bool _isRunningInProcess;	// 17 = 0x11
    AUAudioUnitViewService *_viewService;	// 24 = 0x18
}

+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x00000000000555cf
+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x000000000005559f
+ (_Bool)instancesRespondToSelector:(SEL)arg1;	// IMP=0x000000000005553e
+ (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x00000000000554bb
- (void).cxx_destruct;	// IMP=0x0000000000054f2c
@property(nonatomic) AUAudioUnitViewService *viewService; // @synthesize viewService=_viewService;
- (void)open:(CDUnknownBlockType)arg1;	// IMP=0x0000000000054a4c
- (void)requestViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000549b1
- (id)iOSViewController;	// IMP=0x0000000000054914
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;	// IMP=0x000000000005422b
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000541f9

@end

