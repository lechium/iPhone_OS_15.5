//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RAPQuestion, UIImage, VKLabelMarker;
@protocol RAPMapStateProtocol, RAPMenuItem;

__attribute__((visibility("hidden")))
@interface RAPTransitStationAccessPointSelectionQuestion
{
    RAPQuestion<RAPMenuItem> *_followUpQuestion;	// 8 = 0x8
    id <RAPMapStateProtocol> _placePickingMapState;	// 16 = 0x10
    VKLabelMarker *_selectedAccessPointMarker;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000044f07e
@property(readonly, nonatomic) VKLabelMarker *selectedAccessPointMarker; // @synthesize selectedAccessPointMarker=_selectedAccessPointMarker;
@property(readonly, nonatomic) id <RAPMapStateProtocol> placePickingMapState; // @synthesize placePickingMapState=_placePickingMapState;
- (void)_fillSubmissionParameters:(id)arg1;	// IMP=0x001000000044ef80
- (_Bool)_isRecursivelyComplete;	// IMP=0x001000000044ef2c
- (_Bool)isComplete;	// IMP=0x001000000044ef17
@property(readonly, nonatomic) CDStruct_02837cd9 placePickingMapRect;
@property(readonly, nonatomic) unsigned long long placePickingPreferredMapType;
@property(readonly, nonatomic) NSString *localizedPlacePickingPrompt;
- (void)setSelectedLabelMarker:(id)arg1 withMapState:(id)arg2;	// IMP=0x001000000044ed4d
- (void)setSelectedAccessPointMarker:(id)arg1;	// IMP=0x001000000044ecd2
@property(readonly, nonatomic) RAPQuestion<RAPMenuItem> *followUpQuestion; // @synthesize followUpQuestion=_followUpQuestion;
@property(readonly, nonatomic) long long questionCategory;
@property(readonly, nonatomic) int featureType;
@property(readonly, nonatomic) int userAction;
@property(readonly, nonatomic) int analyticTarget;
@property(readonly, nonatomic) NSString *localizedTitle;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *eventValue;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(copy, nonatomic) NSString *localizedServerControlledDescription;
@property(readonly) Class superclass;

@end

