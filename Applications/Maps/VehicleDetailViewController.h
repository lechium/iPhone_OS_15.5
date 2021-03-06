//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UIButton, UIImageView, UITableView, UIView, VGVehicle, VehicleAppCell, VehicleLabelCell, VehicleTextFieldCell, VehicleTitleDetailCell;
@protocol VehicleDetailViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VehicleDetailViewController : UIViewController
{
    VGVehicle *_vehicle;	// 8 = 0x8
    id _strongSelf;	// 16 = 0x10
    _Bool _deletingVehicle;	// 24 = 0x18
    id <VehicleDetailViewControllerDelegate> _delegate;	// 32 = 0x20
    unsigned long long _vehicleCount;	// 40 = 0x28
    NSArray *_tableStructure;	// 48 = 0x30
    UITableView *_tableView;	// 56 = 0x38
    UIView *_headerView;	// 64 = 0x40
    UIView *_vehicleColorView;	// 72 = 0x48
    UIImageView *_vehicleIconView;	// 80 = 0x50
    UIButton *_editButton;	// 88 = 0x58
    VehicleTextFieldCell *_nicknameCell;	// 96 = 0x60
    VehicleLabelCell *_editPlugsCell;	// 104 = 0x68
    VehicleTitleDetailCell *_licensePlateCell;	// 112 = 0x70
    VehicleLabelCell *_editLicensePlateCell;	// 120 = 0x78
    VehicleAppCell *_appCell;	// 128 = 0x80
    VehicleTitleDetailCell *_vehicleMakeCell;	// 136 = 0x88
    VehicleTitleDetailCell *_vehicleModelCell;	// 144 = 0x90
    VehicleLabelCell *_deleteCell;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x002000000085268a
@property(retain, nonatomic) VehicleLabelCell *deleteCell; // @synthesize deleteCell=_deleteCell;
@property(retain, nonatomic) VehicleTitleDetailCell *vehicleModelCell; // @synthesize vehicleModelCell=_vehicleModelCell;
@property(retain, nonatomic) VehicleTitleDetailCell *vehicleMakeCell; // @synthesize vehicleMakeCell=_vehicleMakeCell;
@property(retain, nonatomic) VehicleAppCell *appCell; // @synthesize appCell=_appCell;
@property(retain, nonatomic) VehicleLabelCell *editLicensePlateCell; // @synthesize editLicensePlateCell=_editLicensePlateCell;
@property(retain, nonatomic) VehicleTitleDetailCell *licensePlateCell; // @synthesize licensePlateCell=_licensePlateCell;
@property(retain, nonatomic) VehicleLabelCell *editPlugsCell; // @synthesize editPlugsCell=_editPlugsCell;
@property(retain, nonatomic) VehicleTextFieldCell *nicknameCell; // @synthesize nicknameCell=_nicknameCell;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) UIImageView *vehicleIconView; // @synthesize vehicleIconView=_vehicleIconView;
@property(retain, nonatomic) UIView *vehicleColorView; // @synthesize vehicleColorView=_vehicleColorView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *tableStructure; // @synthesize tableStructure=_tableStructure;
@property(nonatomic) unsigned long long vehicleCount; // @synthesize vehicleCount=_vehicleCount;
@property(nonatomic) __weak id <VehicleDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)virtualGarageDidUpdate:(id)arg1;	// IMP=0x001000000085221b
- (void)appearanceViewControllerDidSelectDone:(id)arg1;	// IMP=0x00100000008521c2
- (void)appearanceViewController:(id)arg1 didSelectColor:(id)arg2 nickname:(id)arg3;	// IMP=0x00100000008521b0
- (void)_reload;	// IMP=0x0010000000852147
- (void)_pressedOpen;	// IMP=0x0010000000851fa4
- (void)_pressedEditAppearance;	// IMP=0x0010000000851e52
- (void)_saveIfAppropriate;	// IMP=0x0010000000851d77
- (_Bool)_isMinimumViableVehicle;	// IMP=0x0010000000851d24
- (void)confirmRemoveVehicle;	// IMP=0x0010000000851945
- (void)_updateContent;	// IMP=0x00100000008511c7
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x0010000000851154
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x001000000085113c
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x00100000008510eb
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000850cc4
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0010000000850cb6
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000850bd6
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0010000000850add
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000850a15
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000008509a1
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x001000000085095d
- (void)dismiss;	// IMP=0x0010000000850919
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000085081a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000085071d
- (void)viewDidLoad;	// IMP=0x00100000008502aa
- (id)initWithVehicle:(id)arg1 delegate:(id)arg2;	// IMP=0x001000000084e730

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

