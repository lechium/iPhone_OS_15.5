//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class CNContact, NPKCompanionViewServiceConnectionServer, NPKRemotePassActionEnterValueRequest, NPKRemotePassActionSelectItemRequest;

@protocol NPKCompanionViewServiceConnectionServerDelegate <NSObject>
- (void)viewServiceConnectionServer:(NPKCompanionViewServiceConnectionServer *)arg1 didRequestPresentRemotePassItemSelectionViewControllerForRequest:(NPKRemotePassActionSelectItemRequest *)arg2 contact:(CNContact *)arg3 completion:(void (^)(_Bool))arg4;
- (void)viewServiceConnectionServer:(NPKCompanionViewServiceConnectionServer *)arg1 didRequestPresentRemotePassValueEntryViewControllerForRequest:(NPKRemotePassActionEnterValueRequest *)arg2 contact:(CNContact *)arg3 completion:(void (^)(_Bool))arg4;
@end
