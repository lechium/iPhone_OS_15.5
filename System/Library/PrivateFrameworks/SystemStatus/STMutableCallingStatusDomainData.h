//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SystemStatus/STMutableStatusDomainData-Protocol.h>
#import <SystemStatus/STMutableStatusDomainDataDifferencing-Protocol.h>

@class NSArray, NSSet, NSString, STMutableListData;

@interface STMutableCallingStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>
{
}

@property(readonly, copy, nonatomic) STMutableListData *callDescriptorListData;
- (_Bool)applyDiff:(id)arg1;	// IMP=0x0000000000014a02
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000149ca
- (void)removeRingingVideoConferenceAttribution:(id)arg1;	// IMP=0x000000000001494e
- (void)addRingingVideoConferenceAttribution:(id)arg1;	// IMP=0x00000000000148d2
@property(copy, nonatomic) NSSet *ringingVideoConferenceAttributions; // @dynamic ringingVideoConferenceAttributions;
- (void)removeActiveVideoConferenceAttribution:(id)arg1;	// IMP=0x00000000000146d6
- (void)addActiveVideoConferenceAttribution:(id)arg1;	// IMP=0x000000000001465d
@property(copy, nonatomic) NSSet *activeVideoConferenceAttributions; // @dynamic activeVideoConferenceAttributions;
- (void)removeRingingCallAttribution:(id)arg1;	// IMP=0x0000000000014461
- (void)addRingingCallAttribution:(id)arg1;	// IMP=0x00000000000143e5
@property(copy, nonatomic) NSSet *ringingCallAttributions; // @dynamic ringingCallAttributions;
- (void)removeActiveCallAttribution:(id)arg1;	// IMP=0x00000000000141e9
- (void)addActiveCallAttribution:(id)arg1;	// IMP=0x0000000000014170
@property(copy, nonatomic) NSSet *activeCallAttributions; // @dynamic activeCallAttributions;
- (void)removeCallDescriptor:(id)arg1;	// IMP=0x0000000000013f78
- (void)addCallDescriptor:(id)arg1;	// IMP=0x0000000000013f00
@property(copy, nonatomic) NSArray *callDescriptors; // @dynamic callDescriptors;
- (id)initWithCallDescriptorListData:(id)arg1;	// IMP=0x0000000000013e2e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

