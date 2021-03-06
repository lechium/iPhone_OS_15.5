//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLAssetsdNotificationServiceProtocol-Protocol.h>

@class NSString;

@interface PLAssetsdNotificationService <PLAssetsdNotificationServiceProtocol>
{
}

- (void)notifyEndOfInterestForUnrenderedCinematicVideoItems;	// IMP=0x000000000043e353
- (void)notifyStartOfInterestForUnrenderedCinematicVideoItems;	// IMP=0x000000000043e13c
- (void)noteGoingToExpireCMMsAlertWithCMMUUIDs:(id)arg1 thumbnailImageData:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4;	// IMP=0x000000000043dec7
- (void)noteSuggestedCMMAlertViewedWithCMMUUID:(id)arg1;	// IMP=0x000000000043dc99
- (void)noteSuggestedCMMAlertWithCMMUUID:(id)arg1 notificationDeliveryDate:(id)arg2;	// IMP=0x000000000043da24
- (void)reportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)arg1;	// IMP=0x000000000043d7f6
- (void)respondToPhotoStreamInvitationWithAlbumCloudGUID:(id)arg1 acceptInvitation:(_Bool)arg2;	// IMP=0x000000000043d5c1
- (void)noteInterestingMemoryAlertViewedWithUUID:(id)arg1;	// IMP=0x000000000043d393
- (void)noteInterestingMemoryAlertWithMemoryUUID:(id)arg1 notificationDeliveryDate:(id)arg2;	// IMP=0x000000000043d11e
- (void)userViewedNotificationWithAlbumCloudGUID:(id)arg1;	// IMP=0x000000000043cef0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

