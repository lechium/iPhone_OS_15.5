//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GCControllerButtonInput, GCControllerDirectionPad;

@interface GCDualShockGamepad
{
    GCControllerButtonInput *_touchpadButton;	// 8 = 0x8
    GCControllerDirectionPad *_touchpadPrimary;	// 16 = 0x10
    GCControllerDirectionPad *_touchpadSecondary;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000424a
- (void).cxx_destruct;	// IMP=0x0000000000004d9e
@property(readonly, nonatomic) GCControllerDirectionPad *touchpadSecondary; // @synthesize touchpadSecondary=_touchpadSecondary;
@property(readonly, nonatomic) GCControllerDirectionPad *touchpadPrimary; // @synthesize touchpadPrimary=_touchpadPrimary;
@property(readonly, nonatomic) GCControllerButtonInput *touchpadButton; // @synthesize touchpadButton=_touchpadButton;
- (void)initializeExtraControllerElements;	// IMP=0x00000000000043fd
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000000043b1
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004365
- (id)initWithController:(id)arg1;	// IMP=0x0000000000004252
- (void)_activateExtendedSupport;	// IMP=0x0000000000004de0

@end
