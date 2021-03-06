//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/ConferenceCellDelegate-Protocol.h>
#import <EventKitUI/EKEventDetailPredictedLocationCellDelegate-Protocol.h>
#import <EventKitUI/UITextViewDelegate-Protocol.h>

@class EKEventDetailConferenceCell, EKEventDetailPredictedLocationCell, NSMutableArray, NSObject, NSString, UIButton, UILabel, UIView;
@protocol EKEventDetailTitleCellDelegate;

@interface EKEventDetailTitleCell <UITextViewDelegate, EKEventDetailPredictedLocationCellDelegate, ConferenceCellDelegate>
{
    UILabel *_titleView;	// 24 = 0x18
    NSMutableArray *_locationItems;	// 32 = 0x20
    UIView *_predictedLocationContainer;	// 40 = 0x28
    EKEventDetailPredictedLocationCell *_predictedLocationView;	// 48 = 0x30
    EKEventDetailConferenceCell *_conferenceDetailView;	// 56 = 0x38
    UILabel *_travelTimeView;	// 64 = 0x40
    NSMutableArray *_dateTimeViews;	// 72 = 0x48
    UILabel *_recurrenceView;	// 80 = 0x50
    UILabel *_statusView;	// 88 = 0x58
    UIButton *_editButton;	// 96 = 0x60
    unsigned int _visibleItems;	// 104 = 0x68
    _Bool _observingLocaleChanges;	// 108 = 0x6c
    _Bool _rejectionReasonCell;	// 109 = 0x6d
    _Bool _hideTopCellSeparator;	// 110 = 0x6e
    _Bool _hideBottomCellSeparator;	// 111 = 0x6f
    int _lastPosition;	// 112 = 0x70
    _Bool _hasMapItemLaunchOptionFromTimeToLeaveNotification;	// 116 = 0x74
    _Bool _showingInlineDayView;	// 117 = 0x75
    NSObject<EKEventDetailTitleCellDelegate> *_delegate;	// 120 = 0x78
    unsigned long long _numberOfTitleLines;	// 128 = 0x80
}

+ (id)_locationFont;	// IMP=0x00000000000f3edc
+ (id)_largeTitleFont;	// IMP=0x00000000000f3de7
+ (id)_titleFont;	// IMP=0x00000000000f3d2b
+ (void)_invalidateCachedFonts;	// IMP=0x00000000000f3d0e
+ (void)_registerForInvalidation;	// IMP=0x00000000000f3364
- (void).cxx_destruct;	// IMP=0x00000000000f955b
@property(nonatomic) unsigned long long numberOfTitleLines; // @synthesize numberOfTitleLines=_numberOfTitleLines;
@property(nonatomic) _Bool showingInlineDayView; // @synthesize showingInlineDayView=_showingInlineDayView;
@property(nonatomic) _Bool hasMapItemLaunchOptionFromTimeToLeaveNotification; // @synthesize hasMapItemLaunchOptionFromTimeToLeaveNotification=_hasMapItemLaunchOptionFromTimeToLeaveNotification;
@property(nonatomic) __weak NSObject<EKEventDetailTitleCellDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)conferenceCellUpdated:(id)arg1;	// IMP=0x00000000000f94a0
- (id)owningViewController;	// IMP=0x00000000000f9450
- (void)_saveEventWithSpan:(long long)arg1;	// IMP=0x00000000000f92c6
- (void)eventDetailPredictedLocationCellRejectedPrediction:(id)arg1;	// IMP=0x00000000000f9173
- (void)eventDetailPredictedLocationCellAcceptedPrediction:(id)arg1 disambiguatedLocation:(id)arg2;	// IMP=0x00000000000f8d6d
- (void)_promptForSpanWithSourceView:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f8a5c
- (void)layoutForWidth:(double)arg1 position:(int)arg2;	// IMP=0x00000000000f88ee
- (double)_layoutForWidth:(double)arg1;	// IMP=0x00000000000f60a1
- (void)layoutSubviews;	// IMP=0x00000000000f6040
- (double)titleHeight;	// IMP=0x00000000000f5fef
- (id)_conferenceDetailView;	// IMP=0x00000000000f5f70
- (id)_predictedLocationView;	// IMP=0x00000000000f5ef1
- (id)_predictedLocationContainer;	// IMP=0x00000000000f5e03
- (id)_editButton;	// IMP=0x00000000000f5ca2
- (id)_statusView;	// IMP=0x00000000000f5b91
- (id)_recurrenceView;	// IMP=0x00000000000f5a86
- (id)_travelTimeView;	// IMP=0x00000000000f597b
- (id)_dateTimeViewForLine:(unsigned long long)arg1;	// IMP=0x00000000000f57ab
- (id)_titleView;	// IMP=0x00000000000f56ab
- (void)_updateSeparatorStyle;	// IMP=0x00000000000f55c6
- (void)setHideBottomCellSeparator:(_Bool)arg1;	// IMP=0x00000000000f55a3
- (void)setHideTopCellSeparator:(_Bool)arg1;	// IMP=0x00000000000f5580
- (void)editButtonTapped;	// IMP=0x00000000000f5507
- (_Bool)_shouldShowConferenceCell;	// IMP=0x00000000000f5410
- (_Bool)update;	// IMP=0x00000000000f4096
- (void)addLocation:(id)arg1;	// IMP=0x00000000000f3f6a
- (void)setLocation:(id)arg1;	// IMP=0x00000000000f3f58
- (void)setPrimaryTextColor:(id)arg1;	// IMP=0x00000000000f3b31
- (void)setColor:(id)arg1;	// IMP=0x00000000000f3b2b
- (void)setStatusString:(id)arg1;	// IMP=0x00000000000f3a99
- (void)setRecurrenceString:(id)arg1;	// IMP=0x00000000000f3a07
- (void)setTravelTimeString:(id)arg1;	// IMP=0x00000000000f3975
- (void)_setDateTimeString:(id)arg1 line:(unsigned long long)arg2;	// IMP=0x00000000000f38da
- (void)setTitle:(id)arg1;	// IMP=0x00000000000f3660
@property(readonly, nonatomic) UIView *sourceViewForPopover;
- (_Bool)_useLargeFonts;	// IMP=0x00000000000f3628
- (void)contentSizeCategoryChanged:(id)arg1;	// IMP=0x00000000000f35a0
- (void)layoutMarginsDidChange;	// IMP=0x00000000000f3535
- (id)initAsRejectionReasonCellWithEvent:(id)arg1;	// IMP=0x00000000000f34f4
- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2 style:(long long)arg3;	// IMP=0x00000000000f3424
- (void)dealloc;	// IMP=0x00000000000f32ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

