//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CellularPlanManager/NSCopying-Protocol.h>
#import <CellularPlanManager/NSSecureCoding-Protocol.h>

@class CTCellularPlan, CTUserLabel, NSNumber, NSString, NSUUID;

@interface CTCellularPlanItem : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;	// 8 = 0x8
    NSString *_iccid;	// 16 = 0x10
    _Bool _shouldDisplayType;	// 24 = 0x18
    _Bool _shouldAutoSelectWhenInRange;	// 25 = 0x19
    _Bool _shouldDisplayExtendedConsentInfo;	// 26 = 0x1a
    _Bool _isSimStateValid;	// 27 = 0x1b
    _Bool _shouldDisplay;	// 28 = 0x1c
    _Bool _shouldAppearDisabled;	// 29 = 0x1d
    _Bool _isActiveDataPlan;	// 30 = 0x1e
    _Bool _isDefaultVoice;	// 31 = 0x1f
    _Bool _isLocalTransferToeSIMSupported;	// 32 = 0x20
    _Bool _isTransferred;	// 33 = 0x21
    _Bool _isSelectable;	// 34 = 0x22
    NSString *_label;	// 40 = 0x28
    CTCellularPlan *_plan;	// 48 = 0x30
    long long _type;	// 56 = 0x38
    long long _lockState;	// 64 = 0x40
    long long _transferredStatus;	// 72 = 0x48
    NSString *_transferredToDeviceDisplayName;	// 80 = 0x50
    NSString *_uuid;	// 88 = 0x58
    NSString *_phoneNumber;	// 96 = 0x60
    CTUserLabel *_userLabel;	// 104 = 0x68
    NSNumber *_isSelectedOverride;	// 112 = 0x70
    NSUUID *_companionSlotUuid;	// 120 = 0x78
    NSString *_companionSimLabelId;	// 128 = 0x80
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000001dd8
- (void).cxx_destruct;	// IMP=0x00000000000031c2
@property(copy, nonatomic) NSString *companionSimLabelId; // @synthesize companionSimLabelId=_companionSimLabelId;
@property(copy, nonatomic) NSUUID *companionSlotUuid; // @synthesize companionSlotUuid=_companionSlotUuid;
@property(nonatomic) _Bool isSelectable; // @synthesize isSelectable=_isSelectable;
@property(retain, nonatomic) NSNumber *isSelectedOverride; // @synthesize isSelectedOverride=_isSelectedOverride;
@property(retain, nonatomic) CTUserLabel *userLabel; // @synthesize userLabel=_userLabel;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSString *transferredToDeviceDisplayName; // @synthesize transferredToDeviceDisplayName=_transferredToDeviceDisplayName;
@property(readonly, nonatomic) long long transferredStatus; // @synthesize transferredStatus=_transferredStatus;
@property(nonatomic) _Bool isTransferred; // @synthesize isTransferred=_isTransferred;
@property(nonatomic) _Bool isLocalTransferToeSIMSupported; // @synthesize isLocalTransferToeSIMSupported=_isLocalTransferToeSIMSupported;
@property(nonatomic) _Bool isDefaultVoice; // @synthesize isDefaultVoice=_isDefaultVoice;
@property(nonatomic) _Bool isActiveDataPlan; // @synthesize isActiveDataPlan=_isActiveDataPlan;
@property(nonatomic) _Bool shouldAppearDisabled; // @synthesize shouldAppearDisabled=_shouldAppearDisabled;
@property(nonatomic) _Bool shouldDisplay; // @synthesize shouldDisplay=_shouldDisplay;
@property(nonatomic) _Bool isSimStateValid; // @synthesize isSimStateValid=_isSimStateValid;
@property(nonatomic) _Bool shouldDisplayExtendedConsentInfo; // @synthesize shouldDisplayExtendedConsentInfo=_shouldDisplayExtendedConsentInfo;
@property(nonatomic) _Bool shouldAutoSelectWhenInRange; // @synthesize shouldAutoSelectWhenInRange=_shouldAutoSelectWhenInRange;
@property(nonatomic) _Bool shouldDisplayType; // @synthesize shouldDisplayType=_shouldDisplayType;
@property(nonatomic) long long lockState; // @synthesize lockState=_lockState;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) CTCellularPlan *plan; // @synthesize plan=_plan;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (id)customDescription;	// IMP=0x0000000000002e43
- (id)redactedDescription;	// IMP=0x0000000000002cdb
- (id)description;	// IMP=0x0000000000002adc
- (id)transferredStatusAsString:(long long)arg1;	// IMP=0x0000000000002a85
- (id)typeAsString:(long long)arg1;	// IMP=0x0000000000002a4c
@property(readonly, nonatomic) NSString *carrierName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *iccid;
@property(readonly, nonatomic) _Bool isInstalling;
@property(readonly, nonatomic) _Bool isSelected;
@property(readonly, nonatomic) _Bool isBackedByCellularPlan;
- (long long)compare:(id)arg1;	// IMP=0x00000000000026d5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000024a3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000020ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000205c
- (id)initWithIccid:(id)arg1 uuid:(id)arg2 name:(id)arg3 phoneNumber:(id)arg4 label:(id)arg5 isLocalTransferToeSIMSupported:(_Bool)arg6 isTransferred:(_Bool)arg7 transferredStatus:(long long)arg8 transferredToDeviceDisplayName:(id)arg9;	// IMP=0x0000000000002001
- (id)initWithCellularPlan:(id)arg1 uuid:(id)arg2 type:(long long)arg3 phoneNumber:(id)arg4 label:(id)arg5 transferredStatus:(long long)arg6 transferredToDeviceDisplayName:(id)arg7;	// IMP=0x0000000000001fbb
- (id)initWithCellularPlan:(id)arg1 uuid:(id)arg2 iccid:(id)arg3 name:(id)arg4 type:(long long)arg5 phoneNumber:(id)arg6 label:(id)arg7 isLocalTransferToeSIMSupported:(_Bool)arg8 isTransferred:(_Bool)arg9 transferredStatus:(long long)arg10 transferredToDeviceDisplayName:(id)arg11;	// IMP=0x0000000000001de0

@end
