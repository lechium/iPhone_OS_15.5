//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CCSRemoteServiceConnection;

@interface CCSControlCenterService : NSObject
{
    CCSRemoteServiceConnection *_connection;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000000000094a8
- (void).cxx_destruct;	// IMP=0x000000000000962e
- (void)presentModuleWithIdentifier:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009618
- (void)setVisibility:(_Bool)arg1 forModuleWithIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009602
- (void)requestDisableModuleWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000095ec
- (void)requestEnableModuleWithIdentifier:(id)arg1 force:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000095d6
- (void)requestEnableModuleWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000095bf
- (void)getEnabledStateOfModuleWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000095a9
- (void)requestAvailableModuleIdentifiersWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009593
- (id)_init;	// IMP=0x000000000000953d

@end
