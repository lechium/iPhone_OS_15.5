//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKTransitItemIncidentView-Protocol.h>

@class MKTransitIncidentItemCellBackgroundView, MKTransitIncidentViewModel, NSString;

@interface MKTransitIncidentSymbolImageCell <MKTransitItemIncidentView>
{
    MKTransitIncidentItemCellBackgroundView *_backgroundView;	// 8 = 0x8
    _Bool _padBottom;	// 16 = 0x10
    long long _cellPosition;	// 24 = 0x18
    MKTransitIncidentViewModel *_viewModel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000015be64
@property(retain, nonatomic) MKTransitIncidentViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) long long cellPosition; // @synthesize cellPosition=_cellPosition;
@property(nonatomic) _Bool padBottom; // @synthesize padBottom=_padBottom;
- (void)_updateAppearance;	// IMP=0x000000000015ba95
- (void)_configureWithMessage:(id)arg1 referenceDate:(id)arg2 lastUpdated:(id)arg3 incidentIsBlocking:(_Bool)arg4 shouldShowImage:(_Bool)arg5 inSiri:(_Bool)arg6;	// IMP=0x000000000015b9b9
- (void)configureWithIncidentMessage:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(_Bool)arg3 inSiri:(_Bool)arg4;	// IMP=0x000000000015b77d
- (void)configureWithMessage:(id)arg1 incident:(id)arg2 referenceDate:(id)arg3 shouldShowImage:(_Bool)arg4 inSiri:(_Bool)arg5;	// IMP=0x000000000015b6a7
- (void)configureWithIncident:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(_Bool)arg3 inSiri:(_Bool)arg4;	// IMP=0x000000000015b5c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

