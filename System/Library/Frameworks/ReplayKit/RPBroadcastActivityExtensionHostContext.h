//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <ReplayKit/RPBroadcastActivityCommunicationHostProtocol-Protocol.h>

@class RPBroadcastActivityHostViewController;

@interface RPBroadcastActivityExtensionHostContext : NSExtensionContext <RPBroadcastActivityCommunicationHostProtocol>
{
    RPBroadcastActivityHostViewController *_hostViewController;	// 8 = 0x8
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x0000000000011243
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x0000000000011223
- (void).cxx_destruct;	// IMP=0x0000000000011316
@property(nonatomic) __weak RPBroadcastActivityHostViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
- (id)extensionObjectProxy;	// IMP=0x0000000000011263
- (oneway void)presentationInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000111c6
- (oneway void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 cancelled:(_Bool)arg4;	// IMP=0x000000000001112e

@end

