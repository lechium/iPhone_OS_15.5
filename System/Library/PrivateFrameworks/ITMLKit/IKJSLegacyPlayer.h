//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSLegacyPlayer-Protocol.h>
#import <ITMLKit/NSObject-Protocol.h>
#import <ITMLKit/_IKJSLegacyPlayer-Protocol.h>
#import <ITMLKit/_IKJSLegacyPlayerProxy-Protocol.h>

@class IKDOMElement, NSString;
@protocol IKJSPlayerAppBridge;

@interface IKJSLegacyPlayer <NSObject, IKJSLegacyPlayer, _IKJSLegacyPlayerProxy, _IKJSLegacyPlayer>
{
    id <IKJSPlayerAppBridge> _appBridge;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007eee3
@property(nonatomic) __weak id <IKJSPlayerAppBridge> appBridge; // @synthesize appBridge=_appBridge;
@property(readonly, nonatomic) __weak IKDOMElement *currentAVMediaElement;
- (id)asPrivateIKJSLegacyPlayer;	// IMP=0x000000000007ee24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
