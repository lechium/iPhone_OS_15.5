//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKColoringView-Protocol.h>

@class NSString, UIColor, _NTKColorManager;

@interface NTKColoringView : UIView <NTKColoringView>
{
    _NTKColorManager *_colorManager;	// 8 = 0x8
    UIColor *_overrideColor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006f89d
@property(retain, nonatomic) UIColor *overrideColor; // @synthesize overrideColor=_overrideColor;
@property(nonatomic) _Bool usesLegibility; // @dynamic usesLegibility;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000006f851
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;	// IMP=0x000000000006f7db
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000006f77b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000006f6b1

// Remaining properties
@property(retain, nonatomic) UIColor *color; // @dynamic color;
@property(readonly, nonatomic) UIColor *contentColor; // @dynamic contentColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
