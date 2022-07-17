//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NPKCommutePlanField-Protocol.h>

@class NSArray, NSString, PKPaymentPassAction;
@protocol NPKDateRange;

@interface NPKCommutePlanField : NSObject <NPKCommutePlanField>
{
    NSString *_label;	// 8 = 0x8
    NSString *_detailLabel;	// 16 = 0x10
    NSString *_formattedValue;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    NSArray *_details;	// 40 = 0x28
    PKPaymentPassAction *_action;	// 48 = 0x30
    id <NPKDateRange> _usageDateRange;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000016fda9
@property(readonly, nonatomic) id <NPKDateRange> usageDateRange; // @synthesize usageDateRange=_usageDateRange;
@property(readonly, nonatomic) PKPaymentPassAction *action; // @synthesize action=_action;
@property(readonly, nonatomic) NSArray *details; // @synthesize details=_details;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *formattedValue; // @synthesize formattedValue=_formattedValue;
@property(readonly, nonatomic) NSString *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool isCountBasedCommutePlan;
@property(readonly, nonatomic) _Bool hasPendingUpdate;
- (id)initWithLabel:(id)arg1 detailLabel:(id)arg2 formattedValue:(id)arg3 usageDateRange:(id)arg4 identifier:(id)arg5 details:(id)arg6 action:(id)arg7;	// IMP=0x000000000016f6b5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
