//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterUI/GKMatchmakerHostProtocol-Protocol.h>

@class GKGame, NSString;

@interface GKMatchmakerExtensionHostContext <GKMatchmakerHostProtocol>
{
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x000000000015e4ae
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x000000000015e495
- (void)shareMatchWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000015e4c7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GKGame *game;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

