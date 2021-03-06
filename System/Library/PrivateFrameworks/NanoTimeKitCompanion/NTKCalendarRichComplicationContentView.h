//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CLKDevice, NSArray, NTKColoringLabel, NTKPillView, UIColor;

@interface NTKCalendarRichComplicationContentView : UIView
{
    _Bool _hasConflicts;	// 8 = 0x8
    CLKDevice *_device;	// 16 = 0x10
    NTKPillView *_verticalPill;	// 24 = 0x18
    NTKPillView *_verticalPill2;	// 32 = 0x20
    NTKColoringLabel *_headerLabel;	// 40 = 0x28
    NTKColoringLabel *_bodyLabel;	// 48 = 0x30
    NTKColoringLabel *_body2Label;	// 56 = 0x38
    NSArray *_pillAlignedToBody1BottomConstraints;	// 64 = 0x40
    NSArray *_pillAlignedToBody2BottomConstraints;	// 72 = 0x48
    NSArray *_conflictEventsPillAlignmentConstraints;	// 80 = 0x50
    NSArray *_conflictEventsPill2AlignmentConstraints;	// 88 = 0x58
    NSArray *_noPillConstraints;	// 96 = 0x60
    UIColor *_firstEventColor;	// 104 = 0x68
    NSArray *_otherEventColors;	// 112 = 0x70
    unsigned long long _eventCount;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000115547
@property(nonatomic) _Bool hasConflicts; // @synthesize hasConflicts=_hasConflicts;
@property(nonatomic) unsigned long long eventCount; // @synthesize eventCount=_eventCount;
@property(retain, nonatomic) NSArray *otherEventColors; // @synthesize otherEventColors=_otherEventColors;
@property(retain, nonatomic) UIColor *firstEventColor; // @synthesize firstEventColor=_firstEventColor;
@property(retain, nonatomic) NSArray *noPillConstraints; // @synthesize noPillConstraints=_noPillConstraints;
@property(retain, nonatomic) NSArray *conflictEventsPill2AlignmentConstraints; // @synthesize conflictEventsPill2AlignmentConstraints=_conflictEventsPill2AlignmentConstraints;
@property(retain, nonatomic) NSArray *conflictEventsPillAlignmentConstraints; // @synthesize conflictEventsPillAlignmentConstraints=_conflictEventsPillAlignmentConstraints;
@property(retain, nonatomic) NSArray *pillAlignedToBody2BottomConstraints; // @synthesize pillAlignedToBody2BottomConstraints=_pillAlignedToBody2BottomConstraints;
@property(retain, nonatomic) NSArray *pillAlignedToBody1BottomConstraints; // @synthesize pillAlignedToBody1BottomConstraints=_pillAlignedToBody1BottomConstraints;
@property(retain, nonatomic) NTKColoringLabel *body2Label; // @synthesize body2Label=_body2Label;
@property(retain, nonatomic) NTKColoringLabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) NTKColoringLabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) NTKPillView *verticalPill2; // @synthesize verticalPill2=_verticalPill2;
@property(retain, nonatomic) NTKPillView *verticalPill; // @synthesize verticalPill=_verticalPill;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
- (void)updateLayout;	// IMP=0x0000000000114e88
- (id)initForDevice:(id)arg1;	// IMP=0x00000000001131b8

@end

