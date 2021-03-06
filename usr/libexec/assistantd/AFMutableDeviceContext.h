//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/AFDeviceContext.h>

@class AFPeerInfo, NSUUID;

@interface AFMutableDeviceContext : AFDeviceContext
{
}

- (id)description;	// IMP=0x0020000000136407
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000013635c
- (void)removeHistoricalContextForType:(id)arg1;	// IMP=0x001000000013621c
- (void)removeContextSnapshotForType:(id)arg1;	// IMP=0x00100000001360c4
- (void)setSerializedContextSnapshot:(id)arg1 withMetadata:(id)arg2;	// IMP=0x0010000000135d02
- (void)setContextSnapshot:(id)arg1 withMetadata:(id)arg2;	// IMP=0x0010000000135c8a
@property(nonatomic) long long privacyClass; // @dynamic privacyClass;
@property(copy, nonatomic) AFPeerInfo *deviceInfo; // @dynamic deviceInfo;
@property(copy, nonatomic) NSUUID *identifier; // @dynamic identifier;
@property(nonatomic) _Bool fromLocalDevice; // @dynamic fromLocalDevice;

@end

