//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BackgroundColorButton, NSString, RAPCorrectableEntryPoints, UISegmentedControl;

__attribute__((visibility("hidden")))
@interface RAPEditLocationViewController
{
    struct CLLocationCoordinate2D _lastEditLocationCoordinate;	// 96 = 0x60
    _Bool _allowEditingEntryPoints;	// 112 = 0x70
    NSString *_navigationTitle;	// 120 = 0x78
    BackgroundColorButton *_addButton;	// 128 = 0x80
    UISegmentedControl *_editModeSegmentedControl;	// 136 = 0x88
    RAPCorrectableEntryPoints *_correctableEntryPoints;	// 144 = 0x90
    CDUnknownBlockType _selectionHandler;	// 152 = 0x98
    CDUnknownBlockType _cancelSelectionHandler;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00200000000fd65a
@property(copy, nonatomic) CDUnknownBlockType cancelSelectionHandler; // @synthesize cancelSelectionHandler=_cancelSelectionHandler;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(retain, nonatomic) RAPCorrectableEntryPoints *correctableEntryPoints; // @synthesize correctableEntryPoints=_correctableEntryPoints;
@property(retain, nonatomic) UISegmentedControl *editModeSegmentedControl; // @synthesize editModeSegmentedControl=_editModeSegmentedControl;
@property(retain, nonatomic) BackgroundColorButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) NSString *navigationTitle; // @synthesize navigationTitle=_navigationTitle;
- (void)editLocationMapView:(id)arg1 didChangeViewMode:(long long)arg2;	// IMP=0x00100000000fd528
- (void)editLocationMapViewFinishedZoomingOut:(id)arg1;	// IMP=0x00100000000fd4c7
- (void)editLocationMapViewFinishedZoomingIn:(id)arg1;	// IMP=0x00100000000fd466
- (void)editLocationMapViewFinishedPanning:(id)arg1;	// IMP=0x00100000000fd405
- (_Bool)_isInEditLocationMode;	// IMP=0x00100000000fd3d0
- (void)editLocationMapView:(id)arg1 didSelectAnnotationView:(id)arg2;	// IMP=0x00100000000fd22c
- (void)editEntryPointController:(id)arg1 willDismissWithViewMode:(long long)arg2;	// IMP=0x00100000000fd1e0
- (void);	// IMP=0x00100000000fd0f0
- (id)userDidRequestCreationOfEntryPointWithCoordinates:(struct CLLocationCoordinate2D)arg1 entryPointType:(long long)arg2;	// IMP=0x00100000000fd010
- (void)userDidRequestDeletionOfEntryPoint:(id)arg1;	// IMP=0x00100000000fcf3d
- (void)_presentEntryPointEditor:(id)arg1;	// IMP=0x00100000000fce1c
- (void)addEntryPoint;	// IMP=0x00100000000fcd04
- (void)selectedEditModeDidChange:(id)arg1;	// IMP=0x00100000000fc8e8
- (void)reloadData;	// IMP=0x00100000000fc735
- (void)didTapDone;	// IMP=0x00100000000fc5e4
- (void)didTapCancel;	// IMP=0x00100000000fc52e
- (void)editLocationMapView:(id)arg1 didChangeCenterCoordinate:(struct CLLocationCoordinate2D)arg2;	// IMP=0x00100000000fc437
@property(readonly, nonatomic) int analyticTarget;
- (void)setupConstraints;	// IMP=0x00100000000fb8c7
- (void)viewDidLoad;	// IMP=0x00100000000fb009
- (id)initWithInitialCoordinates:(struct CLLocationCoordinate2D)arg1 inMapRect:(CDStruct_02837cd9)arg2 analyticsTarget:(int)arg3 markerViewAttributes:(id)arg4 allowEditingEntryPoints:(_Bool)arg5 correctableEntryPoints:(id)arg6 selectionHandler:(CDUnknownBlockType)arg7 cancelSelectionHandler:(CDUnknownBlockType)arg8;	// IMP=0x00100000000faeca

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *eventValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
