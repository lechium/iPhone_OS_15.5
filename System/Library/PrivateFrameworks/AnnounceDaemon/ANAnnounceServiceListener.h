//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AnnounceDaemon/ANAnnounceServiceInterface-Protocol.h>
#import <AnnounceDaemon/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCListener;

@interface ANAnnounceServiceListener : NSObject <ANAnnounceServiceInterface, NSXPCListenerDelegate>
{
    NSXPCListener *_listener;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000010cc3
@property(readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (void)_translateSentHandlerResponseAnnouncement:(id)arg1 request:(id)arg2 error:(id)arg3 toRequestSentHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000010a25
- (void)_handleError:(long long)arg1 request:(id)arg2 requestSentCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000108cd
- (void)_handleError:(long long)arg1 request:(id)arg2 sentCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010775
- (void)_sendReplyRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010376
- (void)_sendRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010292
- (void)prewarm:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010217
- (void)isEndpointWithUUID:(id)arg1 inRoomWithName:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000001015c
- (void)isAnnounceEnabledForAnyAccessoryOrUserInHome:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010096
- (void)isAnnounceEnabledForAnyAccessoryInHome:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ffd0
- (void)isLocalDeviceInRoom:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ff32
- (void)homeNamesForContext:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000fe86
- (void)contextFromAnnouncement:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000fdf4
- (void)getScanningDeviceCandidates:(CDUnknownBlockType)arg1;	// IMP=0x000000000000fd64
- (void)lastPlayedAnnouncementInfo:(CDUnknownBlockType)arg1;	// IMP=0x000000000000fd4f
- (void)getUnplayedAnnouncementsForEndpointID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000fa86
- (void)getReceivedAnnouncementsForEndpointID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f982
- (void)announcementForID:(id)arg1 endpointID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000000f8c3
- (void)receivedAnnouncementIdentifiersForEndpointID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f7fd
- (void)mockAnnouncement:(id)arg1 forHomeWithName:(id)arg2 playbackDeadline:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000f5e0
- (void)sendRequestLegacy:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f515
- (void)sendRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000f2b8
- (void)localParticipant:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f228
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000000ea88
- (void)cleanForExit;	// IMP=0x000000000000ea4b
- (id)init;	// IMP=0x000000000000e950

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
