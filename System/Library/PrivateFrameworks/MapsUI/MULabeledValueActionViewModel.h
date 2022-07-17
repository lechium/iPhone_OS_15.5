//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsUI/MUDynamicButtonCellModel-Protocol.h>
#import <MapsUI/MULabeledValueActionViewModelProviding-Protocol.h>

@class NSString;
@protocol MUDynamicButtonCellModelChangeDelegate;

@interface MULabeledValueActionViewModel : NSObject <MUDynamicButtonCellModel, MULabeledValueActionViewModelProviding>
{
    _Bool _emphasizeValueString;	// 8 = 0x8
    int _analyticsTarget;	// 12 = 0xc
    int _analyticAction;	// 16 = 0x10
    long long _actionVariant;	// 24 = 0x18
    NSString *_alternativeTitleString;	// 32 = 0x20
    NSString *_symbolName;	// 40 = 0x28
    NSString *_titleString;	// 48 = 0x30
    NSString *_valueString;	// 56 = 0x38
    CDUnknownBlockType _actionBlock;	// 64 = 0x40
}

+ (id)messageItemWithMapItem:(id)arg1;	// IMP=0x0000000000061e61
- (void).cxx_destruct;	// IMP=0x0000000000062184
@property(nonatomic) _Bool emphasizeValueString; // @synthesize emphasizeValueString=_emphasizeValueString;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(readonly, nonatomic) int analyticAction; // @synthesize analyticAction=_analyticAction;
@property(nonatomic) int analyticsTarget; // @synthesize analyticsTarget=_analyticsTarget;
@property(retain, nonatomic) NSString *valueString; // @synthesize valueString=_valueString;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(retain, nonatomic) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(retain, nonatomic) NSString *alternativeTitleString; // @synthesize alternativeTitleString=_alternativeTitleString;
@property(nonatomic) long long actionVariant; // @synthesize actionVariant=_actionVariant;
@property(readonly, nonatomic) long long actionStyle;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (void)loadSubtitleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000007b347

// Remaining properties
@property(nonatomic) __weak id <MUDynamicButtonCellModelChangeDelegate> changeDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
