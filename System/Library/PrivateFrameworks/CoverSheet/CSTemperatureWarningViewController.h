//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/CSModalViewDelegate-Protocol.h>

@class NSString;
@protocol CSThermalStatusProviding;

@interface CSTemperatureWarningViewController <CSModalViewDelegate>
{
    id <CSThermalStatusProviding> _thermalStatusProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000eaf00
- (void)handleSecondaryActionForView:(id)arg1;	// IMP=0x00000000000eaea8
- (long long)presentationPriority;	// IMP=0x00000000000eae9d
- (void)aggregateBehavior:(id)arg1;	// IMP=0x00000000000eae34
- (void)aggregateAppearance:(id)arg1;	// IMP=0x00000000000eac5f
- (void)viewDidLoad;	// IMP=0x00000000000eaa52
- (id)initWithThermalStatusProvider:(id)arg1;	// IMP=0x00000000000ea9e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

