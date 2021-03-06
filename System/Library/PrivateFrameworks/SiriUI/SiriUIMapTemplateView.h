//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/MKMapViewDelegate-Protocol.h>

@class CLGeocoder, CLPlacemark, MKMapView, MKPinAnnotationView, NSString, UIButton, UILabel, UITapGestureRecognizer;
@protocol SiriUIMapTemplateModel, SiriUIMapTemplateViewDelegate;

@interface SiriUIMapTemplateView <MKMapViewDelegate>
{
    MKMapView *_mapView;	// 8 = 0x8
    UILabel *_footnoteDescriptorLabel;	// 16 = 0x10
    UILabel *_footnoteLabel;	// 24 = 0x18
    MKPinAnnotationView *_pinAnnotationView;	// 32 = 0x20
    UIButton *_mapButton;	// 40 = 0x28
    CLPlacemark *_currentPlacemark;	// 48 = 0x30
    CLGeocoder *_geocoder;	// 56 = 0x38
    _Bool _needsToNotifyDelegateOfLocationUpdate;	// 64 = 0x40
    UITapGestureRecognizer *_tapRecognizer;	// 72 = 0x48
    id <SiriUIMapTemplateViewDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000036074
@property(nonatomic) __weak id <SiriUIMapTemplateViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleTapGesture:(id)arg1;	// IMP=0x0000000000035fd6
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x00000000000359b0
- (void)_mapButtonPressed:(id)arg1;	// IMP=0x0000000000035964
- (id)_configuredLabel;	// IMP=0x00000000000358d6
- (id)_configuredFootnoteLabel;	// IMP=0x000000000003585f
- (id)_configuredFootnoteDescriptorLabel;	// IMP=0x00000000000357b3
- (void)_notifyDelegateOfLocationUpdateIfNeededWithPlacemark:(id)arg1;	// IMP=0x000000000003572c
- (void)prepareForDismissal;	// IMP=0x00000000000356e8
- (void)layoutSubviews;	// IMP=0x0000000000035261
- (double)desiredHeight;	// IMP=0x0000000000035206
- (void)reloadData;	// IMP=0x0000000000034f30
- (id)initWithDataSource:(id)arg1;	// IMP=0x0000000000034cda

// Remaining properties
@property(nonatomic) __weak id <SiriUIMapTemplateModel> dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

